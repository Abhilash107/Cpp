

## Destructor:
- A destructor in C++ is a special member function of a class that is automatically invoked when an object of the class goes out of scope or is explicitly deleted. The purpose of the destructor is to clean up resources that the object may have acquired during its lifetime, such as memory, file handles, or database connections.

- Same Name as the Class: The destructor has the same name as the class but is prefixed with a tilde ~.

- No Parameters: A destructor does not take any arguments and does not return a value.
- Automatically Invoked: Called automatically when the object goes out of scope or is deleted.
- One Per Class: A class can have only one destructor.
- Order of Execution: Destructors are called in the reverse order of the object creation.
- Virtual Destructor: Inheritance scenarios often require a virtual destructor to ensure proper cleanup of resources in polymorphic classes.





## Final keyword:
The final keyword in C++ is used in two main contexts:

- To Prevent a Class from Being Inherited:

- When a class is marked with final, it cannot be used as a base class. This means no other class can derive from it.
To Prevent a Virtual Function from Being Overridden:

- When a virtual function in a base class is marked as final, it cannot be overridden by any derived class.
