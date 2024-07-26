module.exports = grammar({
    name: 'gcode',
    rules: {
        source_file: $ => repeat($._definition),
        _definition: $ => seq(choice($.comment, seq($.command, optional($.comment))), '\n'),
        comment: $ => token(seq(';', /[^\n]*/)),
        command: $ => seq($.gcode, repeat($.arg)),
        gcode: $ => seq($.gcode_letter, $.gcode_number),
        gcode_letter: $ => /G|M|T|P/,
        gcode_number: $ => /([1-9][0-9\.]*|0)/,
        arg: $ => seq($.arg_letter, optional($.arg_value)),
        arg_letter: $ => /[A-Z]/,
        arg_value: $ => choice(
            $._arg_numeric,
            $._arg_string
        ),
        _arg_numeric: $ => /-?[0-9]+(\.[0-9]+)?/,
        _arg_string: $ => choice(
            /\"[^\"]*\"/,
            /[^;\s]+/,
        ),
    }
});
