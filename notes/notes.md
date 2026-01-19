Control Flow

------------------------------------------------------------------------------
																			 |
### 8.2 — If statements and blocks											 |
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


								Quick Reason why distance doesn't matter: 

								The compiler treats your code like a continuous stream of text. 
								When it hits an if without braces, it looks for the very next "active" instruction. 
								Since it deletes all comments and blank lines during the first step of compilation, 
								a line 100 lines down looks like it's right next to the if to the compiler.
								
	Single-Line Conditional Method: Placing the statement on the same line (e.g., if (x) doY();). 
									
									Pros: 
									Prevents the Comment-out Bug (commenting the line removes the whole if) and keeps code compact. 
									Cons: 
									Harder to debug because the conditional and statement execute as one step, and you cannot place a breakpoint on just the action.




Types of if/else chaining usage:

1. If-Else (Exclusive Choice)
2. If-If (Multiple Checks)
3. If-If with Return (Early Exit)



	1. If-Else (Exclusive Choice)
	   
	   * It executes the code only after the first true condition it finds.

	   
	   * An else if statement only evaluates if the previous if statement was false.

	   
	   * Once it finds a true condition, it skips all remaining else blocks.

	   
	   * These statements are dependent on each other.


	2. If-If (Multiple Checks)
	   
	   * It executes the code after all true conditions.

	   
	   * Every single if statement in the list is evaluated by the computer.

	   
	   * One if statement being true does not stop the next one from checking.

	   
	   * These statements are independent of each other.


	3. If-If with Return (Early Exit)
	   
	   * A return statement causes a function to exit immediately.

	   
	   * If an if block contains a return, the function finishes as soon as that condition is true.

	   
	   * Because the function exits, any if statements following it never get a chance to run.

	   
	   * This makes independent if statements behave exactly like if-else.


	4. Dependency and Best Practices
	   
	   * When every branch returns a value, the else keyword provides no extra value.

	   
	   * Using if-if with returns avoids "clutter" in your code.

	   
	   * It allows your conditions to line up better, making the code easier to read.



- (will see later this advanced concept)

	Member Pointer Jump Table (.* and ->*): An alternative to if/else chains for class object decision-making where an array stores member function addresses; 
											this allows the program to "jump" directly to the correct logic at runtime using these operators, providing a faster 
											and more organized data structure for complex life cycles.





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


### Project Logic Overview
<img src="../images/cpp.jpg" width="200" />.


------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------



------------------------------------------------------------------------------
																			 |
### 8.3 — Common if statement problems									     |
																			 |
------------------------------------------------------------------------------

## New things I learned


- Nested if-statements and the dangling else problem
- Flattening nested if-statements
- Null statements
- use early return to avoid "Arrow code" i mean nested if/else


## Tabled Checklist

| No. | Concept / Problem | Technical Definition |
| :--- | :--- | :--- |
| **1** | **Dangling Else** | A logic error where an `else` pairs with the nearest preceding unmatched `if`. |
| **2** | **Semicolon Snag** | Accidental `;` after `if` creates an unconditional **Null Statement**. |
| **3** | **Arrow Code** | An anti-pattern of **Deep Nesting** that reduces code readability. |
| **4** | **Flattening Logic** | Refactoring nested code into a **Linear Structure** using operators. |
| **5** | **Guard Clauses** | Using **Early Returns** to handle failure cases first (Negative Validation). |
| **6** | **Initializers** | C++17 feature to declare variables inside `if` for **Scope Management**. |
| **7** | **Searchable Placeholders** | Using #define PASS to create intentional, searchable null statements.. |


## Consolidated Checklist

1. **The Dangling Else Ambiguity:** A logic error where an `else` statement is paired with the nearest preceding unmatched `if` statement in the same scope. 
									This occurs regardless of indentation, potentially leading to incorrect program behavior.

2. **The Semicolon Snag (Null Statements):** The accidental placement of a semicolon (`;`) immediately following an `if` condition. 
											This creates a null statement as the body of the `if`, causing the subsequent block of code to execute unconditionally (it runs every time, regardless of the condition).

3. **Arrow Code (Deep Nesting):** An anti-pattern in programming where multiple levels of nested `if` statements create a code structure that shifts further and further to the right, resembling a `>` shape.
                                  This significantly reduces code readability and increases complexity.

4. **Logic Flattening:** The process of refactoring deeply nested code into a linear, sequential structure. 
						 This is achieved by using Logical Operators (`&&`, `||`) to combine conditions or by restructuring the logic to handle cases one after another rather than one inside another.

5. **Guard Clauses (Negative Validation):** A technique used to flatten logic by checking for "failure" or "exit" conditions first. 
											By using an Early Return to exit the function if a condition isn't met, the "success path" of the code remains at the top level (flat) rather than being nested deep inside an `else` block.

6. **C++17 If-Statement Initializers:** A syntax feature that allows you to declare and initialize a variable directly within the `if` statement (e.g., `if (int x{ getVal() }; x > 0)`). 
										This restricts the variable's scope to the `if` and its associated `else` blocks, preventing variable leaks into the rest of the function.

7. Searchable Placeholders: Using #define PASS to create intentional, searchable null statements.


8.to be aware wth Operator== vs Operator= inside the conditional 

