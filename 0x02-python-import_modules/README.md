# Import & modules
Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn how to import functions, how to create modules and how to use command line arguments in **Python**.

## Technologies
* Shell Scripts are written in Bash 4.3.11(1)
* Python Scripts are written with Python 3.4.3
* C files are compiled using `gcc 4.8.4`
* Tested on Ubuntu 14.04 LTS


## General
1. How to import functions from another file
* To import functions from another file in Python, you can use the import statement followed by the name of the module or file you want to import. Here's an example:

Suppose you have a file called my_module.py which contains a function called my_function() that you want to use in another file. In the other file, you can import the function like this:
from my_module import my_function

This line tells Python to import the my_function() function from the my_module module. You can then use the my_function() function in the new file just like you would any other function.

Alternatively, you could import the entire module like this:
import my_module

This will import the entire my_module module, and you can then access the my_function() function using dot notation, like this:
my_module.my_function()

2. How to use imported functions
* Once you've imported a function from another file/module in Python, you can use it just like you would any other function. Here's an example:

Suppose you have a file called my_module.py that contains a function called my_function(), and you want to use that function in another file called my_program.py. In my_program.py, you can import the my_function() function from my_module.py like this:
from my_module import my_function

You can then call the my_function() function in my_program.py just like you would any other function, like this:
my_function()

If the my_function() function takes arguments, you can pass those arguments to the function when you call it, like this:
my_function(arg1, arg2, arg3)

That's all there is to it! Once you've imported a function, you can use it just like any other function within the file that imported it.

3. How to create a module
* To create a module in Python, you can simply create a new Python file with a .py extension, and define your functions or variables within that file. Here's an example:

Suppose you want to create a module called my_module that contains a function called my_function(). You can create a new file called my_module.py, and define the my_function() function within that file, like this:
def my_function():
    print("Hello from my_function in my_module!")

Once you've defined your function(s) in your module file, you can then use it in other files by importing the module, like this:
import my_module

my_module.my_function()
This will import the my_module module and call the my_function() function within that module.

Note that when you import a module, Python looks for the module file in the current directory or in any directories specified in the PYTHONPATH environment variable. So make sure that your module file is located in a directory that Python can find.

Also, keep in mind that modules can contain much more than just functions. You can define variables, classes, and other objects within a module as well. And, of course, you can import multiple functions or objects from a single module by separating them with commas in the import statement.

4. How to use the built-in function dir()
* The dir() function is a built-in function in Python that can be used to list the names of all the variables, functions, and modules defined in the current scope. Here's how to use it:

1. Open up a Python interpreter or create a Python file in your preferred code editor.
2. Define some variables and functions in the current scope. For example:
x = 42
y = "hello"

def my_function():
    print("Hello, world!")

3. Call the dir() function to list the names of all the variables, functions, and modules defined in the current scope. For example:
print(dir())

This will output a list of all the names defined in the current scope, including the names of the variables and functions you defined.

You can also call the dir() function on a specific module to list the names defined in that module. For example:
import math

print(dir(math))

This will output a list of all the names defined in the math module, including the names of functions like sqrt() and sin(), as well as constants like pi.

Note that the dir() function can be quite verbose, especially if you're working with a large module or namespace. In some cases, it may be helpful to use the help() function instead, which provides more detailed information about a particular object or function.

5. How to prevent code in your script from being executed when imported
* In Python, you can prevent certain code from being executed when a script is imported by wrapping the code in a special conditional block that checks whether the script is being run as the main program. This is commonly referred to as the "if name == 'main':" block.

Here's an example of how to use this block:
# This code will always be executed, even when the script is imported
def my_function():
    print("Hello, world!")

# This code will only be executed if the script is run as the main program,
# but not if it is imported as a module
if __name__ == "__main__":
    my_function()


In this example, the my_function() function will always be defined and available for import, but it will only be executed if the script is run as the main program (i.e., if it is executed directly from the command line). If the script is imported as a module in another program, the my_function() function will be available for use, but it will not be executed.

The __name__ variable is a built-in variable in Python that contains the name of the current module or script. When a script is run as the main program, its __name__ variable is set to the string "__main__". By checking whether __name__ == "__main__", we can determine whether the script is being run as the main program or imported as a module.

6. How to use command line arguments with your Python programs
* You can use command line arguments to pass information to your Python programs from the command line. Python provides a built-in module called sys that you can use to access the command line arguments.

Here's a simple example:
import sys

# Print out the command line arguments
print(sys.argv)

# Get the first command line argument (the script name is always the first argument)
script_name = sys.argv[0]

# Get the second command line argument (if it exists)
if len(sys.argv) > 1:
    argument = sys.argv[1]
else:
    argument = None

# Print out the script name and the argument (if provided)
print("Script name:", script_name)
if argument:
    print("Argument:", argument)

To run this script with a command line argument, you can type the following command at the terminal:
python my_script.py my_argument

This will run the my_script.py script and pass the string "my_argument" as the second command line argument. The script will then print out the command line arguments, the script name, and the argument (if provided).

Note that the sys.argv list always contains at least one element, which is the name of the script itself. So if you want to access the first command line argument, you should use sys.argv[1].






## Files
| Filename | Description |
| -------- | ----------- |
| `0-add.py` | Imports a function from the file `add_0.py` and prints the result |
| `1-calculation.py` | Imports maths functions from a file and prints the result|
| `2-args.py` | Prints the number of and the list of its arguments |
| `3-infinite_add.py` | Prints the result of the addition of all arguments |
| `4-hidden_discovery.py` | Prints all the names defined by a compiled module |
| `5-variable_load.py` | Imports a variable from a file and prints its value |
| `100-my_calculator.py` | Imports all functions from a file and handles basics operations |
| `101-easy_print.py` | Prints `#pythoniscool`, followed by a new line |
| `102-magic_calculation.py` | Function that does exactly the same as a given Python bytecode |
| `103-fast_alphabet.py` | Prints the alphabet in uppercase, followed by a new line |
