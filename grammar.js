module.exports = grammar({
  name: 'eu4mod',

  extras: $ => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
  ],

  inline: $ => [
    $._dot_mod_statement,
    $._gfx_types_definition
  ],

  rules: {

    file: $ => choice(
      $.dot_mod,
      $.dot_gfx,
    ),


    //===============================================//
    //       MOD -> Rules for *.mod files :          //
    //===============================================//

    dot_mod: $ => repeat1(
      $._dot_mod_statement
    ),

    _dot_mod_statement: $ => choice(
      $._statement_name,
      $._statement_mod_path,
      $._statement_mod_archive,
      $._statement_mod_remote_file_id,
      $._statement_mod_version,
      $._statement_mod_picture,
      $._statement_mod_supported_version,
      $._statement_mod_replace_path,
      $._statement_mod_tags,
      $._statement_mod_dependencies
    ),

    //===============================================//
    //        GFX -> Rules for *.gfx files :         //
    //===============================================//

    dot_gfx: $ => repeat1(
        $._gfx_types_definition
    ),

    _gfx_types_definition: $ => alias(choice(
      $._spriteTypes
    ), $.types_definition),

    //---------//
    // TYPES :
    //---------//

    // spriteTypes

    _spriteTypes: $ => seq(
      alias('spriteTypes', $.identifier),
      $.assign_equal,
      $._spriteTypes_block
    ),

    _spriteTypes_block: $ => seq(
      '{',
      repeat(choice(
        $._spriteTypes_statement,
        $._spriteTypes_type
      )),
      '}'
    ),

    _spriteTypes_statement: $ => alias(choice(
      $._statement_gfx_cursor_offset
    ), $.statement),

    _spriteTypes_type: $ => alias(choice(
      $._spriteType
    ), $.type_definition),

    //---------//
    // TYPE :
    //---------//

    // spriteType

    _spriteType: $ => seq(
      alias('spriteType', $.identifier),
      $.assign_equal,
      $._spriteType_block
    ),

    _spriteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_name,
          $._statement_gfx_texturefile,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_overlay_frames_per_row,
          $._statement_gfx_overlay_rows,
          $._statement_gfx_effectFile,
          $._statement_gfx_animation
        ), $.statement)),
      '}'
    ),


    //==============================//
    //          STATEMENTS          //
    //==============================//

    //-------------------------------------//
    //  Commons statements [_statement_X]  //
    //-------------------------------------//

    _statement_name: $ => seq(
      alias('name', $.name_identifier),
      optional(seq(
        $.assign_equal,
        alias($.string, $.name_value)
      ))
    ),

    _statement_string: $ => seq(
      $.identifier,
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _entry_x: $ => seq(
      alias('x', $.identifier),
      optional(seq(
        $.assign_equal,
        $._number_precision_1
      ))
    ),

    _entry_y: $ => seq(
      alias('y', $.identifier),
      optional(seq(
        $.assign_equal,
        $._number_precision_1
      ))
    ),

    //-------------------------------------//
    //  MOD statements [_statement_mod_X]  //
    //-------------------------------------//

    _statement_mod_path: $ => seq(
      alias('path', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_mod_archive: $ => seq(
      alias('archive', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq('"', /[^\"\n]*/, '.zip"')), $.string)
      ))
    ),

    _statement_mod_remote_file_id: $ => seq(
      alias('remote_file_id', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq('"', /\d*/, '"')), $.string)
      ))
    ),

    _statement_mod_version: $ => seq(
      alias('version', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[0-9]+/,
          repeat(seq(
            '.',
            /[0-9]+/)),
          '"'
        )), $.string)
      ))
    ),

    _statement_mod_picture: $ => seq(
      alias('picture', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]*/,
          choice('.jpg', '.png'),
          '"'
        )), $.string)
      ))
    ),

    _statement_mod_supported_version: $ => seq(
      alias('supported_version', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[0-9]+/,
          '.',
          /[0-9]+/,
          optional(token(seq(
            '.',
            choice(/[0-9]+/, '*'),
            optional(token(seq(
              '.',
              choice(/[0-9]+/, '*'),
            ))),
          ))),
          '"'
        )), $.string)
      ))
    ),

    _statement_mod_replace_path: $ => seq(
      alias('replace_path', $.identifier),
      optional(seq(
        $.assign_equal,
        $._mod_replace_path_folder
      ))
    ),

    _mod_replace_path_folder: $ => alias(token(
      seq(
        '"',
        choice(
          'common', 'decisions', 'events', 'gfx', 'history', 'interface',
          'localisation', 'map', 'missions'
        ),
        optional(/[^\"\n]+/),
        '"'
      )), $.string
    ),

    _statement_mod_tags: $ => seq(
      alias('tags', $.identifier),
      optional(seq(
        $.assign_equal,
        $._mod_tags_block
      ))
    ),

    _mod_tags_block: $ => seq(
      '{',
      repeat($._mod_tags_keyword),
      '}'
    ),

    _mod_tags_keyword: $ => alias(choice(
      /"[Aa]lternative [Hh]istory"/, /"[Bb]alance"/, /"[Ee]vents"/,
      /"[Ee]xpansion"/, /"[Ff]ixes"/, /"[Gg]ameplay"/, /"[Gg]raphics"/,
      /"[Gg]uide"/, /"[Hh]istorical"/, /"[Ll]oading [Ss]creen"/, /"[Mm]ap"/,
      /"[Mm]ilitary"/, /"[Mm]issions [Aa]nd [Dd]ecisions"/,
      /"[Nn]ational [Ii]deas"/, /"[Nn]ew [Nn]ations"/, /"[Rr]eligion"/,
      /"[Ss]ound"/, /"[Tt]echnologies"/, /"[Tt]rade"/, /"[Tt]ranslation"/,
      /"[Uu]tilities"/, /"[Cc]onverted [Ff]rom CKII"/
      ), $.tags_keyword
    ),

    _statement_mod_dependencies: $ => seq(
      alias('dependencies', $.identifier),
      optional(seq(
        $.assign_equal,
        $._mod_dependencies_block
      ))
    ),

    _mod_dependencies_block: $ => seq(
      '{',
      repeat(alias($.string, $.dependencies)),
      '}'
    ),

    //-------------------------------------//
    //  GFX statements [_statement_gfx_X]  //
    //-------------------------------------//

    _statement_gfx_cursor_offset: $ => seq(
      alias('cursor_offset', $.identifier),
      $.assign_equal,
      optional(seq(
        '{',
        $.number,
        $.number,
        '}'
      ))
    ),

   _statement_gfx_texturefile: $ => seq(
      alias('texturefile', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]+/,
          choice('.dds', '.tga'),
          '"'
        )), $.string)
      ))
    ),

   _statement_gfx_noOfFrames: $ => seq(
      alias('noOfFrames', $.identifier),
      optional(seq(
        $.assign_equal,
        $._integer_positive
      ))
    ),

    _statement_gfx_overlay_frames_per_row: $ => seq(
       alias('overlay_frames_per_row', $.identifier),
       optional(seq(
         $.assign_equal,
         $._integer_positive
       ))
     ),

    _statement_gfx_overlay_rows: $ => seq(
       alias('overlay_rows', $.identifier),
       optional(seq(
         $.assign_equal,
         $._integer_positive
       ))
     ),

    _statement_gfx_effectFile: $ => seq(
       alias('effectFile', $.identifier),
       optional(seq(
         $.assign_equal,
         alias(token(seq(
           '"',
           /[^\"\n]+/,
           '.lua',
           '"'
         )), $.string)
       ))
     ),

    _statement_gfx_animation: $ => seq(
      alias('animation', $.identifier),
      optional(seq(
        $.assign_equal,
        $._gfx_animation_block
      ))
    ),

    _gfx_animation_block: $ => seq(
      '{',
      repeat(choice(
        $._animation_entry_dds,
        $._animation_entry_angle,
        $._animation_entry_bool,
        $._animation_entry_time,
        $._animation_entry_xy,
        $._animation_entry_blendmode,
        $._animation_entry_type,
        $._animation_entry_frames,
      )),
      '}'
    ),

    _animation_entry_dds: $ => seq(
      alias(choice(
        'animationmaskfile',
        'animationtexturefile'
      ), $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]+/,
          '.dds',
          '"'
        )), $.string)
      ))
    ),

    _animation_entry_angle: $ => seq(
      alias('animationrotation', $.identifier),
      optional(seq(
        $.assign_equal,
        $.angle
      ))
    ),

    _animation_entry_bool: $ => seq(
      alias('animationlooping', $.identifier),
      optional(seq(
        $.assign_equal,
        $._yes_no
      ))
    ),

    _animation_entry_time: $ => seq(
      alias(choice(
        'animationtime',
        'animationdelay'
      ), $.identifier),
      optional(seq(
        $.assign_equal,
        $.time
      ))
    ),

    _animation_entry_xy: $ => seq(
      alias(choice(
        'animationrotationoffset',
        'animationtexturescale'
      ), $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        choice(
          seq($._entry_x, $._entry_y),
          seq($._entry_y, $._entry_x)
        ),
        '}'
      ))
    ),

    _animation_entry_blendmode: $ => seq(
      alias('animationblendmode', $.identifier),
      optional(seq(
        $.assign_equal,
        choice('"add"', '"multiply"', '"overlay"')
      ))
    ),

    _animation_entry_type: $ => seq(
      alias('animationtype', $.identifier),
      optional(seq(
        $.assign_equal,
        choice('"scrolling"', '"rotating"', '"pulsing"')
      ))
    ),

    _animation_entry_frames: $ => seq(
      alias('animationframes', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        repeat1($._integer_positive),
        '}'
      ))
    ),

    //======================================================//
    //     Default grammar to find not handled keywords:    //
    //======================================================//

    debug_loop: $ => seq(
      $.identifier,
      $.assign_equal,
      choice(
        $.string,
        $.number,
        $.identifier,
        $._debug_block
      )
    ),

    _debug_block: $ => seq(
      '{',
      choice(
        repeat($.string),
        repeat($.number),
        repeat($.debug_loop)
      ),
      '}'
    ),

    //==============================//
    //            TOKENS            //
    //==============================//


    identifier: $ => /[a-z_][a-zA-Z0-9]*/,

    assign_equal: $ => '=',

    string: $ => /"[^\"\n]*"/,

    number: $ => token(seq(
      optional('-'),
      /\d+/,
      optional(/\.\d+/),
      optional('f')
    )),

    _number_precision_1: $ => alias(token(seq(
      /\d+/,
      '.',
      /\d/
    )), $.number),

    integer: $ => token(seq(
      optional('-'),
      /\d+/
    )),

    _integer_positive: $ => alias(/\d+/, $.integer),

    byte: $ => /[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]/,

    angle: $ => /36[0]\.0|3[0-5][0-9]\.[0-9]|[12][0-9][0-9]\.[0-9]|[1-9]?[0-9]\.[0-9]/,

    time: $ => token(seq(
      /\d+/,
      '.',
      /\d/
    )),

    boolean: $ => choice('true', 'false'),

    _yes_no: $ => alias(choice('yes', 'no'), $.boolean),

    comment: $ => /\#[^\n]*/,

    _eol: $ => token(/\r?\n/),

    debug: $ => /.+/

  }
});
