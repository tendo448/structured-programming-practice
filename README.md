# structured-programming-practice
C programming Practice Exercises and Documentation

## Exercise 1 - Basic Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.9a, page 132.
What the program does: Displays a simple greeting.
Concepts used: printf, escape sequences (\n)
How it works: The program calls printf multiple times to print rows of characters containing that information.



 ## Exercise 2 - Input, Process and Output
 Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16 page 134
What the program does: The program asks the user to enter two integers, calculates their sum, difference, product, and quotient, and then displays the results of these arithmetic operations to the screen.
Concepts used: Standard input/output (scanf, printf), integer variables, basic arithmetic operators (+, -, *, /).
How it works: The program declares variables for the inputs (num1, num2) and the calculated values (sum, difference, product, quotient). It prompts the user for two integer inputs using printf and stores them using scanf. Then, it evaluates each arithmetic operation sequentially and assigns the results to their respective variables. Finally, it uses printf statements to print each result on a new line.





## Exercise 3 - Decisions
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16 page 134
What the program does: The program asks the user to enter an integer and determines whether the number is even or odd, displaying the result to the console.
Concepts used: Standard input/output (scanf, printf), integer variables, conditional statements (if-else), and the modulus operator (%).
How it works: The program prompts the user for an integer and stores it in the variable number. It then uses the modulus operator (number % 2) to calculate the remainder when dividing the input by 2. If the remainder equals 0, the program executes the if block and prints that the number is even; otherwise, it executes the else block and prints that the number is 0


## Exercise 4 - Basic loops
*Program Title and Category:** Print Odd Numbers Sequence (Control Structures / Loops)

**Textbook Reference:** Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter4, Exercise4.7a, page 224

**What the program does:** The program generates and prints a continuous sequence of positive odd integers from 1 up to 13 without spaces or line breaks

**Concepts used:** `for` loop, integer loop counter, step incrementation (`+= 2`), standard formatted output (`printf`)

**How it works:** The program initializes an integer loop counter variable `i` at `1` The `for` loop checks if `i` is less than or equal to `13` (`i <= 13`)


## Exercise 5 - Loop with calculation
# Sum of Multiples of 7 - Basic Loop

**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11

**What the program does:** This program calculates the total sum of all integer multiples of 7 starting from 1 up to 100 and outputs the final sum to the console.

**Concepts used:** `for` loop, integer variables,  `printf`

**How it works:** The program initializes an integer variable `sum` to `0`. A `for` loop is set up with a counter `i` starting at `7`. In each iteration, the program adds `i` to `sum` and increments `i` by `7` (`i += 7`). The loop continues running as long as `i` is less than or equal to `100` (`i <= 100`). Once `i` exceeds `100`, the loop terminates, and the final accumulated result is printed.

