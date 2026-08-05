module.exports = grammar({
    name: 'gcode',
    rules: {
        source_file: $ => repeat($._definition),
        _definition: $ => seq(choice($.comment, seq($.command, optional($.comment))), '\n'),
        comment: $ => token(seq(';', /[^\n]*/)),
        command: $ => seq(optional($.command_number), $.gcode, repeat($.arg)),
        command_number: $ => /(N[1-9][0-9\.]*|N0)/,
        gcode: $ => seq($.gcode_letter, $.gcode_number),
        gcode_letter: $ => /G|M|T|P|D/,
        gcode_number: $ => /[0-9]+(\.[0-9]+)?/,
        arg: $ => seq($.arg_letter, optional($.arg_value)),
        arg_letter: $ => /[A-Z]/,
        arg_value: $ => choice(
            $.number,
            $.string
        ),
        // A value has to touch its letter, otherwise "M106 R A125" would read A125 as R's value.
        // Slicers omit the leading zero, so ".8" and "-.8" must parse as numbers.
        number: $ => token.immediate(/[-+]?([0-9]+\.[0-9]*|\.[0-9]+|[0-9]+)([eE][-+]?[0-9]+)?/),
        string: $ => choice(
            // Prusa writes quoted strings with a space after the letter: M862.3 P "MK4S"
            /\"[^\"]*\"/,
            // An unquoted value cannot start with an upper case letter, otherwise "G28 XY" would
            // read Y as the value of X instead of as a second flag.
            token.immediate(/[^;\sA-Z][^;\s]*/),
        ),
    }
});
