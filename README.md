


# Lexical Analyzer for C Code

This project is a simple lexical analyzer for C code written in C itself. It takes C source code as input, analyzes it, and produces a structured output in a user-friendly format. Lexical analysis is the first phase of a compiler, and this program helps break down C code into meaningful tokens.

## Features

- Recognizes and categorizes tokens such as operators, special symbols, digits, keywords, and identifiers.
- Handles common C operators and special symbols.
- Identifies C keywords such as `int`, `if`, `else`, `do`, `while`, and `main`.
- Generates an output file with a summary of tokens, their types, and associated lexemes.
- Supports multi-line code with line numbers.



## Example Output

```
Line no.	Token no.	Token          	Lexeme
1      	0      	Keyword        	int
1      	1      	Identifier     	main
1      	2      	Special symbol 	(
1      	3      	Special symbol 	)
1      	4      	Special symbol 	{
2      	5      	Keyword        	int
2      	6      	Identifier     	a
2      	7      	Special symbol 	=
2      	8      	Digit          	42
2      	9      	Operator       	+
2      	10     	Digit          	7
2      	11     	Special symbol 	;
3      	12     	Keyword        	if
3      	13     	Special symbol 	(
3      	14     	Identifier     	a
3      	15     	Operator       	>
3      	16     	Digit          	50
3      	17     	Special symbol 	)
3      	18     	Special symbol 	{
4      	19     	Identifier     	a
4      	20     	Operator       	=
4      	21     	Digit          	0
4      	22     	Special symbol 	;
5      	23     	Special symbol 	}
```

## Project Structure

- `lex.c`: The main C source code for the lexical analyzer.
- `input.txt`: Example input file containing C code.
- `output.txt`: Output file where the analysis results are stored.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and distribute it as needed.

## Contributions

Contributions and improvements to this project are welcome! If you have ideas for enhancements or bug fixes, please open an issue or submit a pull request.

## Credits

This lexical analyzer project is maintained by Vipul Tiwari and contributed by D K Lahu as well. Special thanks to the C community for their contributions and support.

---

Thank you for checking out the Lexical Analyzer for C Code project! We hope it helps you better understand the structure of C code and can be a valuable tool for your programming projects.
