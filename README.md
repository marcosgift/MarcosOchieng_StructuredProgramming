**NORMAL VARIABLES AND POINTERS**

A normal variable stores an actual value while a pointer stores the memory address of another variable.
Normal variables have direct memory access. Pointers access memory through the addresses.
Values are directly read and modified by normal variables. Pointers require dereferencing to change the value at the target address.

**Declaration and Definition**

A variable declaration introduces the variable's name and its type to the compiler.
A variable definition allocates memory for the variable and initialises it with a value.

A pointer declaration introduces the pointer's name and type.
A pointer definition allocates storage for the pointer itself and assigns it an address.

The * operator declares a variable as a pointer.
The & operator retrieves the memory address of a variable.

**DEREFERENCING**

This means accessing or manipulating the value stored at the address that is held by the pointer.

_Example:_
//
int score = 100;
int *p = &score;

// Accessing value via dereferencing
int currentScore = *p; // currentScore is now 100

// Modifying value via dereferencing
*p = 150; // The variable 'score' is now changed to 150
//

**Use cases for pointers**
1. Dynamic memory allocation: Used when memory size is not known at the time of compiling.
    Example: int *p = malloc(sizeof(int));
             *p = 10;
2. Passing large data to functions: Passing arrays or structures using pointers avoids copying large data.
   Example: void update(int *p) {
            *p = 50;}

**Limitations and Risks of Pointers**

1. Dangling pointers: Pointing to freed memory
2. Memory leaks: Forgetting to free dynamically allocated memory
3. Complexity: Harder to understand and debug than normal variables
4. Security risks: Buffer overflows, invalid memory access

**CALL BY VALUE vs CALL BY PREFERENCE**

_Call by Value is preferred when:_
  1. The original data must not change
  2. Data size is small
  3. Simpler and safer code is desired

_Call by Reference is preferred when:_
  1. Function needs to modify original data
  2. Large data structures are passed
  3. Multiple values must be returned
