# <p align="center">**Monty Language Interpreter**</p>

This project involves creating an interpreter for Monty ByteCodes files. The Monty language relies on a unique stack with specific instructions to manipulate it.


## 🧑🏻‍💻 Compilation
```js
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```



The output must be printed on stdout, and any error message should be printed on stderr.

**Monty Byte Code Files**
Monty byte code files have the .m extension and contain instructions. Each line corresponds to one instruction. The interpreter runs the bytecodes line by line, stopping if:

- It executes every line of the file
- It finds an error in the file
- An error occurs




## 🧑🏻‍💻 Monty Program Usage
```js
$ ./monty file
```




## 🧑🏻‍💻 Usage
```js
Example (file.m):

$ cat file.m
# Pushing element to the stack
push 0
push 1
push 2
# Printing all elements
pall
push 3
push 4
pop
```







0. push Opcode  ----------------------------------------------------------

**Usage: push**

The push opcode is used to push an element onto the stack.


1. The pall Opcode  ----------------------------------------------------------

**Usage: pall**

Print all the values on the stack, starting from the top of the stack.
If the stack is empty, don't print anything.


2. The pint Opcode. ----------------------------------------------------------

**Usage: pint**

Print the value at the top of the stack, followed by a new line.


3. The pop Opcode. ----------------------------------------------------------

**Usage: pop**

Remove the top element of the stack.


4. The swap Opcode. ---------------------------------------------------------

**Usage: swap**

Swap the top two elements of the stack.


5. The add Opcode. ----------------------------------------------------------

**Usage: add**

Adds the top two elements of the stack


6. The nop Opcode. ----------------------------------------------------------

**Usage: nop**

Doesn't do anything


## 🙇 Author
#### Tuyen Huynh
#### Mickaël Perret

    