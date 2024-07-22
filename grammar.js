module.exports = grammar({
    name: 'gcode',
    rules: {
        source_file: $ => repeat($._definition),
        _definition: $ => choice($.comment, $.command),
        comment: $ => token(seq(';', /[^\n]*\n/)),
        command: $ => seq($.gcode, repeat($.arg)),
        gcode: $ => seq($.gcode_letter, $.gcode_number),
        gcode_letter: $ => /G|M|T|P/,
        gcode_number: $ => /[0-9\.]+/,
        arg: $ => seq($.arg_letter, $.arg_value),
        arg_letter: $ => /[A-Z]/,
        arg_value: $ => choice(
            $._arg_numeric,
            $._arg_string
        ),
        _arg_numeric: $ => /-?[0-9]+(\.[0-9]+)?/,
        _arg_string: $ => choice(
            /\"[^\"]\"/,
            /\S+/,
        ),
    }
});
