# DD-calculator

## Getting started
This repository contains just the sfotware part of the DD calculator. 
The software part of the calculator is in C++. It contains four files, two headers and two cpp files.
The two main files are the RLP and the Stack.

<h3>The stack</h3>
The Stack.cpp file contains all the logic to create and fill a stack.
At the bottom of the file there are some commented lines. Those lines were used to test and make sure the code
was working properly.
The class stack was created in the header file and then imported and filled in the cpp file. 
The stack contains a list of items in the stack and the position of the pointer (index). These values are private.
Then, as public values there are the constructor and four functions. A function to display all the items (getItems()),
a function to check if the stack is empty, a function to push a new value and a function to pop the last value.
These functions are then implemented in the cpp file.

<h3>The RLP</h3>
At the bottom of the RLP.cpp file (from line 55 onwards), there are some lines used just for testing.
The RLP.cpp file contains the logic that handles getting a string and returns the result of that string. The string must be in this format:
<code>"30 5 + 4 -"</code>
The values must be separet by a space and it doesn't matter how many digits each value has.

Once that string is received, an RLP object should be created and the string should be passed to the rpn_eval function. The rpn_eval function will loop trough each value of the string, and it will add or remove the values to the stack, or do the operation between two values.

The RLP class is declared in the header file. It contains a private value (which is of type Stack) and three functions: one to check if the char is an operator (check_operator), one to do the operation between two values (operation), and one that does all the looping of a string (rpn_eval).

