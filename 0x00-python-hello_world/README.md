# Hello, World
Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn about variables, basics commands (print) and handle strings with **Python**.

## Technologies
* Shell Scripts are written in Bash 4.3.11(1)
* Python Scripts are written with Python 3.4.3
* C files are compiled using `gcc 4.8.4`
* Tested on Ubuntu 14.04 LTS

## General
* Python was created by Guido van Rossum in the late 1980s while he was working at the National Research Institute for Mathematics and Computer Science in the Netherlands. Guido van Rossum named the language after the television show "Monty Python's Flying Circus." Since then, Python has become one of the most popular programming languages in the world.

* The name "Python" for the programming language comes from the British comedy group Monty Python. Guido van Rossum, the creator of Python, was a big fan of Monty Python's Flying Circus TV show, and he wanted to choose a name that was short, unique, and a bit quirky.

The story goes that van Rossum was trying to come up with a name for his new programming language, and he was reading a book about Monty Python at the time. The name "Python" popped into his head, and he thought it would be a good fit for his new language. And so, the name stuck!

* The Zen of Python is a collection of guiding principles for writing computer programs in the Python language. It was written by Tim Peters, a long-time contributor to the Python community, and is included as an Easter egg in the Python interpreter.

The Zen of Python is a set of 19 aphorisms that emphasize simplicity, readability, and maintainability of code. Some of the most famous aphorisms include:

"Beautiful is better than ugly."
"Explicit is better than implicit."
"Simple is better than complex."
"Readability counts."
These principles encourage Python programmers to write code that is easy to understand and maintain, even as the codebase grows and evolves over time. The Zen of Python is often cited as one of the reasons why Python is such a popular language among developers.

* The Python interpreter is a command-line tool that allows you to interactively run Python code. Here are the basic steps for using the Python interpreter:

1. Open a command prompt or terminal on your computer.
2. Type python at the prompt and press Enter. This will start the Python interpreter and you should see a message that looks something like this:

Python 3.9.5 (default, May  3 2021, 08:33:21)
[GCC 8.4.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>>

The >>> symbol indicates that the interpreter is ready to accept commands.
3. Now you can start typing Python commands and see the results immediately. For example, you can type print("Hello, world!") and press Enter. The interpreter will execute the command and print the output, like this:
>>> print("Hello, world!")
Hello, world!

4. You can also define variables and functions in the interpreter. For example, you can define a variable x and assign it the value 42:

>>> x = 42
>>> print(x)
42

5. When you're finished using the interpreter, you can type exit() or press Ctrl+D to exit.
That's the basic usage of the Python interpreter. You can use it to test out small code snippets or to experiment with new ideas.

* In Python, you can use the print function to output text and variables to the console. Here are some examples of how to use print:

1. To print a simple text message:

print("Hello, world!")

This will output the string "Hello, world!" to the console.

2. To print a variable:
x = 42
print(x)

This will output the value of the x variable (which is 42) to the console.

3. To print a combination of text and variables:
name = "Alice"
age = 30
print("My name is", name, "and I am", age, "years old.")

This will output the string "My name is Alice and I am 30 years old." to the console. Note that you can use commas to separate the different items that you want to print. Python will automatically insert spaces between the items.

4. To print a formatted string:
name = "Bob"
age = 25
print("My name is {} and I am {} years old.".format(name, age))

This will output the same string as example 3. Here, we're using a formatted string, which allows us to insert variables into a string in a more readable way. The {} symbols act as placeholders for the variables, and we use the format method to replace them with the actual values.

These are just a few examples of how you can use print in Python. The print function is very versatile and can be used in many different ways, depending on your needs.


* Strings are a fundamental data type in Python that represent a sequence of characters. Here are some basic examples of how to use strings in Python:

1. Defining a string:
my_string = "Hello, world!"

This creates a string variable named my_string that contains the text "Hello, world!".

2. Accessing individual characters in a string:

my_string = "Hello, world!"
print(my_string[0])  # Output: 'H'
print(my_string[-1])  # Output: '!'

This accesses the first and last characters of the string using indexing. Note that in Python, string indexing starts at 0, and you can also use negative indices to access characters from the end of the string.

3. Concatenating strings:
str1 = "Hello"
str2 = "world"
print(str1 + " " + str2)  # Output: "Hello world"

This uses the + operator to concatenate two strings into a single string.

4. String methods:
my_string = "Hello, world!"
print(my_string.upper())  # Output: "HELLO, WORLD!"
print(my_string.lower())  # Output: "hello, world!"
print(my_string.replace("world", "Python"))  # Output: "Hello, Python!"

These are just a few examples of the many built-in string methods that Python provides. You can use these methods to manipulate strings in various ways, such as converting them to uppercase or lowercase, replacing substrings, and so on.

5. Formatting strings:
name = "Alice"
age = 30
print("My name is {} and I am {} years old.".format(name, age))

This uses a formatted string to insert variables into a string in a more readable way. The {} symbols act as placeholders for the variables, and we use the format method to replace them with the actual values.

These are just a few examples of how you can use strings in Python. Strings are a very versatile data type and can be used in many different ways, depending on your needs.


* 
Indexing and slicing are two ways to access specific elements of a sequence in Python, such as a string or a list.

Indexing refers to the process of selecting a single element from a sequence by its position (index) in the sequence. In Python, indexing starts at 0, so the first element in a sequence has an index of 0, the second element has an index of 1, and so on. Negative indices count from the end of the sequence, so -1 refers to the last element, -2 refers to the second to last element, and so on.

Here's an example of indexing a string:
my_string = "Hello, world!"
print(my_string[0])    # Output: 'H'
print(my_string[-1])   # Output: '!'


This code accesses the first and last characters of the string using indexing.

Slicing refers to the process of selecting a subset of a sequence by specifying a range of indices. In Python, you can use the colon (:) operator to specify a range of indices. The slice notation takes three parameters: start, stop, and step. start is the index of the first element to include, stop is the index of the first element to exclude, and step is the stride of the slice.

Here's an example of slicing a string:
my_string = "Hello, world!"
print(my_string[0:5])    # Output: 'Hello'
print(my_string[7:])     # Output: 'world!'
print(my_string[::2])    # Output: 'Hlo ol!'


This code selects a subset of the string using slicing. The first slice selects the first five characters of the string, the second slice selects all the characters from the seventh character to the end of the string, and the third slice selects every other character in the string.

Indexing and slicing are powerful tools for working with sequences in Python, and they can be used in many different ways to extract and manipulate data.

* The official Python coding style is defined in the "PEP 8" document, which provides guidelines for how Python code should be formatted and structured. Some of the key aspects of the Python coding style include:

Indentation: Use 4 spaces per indentation level.
Line length: Limit lines to 79 characters.
Naming conventions: Use lowercase names for variables and functions, and separate words with underscores. Use CamelCase for class names.
Function and method arguments: Put a space after commas and put default values at the end.
Import statements: Put all import statements at the beginning of the file, and group them in the following order: standard library imports, third-party library imports, and local application/library-specific imports.
To check your code for adherence to the Python coding style, you can use a tool called pycodestyle (formerly known as pep8). pycodestyle is a command-line tool that checks your Python code for compliance with PEP 8 style guidelines. To use pycodestyle, you need to install it first. You can do this using pip, the package installer for Python:

pip install pycodestyle

Once installed, you can use pycodestyle to check your code by running it from the command line:

pycodestyle mycode.py

This will print any PEP 8 violations found in the mycode.py file. You can also use the --show-source option to display the source code with the PEP 8 violations highlighted:

pycodestyle --show-source mycode.py


In addition to pycodestyle, there are several other tools that can help you enforce the Python coding style, such as flake8 and black. Using these tools can help you write clean, consistent, and easy-to-read Python code that is easier to maintain over time.




## Files
| Filename | Description |
| -------- | ----------- |
| `0-run` | Shell script that runs a Python script, where its name is stored in an environment variable |
| `1-run_inline` | Shell script that runs a Python script, where Python code is saved in an environment variable |
| `2-print.py` | Python script that prints a message |
| `3-print_number.py` | Prints a message with print function, using format |
| `4-print_float.py` | Prints a float with print function, using format and precission |
| `5-print_string.py` | Prints 3 times a string using print function with format |
| `6-concat.py` | Concatenates strings and prints the result |
| `7-edges.py` | Prints some letters of a string |
| `8-concat_edges.py` | Prints some parts of a string |
| `9-easter_egg.py` | Prints "The Zen of Python" |
| `10-check_cycle.c` | C program that finds a loop in a linked list |
| `100-write.py` | Python script that prints a message with `write` sys |
| `101-compile` | Shell script that compiles a Python file |
| `102-magic_calculation.py` | Python function that does exactly the same as a given disassembler |
