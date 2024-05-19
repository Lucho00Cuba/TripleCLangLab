# TripleCLangLab

This project is a comprehensive collection of code examples and tutorials for three programming languages: C, C++, and C#. Each language has its own directory, which contains subdirectories for various fundamental programming concepts and features. This structure is designed to help learners understand and practice essential topics in each language.

## Requirements
To build and run the examples in this project, you will need the following tools and software installed on your system:

- **GCC (GNU Compiler Collection)** for compiling C programs.
- **G++ (GNU C++ Compiler)** for compiling C++ programs.
- **Mono** or **.NET SDK** for compiling and running C# programs.
- **Make** for using the provided `Makefile` to automate the build process.

#### Installation Instructions

1. **GCC and G++**:
    - On Ubuntu/Debian:
    ```sh
    sudo apt-get update
    sudo apt-get install build-essential
    ```
    - On macOS using Homebrew:
    ```sh
    brew install gcc
    ```

2. **Mono or .NET SDK**:
    - **Mono**:
        - On Ubuntu/Debian:
        ```sh
        sudo apt-get install mono-complete
        ```
        - On macOS using Homebrew:
        ```sh
        brew install mono
        ```
    - **.NET SDK**:
        - Follow the installation instructions from the [official .NET website](https://dotnet.microsoft.com/download).

3. **Make**:
    - On Ubuntu/Debian:
    ```sh
    sudo apt-get install make
    ```
    - On macOS, `make` is included with Xcode command line tools. Install it with:
    ```sh
    xcode-select --install
    ```

## ⚠️ Note for Non-macOS Users

Please note that the Mono dependency in the Makefile has been configured specifically for macOS. If you're using a different operating system, such as Linux or Windows, you may need to adjust the Mono configuration accordingly or use an alternative method for compiling and running C# code.

## Files Structure

```bash
|- c
   |--- conditionals
   |--- constants
   |--- files
   |--- funcs
   |--- helloworld
   |--- loops
   |--- pointers
   |--- structs
   |--- types
   |--- variables
|- c++
   |--- classes
   |--- conditionals
   |--- constants
   |--- funcs
   |--- helloworld
   |--- loops
   |--- pointers
   |--- types
   |--- variables
|- c-sharp
   |--- classes
   |--- conditionals
   |--- constants
   |--- exceptions
   |--- helloworld
   |--- loops
   |--- methods
   |--- types
   |--- variables
```

### C Directory

- conditionals: Examples of conditional statements such as if, else if, and switch.
- constants: Usage of const for defining constants.
- files: File handling operations such as reading from and writing to files.
- funcs: Function declarations, definitions, and usages.
- helloworld: The classic "Hello, World!" program.
- loops: Different types of loops including for, while, and do-while.
- pointers: Introduction to pointers and pointer arithmetic.
- structs: Definition and usage of struct for custom data types.
- types: Basic data types and type conversions.
- variables: Variable declaration, initialization, and scope.

### C++ Directory

- classes: Object-oriented programming concepts including class definitions, inheritance, and polymorphism.
- conditionals: Conditional statements using if, else if, and switch.
- constants: Usage of const for defining constants.
- funcs: Function declarations, definitions, and usages, including function overloading.
- helloworld: The classic "Hello, World!" program.
- loops: Looping constructs such as for, while, and do-while.
- pointers: Pointer usage, smart pointers, and pointer arithmetic.
- types: Basic and advanced data types, type conversions, and type casting.
- variables: Variable declaration, initialization, and scope, including static and dynamic variables.

### C-Sharp Directory

- classes: Concepts of classes, objects, inheritance, and interfaces in C#.
- conditionals: Conditional statements using if, else if, switch, and pattern matching.
- constants: Usage of const for defining constants.
- exceptions: Exception handling using try, catch, finally, and custom exceptions.
- helloworld: The classic "Hello, World!" program.
- loops: Looping constructs such as for, foreach, while, and do-while.
- methods: Method declarations, definitions, and usages, including extension methods.
- types: Basic data types, type conversions, and nullable types.
- variables: Variable declaration, initialization, and scope, including local and global variables.

## Using the Makefile

The provided Makefile simplifies the process of compiling and running your programs. Here is a brief explanation of how to use it:

- **build**: To compile and run a source file, use the make build command followed by the file parameter specifying the source file.
    ```sh
    make build file=path/to/your/sourcefile.ext
    ```
    > Depending on the file extension (.c, .cpp, or .cs), the appropriate compiler will be selected (GCC for C, G++ for C++, and CSC for C#).

- **clean**: To clean the directory by removing all files that are not in the ignore list (defined within the Makefile), use the make clean command.
    ```
    make clean
    ```

- **help**: To display help information about the available make commands, use the make help command.
    ```
    make help
    ```


## Build Instructions

To compile and run the code examples, you can use the provided `Makefile`. Below are the detailed instructions on how to build and execute the programs.

1. **Clone the repository**:
    ```sh
    git clone https://github.com/Lucho00Cuba/TripleCLangLab.git
    cd TripleCLangLab
    ```

2. **Build and run a specific file**:
    ```sh
    # Use the make build command with the file option to specify the source file you want to compile
    make build file=path/to/your/sourcefile.ext
    ```

    > Replace path/to/your/sourcefile.ext with the actual path to the source file you want to compile and run. Ensure the file extension is .c for C files, .cpp for C++ files, or .cs for C# files.

## Example Usage

1. **C Example**:
    ```sh
    # Build and run the helloworld.c file
    make build file=c/helloworld/helloworld.c
    ```
    > This command will compile and run the helloworld.c program in the c/helloworld directory.

2. **C++ Example**:
    ```sh
    # Build and run the helloworld.cpp file
    make build file=c++/helloworld/helloworld.cpp
    ```
    > This command will compile and run the helloworld.cpp program in the c++/helloworld directory.

3. **C# Example**:
    ```sh
    # Build and run the helloworld.cs file
    make build file=csharp/helloworld/helloworld.cs
    ```
    > This command will compile and run the helloworld.cs program in the csharp/helloworld directory.

## License

This project is licensed under the [MIT](./LICENSE) License. See the `LICENSE` file for more details.

## Contributions

Contributions are welcome! If you find any issues or have examples you'd like to add, please create a pull request. Make sure to follow the existing directory structure and naming conventions.