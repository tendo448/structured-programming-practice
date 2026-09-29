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

## Exercise 6 - loop with user input
Interest Calculator - loop with user input
​Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.19  
​What the program does: The program calculates the simple interest charge on several loans by repeatedly prompting the user to enter loan principal, interest rate, and term in days until a sentinel value (-1) is entered.  
​Concepts used: while loop, floating-point variables (double), formatted I/O (printf, scanf), sentinel control.  
​How it works: The program begins by asking the user to enter the loan principal. The while loop checks if the principal is greater than 0 (or not equal to -1). Inside the loop, it prompts for the annual interest rate and the loan duration in days, calculates the interest, prints the result formatted to two decimal places and then prompts for the next principal amount to repeat or terminate the loop.

## Exercise 7 - loop with decisions
Credit Limit Calculator - Control Statements
​Source: Deitel  &  Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.17 (Credit Limit Calculator)
​What the program does: The program processes account information for three customers to determine if their current account balance exceeds their newly adjusted credit limit. It prompts the user to enter each customer's account number, previous credit limit, and current balance, calculates a new credit limit by cutting the old limit in half, and displays a warning if the balance is too high.
​Concepts used: for loop, double and int data types, formatted I/O (printf, scanf), decision-making statement (if...else), basic arithmetic operators.
​How it works:
​The program enters a for loop that iterates 3 times to handle three separate customer records.
​During each iteration, it prompts for and reads the customer's account number (int), old credit limit (double), and current balance (double).
​It calculates new_limit by dividing old_limit by 2.0.
​It outputs the new credit limit formatted to two decimal places.
​An if...else block compares current_balance against new_limit. If the balance is strictly greater than the new limit, it prints a warning message containing the balance; otherwise, it outputs that the balance is within the new limit.


## Exercise 8 - interactive console program
Sales Commission Calculator - Control Statements
​Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.18 (Sales Commission Calculator)
​What the program does: The program calculates the total weekly earnings for a salesperson based on their gross sales. It receives the salesperson's sales amount, adds a 9% commission on those sales to a base salary of $200, displays the calculated salary, and continues processing entries until a sentinel value (-1) is entered. It also handles basic input validation by displaying an error message if a negative sales amount is entered.
​Concepts used: while loop with sentinel-controlled repetition, double  data type, formatted I/O (printf, scanf), decision-making statement (if...else), basic arithmetic operators.
​How it works:
​The program prompts the user to input the initial sales amount in dollars or -1 to quit.
​A while loop checks if sales is not equal to -1.0.
​Inside the loop, an if...else block checks if the entered sales value is negative (less than 0).
​If negative, it displays an error message stating that salary cannot be negative.
​Otherwise, it calculates earnings using the formula: 200.0 + (\text{sales} \times 0.09) and prints the calculated salary formatted to two decimal places.
​Before concluding the current iteration, the program prompts the user again for the next sales amount to determine whether to continue or exit the loop.



