Control Flow
																			 |
																			 |
### 8.2 — If statements and blocks													 |
																			 |
------------------------------------------------------------------------------

## New things I learned

- always use blocks in for condition statment control flow body, bcz, if/else without block/braces only include very next single statement.
- using { } will make include all required statements, better for readability.
- dont accidently put ';' beside conditions, it will assume as null statement and will always execute next line.


- Implicit Blocks

				|	Idea: Neenga curly braces podala na kuda, C++ compiler internal-a oru "invisible block" create pannikum for that single line.
				|
				|	Definition: Single statement-ku braces optional, but readability-ku braces podradhu dhaan best practice.
				|





	Basic If: Simple check.

	Else: Alternative action.

	If / Else If / Else Chain: Checking multiple conditions; only the first "true" block runs.

	Null Statement: Semicolon error (;).

	Block Statements: Using { } for multiple lines.

	Implicit Blocks: Invisible { } for single lines.

	Nested If: if inside an if (Dangling else problem).

	Variable Scope: Variables inside { } die when the block ends.

	Redeclaration: Cannot define the same name twice in one scope.

	Assignment: Updating an existing variable's value using =.

	Compile-time: The planning/building stage (where comments/whitespace are ignored).

	Runtime: The execution/action stage.

	Variable Shadowing: Inner variable hiding an outer one.

	Initializers in If: Defining a variable inside if (C++17).

	Indentation: Visual hierarchy (ignored by compiler).

	Early Returns: Exiting early to avoid nesting and keep code flat.

	Unreachable Code: Code after a return statement that never runs.

	Arrow Code: Bad practice (>) shape caused by deep nesting.

	Braces Safety: Always using { } even for single lines to prevent bugs.

	Indentation Trap: Code that looks conditional due to spacing but always executes.

	Comment-out & Stealing Bug: In a condition without braces, commenting out the body at the end of a chain (or standalone if) steals the 
								next outer statement—regardless of distance or blank lines.
								Commenting in the middle of a chain (before an else) causes a Compiler Error.



------------------------------------------------------------------------------

## Examples / Code I tried

[C++]


------------------------------------------------------------------------------

## Things that confused me



------------------------------------------------------------------------------

## Important notes / rules

- Best Practice : always use braces {} to create a block for the conditional cotrol flow body statements
- I did a mistake where unknowingly redeclared variable inside another scope without understanding scope, lifetime, duration. Now im clear.
- Be careful while Re-dec, it will cause again a new decalration which will die inside its relevant scope and the same outside variable will not be changed.



- If statement pakkadhula accidental-a semicolon (;) pota, adhu "null statement"-ah maaridun. C++ nenaikum "if condition mudinjiduchu" nu.
  Definition: Semicolon denotes the end of a statement. If condition kulla semicolon pota, condition true-ah irundhalum illatiyum adutha line run aagidum.


---------------------------------------------------------------------------------

## Quick summary (in my own words)




