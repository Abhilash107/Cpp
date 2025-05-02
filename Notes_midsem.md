### OOPs:
Object-Oriented Programming (OOP) is a way of writing programs where you model real-world things as objects in your code.
Each object has two main parts:

Attributes (what it has — like a person’s name, age, etc.)

Methods (what it can do — like walking, talking, etc.)

In OOP, you mainly work with:

Classes → Templates/blueprints to create objects.

Objects → Actual instances based on classes.

• Objects
• Classes
• Data abstraction and encapsulation
• Inheritance
• Polymorphism
• Dynamic binding
• Message passing
### 

1. Objects
An object is a real-world entity with properties (data) and actions (behavior).

Real-life example:

A car is an object.
It has properties like color, model, and speed, and actions like drive and stop.

2. Classes
Definition:
A class is a blueprint or template for creating objects.

Real-life example:

Car (class) is a design, and your red Honda City (object) is made from that design.

3. Data Abstraction and Encapsulation
Definition:

Abstraction means showing only important information and hiding the details.

Encapsulation means wrapping data and methods together and protecting the data from outside changes.

Real-life example:

ATM Machine:
You only see the screen and buttons (abstraction);
you don't see how money is transferred internally (encapsulation).
Your account details are protected inside the system.

4. Inheritance
Definition:
Inheritance allows a new class to take the properties and behaviors of an existing class.

Real-life example:

A child inherits traits from parents like eye color, height, etc.

5. Polymorphism
Definition:
Polymorphism means same action but different behavior depending on the object.

Real-life example:

The command "draw" can mean:

Draw a circle if you are using a pencil.

Draw a picture on a computer if you are using software. Same word, but different actions based on context.

6. Dynamic Binding
Definition:
Dynamic binding means that the code to call a method is decided while the program is running, not while writing the code.
which method will run is decided when the program is running, based on the object.
#### How Dynamic Binding is Useful in OOP:
- Enables polymorphism (one interface, multiple objects).

- Makes programs flexible and extensible (easy to add new features).

- Reduces code rewriting when adding new classes/functions.

- Allows common method names with different behaviors based on objects.


Real-life example:

When you click "Play" on different apps (like YouTube vs. Spotify),
the app decides at runtime what kind of media (video or music) to play.

7. Message Passing
Definition:
Message passing means objects communicating by calling each other’s methods.

Real-life example:

You send a message to your friend on WhatsApp →
Your message goes to your friend's phone, and they respond.


### Advantages of Object-Oriented Programming:
Inheritance eliminates redundant code and promotes reuse.

Programs can be built from standard modules, saving time and increasing productivity.

Data hiding ensures security and protects internal object details.

Multiple instances of objects can exist without conflict.

Real-world problems can be easily mapped into programs.

Work can be divided easily based on objects.

Data-centered design captures more details for implementation.

Systems can easily scale from small to large.

Message passing simplifies communication with external systems.

Software complexity becomes easier to manage.


### Object-Oriented Programming Overview:
OOP is not limited to any specific language; it can be done even in C or Pascal, but becomes messy as programs grow.

Languages designed for OOP make implementation easier by supporting key OOP features.

Based on features, languages are classified as:

Object-based programming languages — support encapsulation and object identity (but no inheritance or dynamic binding).

Example: Ada

Object-oriented programming languages — support object-based features plus inheritance and dynamic binding.

Examples: C++, Java, Smalltalk, Object Pascal

Summary:

***Object-oriented = Object-based features + Inheritance + Dynamic Binding***


### Promising Areas for OOP Applications:
Real-time systems

Simulation and modeling

Object-oriented databases

Hypertext, hypermedia, and expertext

AI and expert systems

Neural networks and parallel programming

Decision support and office automation

CIM, CAM, and CAD systems


### Difference between OOP and Procedure-Oriented Programming (POP):
- Procedure-Oriented Programming (POP):

Focuses on functions and procedures.
Data moves freely across functions (less secure).
Follows a top-down design approach.

Examples: C, Pascal.

Hard to manage large projects.
Reusability of code is difficult.

- Object-Oriented Programming (OOP):

Focuses on objects (real-world entities).
Data is hidden and protected inside objects (encapsulation).
Follows a bottom-up design approach.

Examples: C++, Java, Python.

Better for large and complex projects.
Code is easily reusable through inheritance.


### Object-Oriented Approach (OOP):
Supports Encapsulation, Inheritance, Polymorphism, and Dynamic Binding.

Objects can inherit features from other objects (reusability).

Methods and behavior are determined dynamically at runtime.

Enables the creation of complex, scalable systems.

Examples: C++, Java, Smalltalk.

### Object-Based Approach:
Supports Encapsulation and Object Identity but lacks Inheritance and Dynamic Binding.

Objects cannot inherit from other objects.

Behavior is statically defined, with no dynamic method binding.

Suitable for simpler systems but lacks full OOP capabilities.

Examples: Ada, JavaScript (before ES6).

-   ***The <iostream> file is a standard C++ library that provides functionalities for input and output (I/O) operations ***

- Namespace is a new concept introduced by the ANSI C++ standards
committee. This defines a scope for the identifiers that are used in a
program. 

### Here’s a shorter version of the differences between main() in C and C++:

- Return Type:

C: main() returns int, typically return 0; for success.

C++: Same as C, but you can omit return 0; as the compiler automatically assumes it.

- Command-Line Arguments:

C: Uses int main(int argc, char *argv[]) to accept arguments.

C++: Same format but can utilize C++ features like std::vector or std::string for better flexibility.

- Void Main:

C and C++: void main() is not recommended and is non-standard. Always use int main().

- Standard Libraries:

C: Uses printf() and scanf() for I/O.

C++: Uses std::cout and std::cin, providing type-safe and object-oriented I/O.


### Include File:

Provides access to libraries/functions (e.g., #include <iostream> for I/O).

Essential for enabling various features in C++ (e.g., input/output, math operations).

Class Declaration:

Defines the blueprint for objects, specifying attributes and behaviors.

Encapsulates data and functions, promoting modular and organized code.

Member Functions:

Functions defined inside a class, responsible for interacting with class data.

Can modify and access private data of the class (e.g., getData() and display()).

Main Function:

Entry point for program execution, starting the flow of the program.

Typically creates objects and calls member functions to perform tasks.

### Token
As we know, the smallest individual units in a program are known as
tokens. C++ has the following tokens:
• Keywords
• Identifiers
• Constants
• Strings
• Operators

### Reference Variables
C++ introduces a new kind of variable known as the reference
variable. A reference variable provides an alias (alternative name) for
a previously defined variable.

``` cpp
float total = 100;
float & sum = total;
```

total is a float type variable that has already been declared; sum is
the alternative name declared to represent the variable total. Both
the variables refer to the same data object in the memory.

- 3.1 An unsigned int can be twice as large as a signed int. Explain how?
An unsigned int can represent only positive numbers, so it uses all of its bits to represent values greater than 0, effectively doubling the maximum value it can hold compared to a signed int. A signed int reserves one bit for the sign (positive or negative), limiting its range.

Signed int range: -2,147,483,648 to 2,147,483,647

Unsigned int range: 0 to 4,294,967,295

- 3.3 Why does C++ have type modifiers?
C++ provides type modifiers (such as short, long, signed, unsigned, etc.) to allow more control over data types. These modifiers let the programmer adjust the range and memory usage of variables, depending on the requirements of the application.

- 3.4 What are the applications of the void data type in C++?
The void data type in C++ is used for:

Function return type: To specify that a function does not return any value (e.g., void myFunction()).

Pointers: void* is a generic pointer type that can point to any data type.

Indicating no data: In function parameters or return types, void can indicate that no data is expected or returned.

- 3.5 Can we assign a void pointer to an int type pointer? If not, why? How can we achieve this?

No, you cannot assign a void* directly to an int* because void is a generic pointer type that does not know the type of the object it points to. To achieve this, you need to cast the void* to int*.

Example:

``` cpp
void* ptr;
int* intPtr;
ptr = &someInt;  // Assigning to void pointer
intPtr = (int*)ptr;  // Casting to int pointer
```
- 3.6 Describe, with examples, the uses of enumeration data types.
Enumerations (enum) are used to define a set of named integer constants, making code more readable. For example, defining days of the week:

cpp
Copy
Edit
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
Day today = Wednesday;
This makes the code more understandable instead of using arbitrary integers.

- 3.7 Describe the differences in the implementation of enum data type in ANSI C and C++.

In ANSI C, enum values are treated as integers, and the underlying type is usually int. In C++, enum types can be given an explicit underlying type (like enum Day : short { Sunday, Monday, ... };), making them more flexible and type-safe. C++ also supports enum class for better scope management.

- 3.8 Why is an array called a derived data type?

- - An array is a derived data type because it is built from basic data types (like int, float, char, etc.) but can hold multiple values of the same type. Arrays "derive" their structure from the base type but are not primitive types themselves.

- 3.9 The size of a char array that is declared to store a string should be one larger than the number of characters in the string. Why?

- - In C++, strings are terminated with a null character (\0) to indicate the end of the string. Therefore, you need to allocate space for this extra character.

Example:

char str[6]; // To store "Hello"

- 3.10 The const was taken from C++ and incorporated in ANSI C, although quite differently. Explain.

In C++, const is used to define constants and make variables immutable. In ANSI C, const was introduced to allow declaring variables as read-only, but it does not provide the same level of flexibility as in C++ (e.g., no support for const member functions).

- 3.11 How does a constant defined by const differ from the constant defined by the preprocessor statement #define?

const creates a constant variable with a specific type, whereas #define is a preprocessor macro that simply replaces text before compilation.

const can be scoped, whereas #define is globally replaced throughout the code.

const is type-safe, while #define is not.

- 3.12 In C++, a variable can be declared anywhere in the scope. What is the significance of this feature?

- - This feature enhances the flexibility of C++ by allowing variables to be declared close to where they are used, making the code more readable and reducing the scope of the variable.

- 3.13 What do you mean by dynamic initialization of a variable? Give an example.

- - Dynamic initialization refers to initializing a variable at runtime, often using values provided by the user or calculated during program execution.

``` cpp
int x = 5 * 2;// Dynamic initialization
```
- 3.14 What is a reference variable? What is its major use?

- - A reference variable is an alias for another variable. It allows you to modify the original variable through the reference.

Example:

``` cpp
int x = 10;
int& ref = x;  // ref is a reference to x
ref = 20;  // x is now 20
```
- 3.16 What is the application of the scope resolution operator :: in C++?

- - The :: operator is used to access global variables or functions when there is a local variable with the same name. It is also used to define functions outside the class or access class members in the global scope.

Example:

``` cpp
int x = 10;
namespace MyNamespace {
    int x = 20;
}
int main() {
    cout << ::x;  // Access global x
}
```
- 3.17 What are the advantages of using the new operator as compared to the function malloc()?

- - new initializes the memory, while malloc() does not.

- - new throws an exception (std::bad_alloc) if memory allocation fails, whereas malloc() returns NULL.

- - new is type-safe, while malloc() returns a void pointer that requires casting.


- 3.18 Which manipulator is used to control the precision of floating-point numbers?

- - The setprecision manipulator from the <iomanip> library is used to control the precision of floating-point numbers.

Example:

``` cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159;
    cout << setprecision(3) << pi;  // Output: 3.14
    return 0;
}

```

- 3.20 How do the following statements differ?

(a) char * const p;

- - p is a constant pointer to a char. The pointer p cannot be changed to point to another address, but the value it points to can be modified.

(b) char const *p;

- - p is a pointer to a constant char. The value pointed to by p cannot be modified, but the pointer itself can point to different addresses.


### Inline expansion may not work in the following situations:

Functions with loops, switches, or goto statements.

Functions without return values that contain a return statement.

Functions with static variables.

Recursive functions.

- Inline expansion speeds up a program by eliminating the overhead of function calls, but it increases memory usage because the function's code is duplicated at each call site. Therefore, a trade-off between speed and memory usage is necessary.

- A default argument is checked for type at the time of declaration and evaluated at the time of call. One important point to note is that only the trailing arguments can have default values and therefore we must add defaults from right to left 

4.4 Advantage of passing arguments by reference:
The main advantage is that it allows the function to modify the actual argument's value in the calling code, and it avoids copying large data structures, improving performance.

4.5 Advantage of using references instead of pointers:
References are safer and easier to use since they cannot be null and do not require dereferencing, making them less error-prone compared to pointers.

4.6 When to make a function inline:
You should make a function inline when it is small and frequently called, as it eliminates the overhead of function calls and may improve performance by reducing call and return time.

4.7 Difference between inline function and preprocessor macro:
An inline function is a part of the C++ code and respects type checking, while a macro is a preprocessor directive that performs textual substitution and does not have type safety.

4.8 When to use default arguments:
Default arguments are used when a function can operate with one or more optional parameters, and the caller can omit some arguments. They simplify function calls in cases where most arguments have a common value.

4.9 Significance of empty parentheses in a function declaration:
Empty parentheses in a function declaration indicate that the function does not accept any arguments, or it can be used to indicate that the function's parameter list is unspecified, typically in older C++ code or to avoid ambiguity.

4.10 Overloading of a function:
Function overloading refers to defining multiple functions with the same name but different parameters. It is used when similar operations are performed with different types or numbers of arguments.

4.11 How to achieve function overloading:
Function overloading is achieved by defining multiple functions with the same name but different parameter types, number of parameters, or both. The compiler distinguishes between them based on these differences.



5.1 How do structures in C and C++ differ?

In C, structures can only have data members (variables).

In C++, structures can have data members and functions, access specifiers (public, private).

5.2 What is a class? How does it accomplish data hiding?

A class is a user-defined data type containing data and functions.

It accomplishes data hiding by using private access specifier — members under private are hidden from outside.

5.3 How does a C++ structure differ from a C++ class?

In C++, the default access in a structure is public, while in a class it is private.

5.4 What are objects? How are they created?

Objects are instances of a class.

They are created by declaring variables of the class type:
Example: ClassName obj;

5.5 How is a member function of a class defined?

It can be defined inside the class or outside using scope resolution operator ::.

5.6 Can we use the same function name for a member function and an outside function?

Yes, they are distinguished by scope.

Member functions are called through objects, outside functions are called normally.

5.7 Accessing data members and member functions:
(a) Inside main program:
→ Use object and dot operator: obj.memberFunction();

(b) Inside a member function of the same class:
→ Access directly without object or dot operator.

(c) Inside a member function of another class:
→ Requires object of the class or making the second class a friend.

5.8 When do we declare a member of a class static?

When we want a single copy of the member shared by all objects of the class.

5.9 What is a friend function? Merits and demerits:

A friend function can access private and protected members of a class.

Merits: Provides flexibility in accessing private data.

Demerits: Breaks data hiding, reduces security.

5.10 Can we pass class objects as function arguments?

Yes, objects can be passed by value or by reference to functions.

A class constructor is called everytime an object is
created. Similarly, as the program control leaves the current block
the objects in the block start getting destroyed and destructors are
called for each one of them.


6.1 A constructor is a special function that initializes objects of a class. It is not mandatory, but without it, the compiler provides a default one.

6.2 A constructor is automatically invoked when an object of a class is created.

6.3 Special properties:

Same name as the class.

No return type (not even void).

Automatically called at object creation.

6.4 A parameterized constructor accepts arguments to initialize an object with specific values.

6.5 Yes, we can have multiple constructors using constructor overloading to create objects differently depending on needs.

6.6 Dynamic initialization of objects means initializing them with values computed during runtime, not hard-coded at compile time.

6.7 It is achieved using constructors that take arguments (parameterized constructors) or by assigning calculated values inside constructors.

6.8

time T2(T1); → Calls the copy constructor.

time T2 = T1; → Also calls the copy constructor but looks like assignment syntax.

6.9 A destructor is important for releasing resources (like memory) when an object is destroyed, ensuring no resource leaks.