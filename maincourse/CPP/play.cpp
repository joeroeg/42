#include <iostream>
#include <string>
#include "car.hpp"

/*****************************************************************************************************************************************************
 * @brief CLASSES AND OBJECTS
 * The Car class represents a vehicle with a make, model, and year.
 * The source file contains the actual implementation of the class functions.
 * Here, you define the logic behind each function declared in the header file.
 * You must include the class's header file to access its definition.
*******************************************************************************************************************************************************/

/**************************************************************************************************************************************************************
 * @brief CONSTRUCTORS AND DESTRUCTORS
 * Constructors and destructors are fundamental concepts in C++ for managing the lifecycle of objects,
 * concepts that do not have direct equivalents in C due to its lack of support for object-oriented programming.
 * These mechanisms provide a structured and intuitive means of initializing and cleaning up objects,
 * ensuring resources are managed safely and efficiently.
 *
 * Constructors:
    * - Constructors are special member functions that are automatically called when an object is created.
    * - They are used to initialize the object's state, allocate resources, and perform any necessary setup operations.
    * - Constructors have the same name as the class and do not have a return type.
    * - They can be overloaded to accept different sets of parameters, allowing for object initialization with varying arguments.
    * - Constructors can have default arguments, enabling objects to be created with fewer parameters.
    * - Constructors can be explicitly defined or implicitly generated by the compiler.
 *
 * Destructors:
    * - Destructors are special member functions that are automatically called when an object goes out of scope or is explicitly deleted.
    * - They are used to release resources, perform cleanup operations, and deallocate memory associated with the object.
    * - Destructors have the same name as the class preceded by
    * - They do not take any arguments or return types.
    * - Destructors are called automatically when an object is destroyed, ensuring that resources are properly released.
    * - Destructors can be explicitly defined to perform custom cleanup operations, such as closing files or releasing memory.
    * - Destructors are essential for managing resources and preventing memory leaks in C++ programs.
 *
 * What is the Coplien Form?
    * The Coplien Form, named after James Coplien who identified the pattern, refers to a class declaration that includes at least:
    * A default constructor (if applicable).
    * A copy constructor.
    * A copy assignment operator.
    * A destructor.
    * This form ensures that an object can be copied and destroyed correctly,
    * especially important in cases involving dynamic memory management or other resources that require explicit release. While in modern C++ (C++11 and later),
    * we also consider the move constructor and move assignment operator as part of resource management best practices (often called the "Rule of Five"), the original Coplien Form focuses on these four elements to ensure resource safety in classes.
 *
 * What is Orthodox Canonical Form?
    * The Orthodox Canonical Form is another term for the Coplien Form.
    * It refers to the same concept of providing a well-defined way to manage the lifecycle of objects,
    * including their creation, copy, assignment, and destruction, to avoid resource leaks, dangling pointers,
    * and other common issues related to resource management in C++.
***************************************************************************************************************************************************************/


/*
In the .cpp File (Source)
You would implement the constructor, destructor (even if it does nothing special),
copy constructor, and copy assignment operator, along with your drive and display methods.
*/


// Constructor - initializes the Car object with the provided make, model, and year
Car::Car(const std::string& make, const std::string& model, int year)
    : make(make), model(model), year(year) {}

// Destructor - even if it does nothing, it's defined here
Car::~Car() {}

// Copy constructor - creates a new Car object as a copy of another Car object
Car::Car(const Car& other)
    : make(other.make), model(other.model), year(other.year) {}

// Copy assignment operator - assigns the values of another Car object to this Car object
Car& Car::operator=(const Car& other) {
    if (this != &other) { // Protect against self-assignment
        make = other.make;
        model = other.model;
        year = other.year;
    }
    return *this;
}

// Drive method - prints a message indicating the car is driving
void Car::drive() const {
    std::cout << "The " << make << " " << model << " is driving." << std::endl;
}

// Display method - prints the car's make, model, and year
void Car::display() const {
    std::cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << std::endl;
}

/****************************************************************************************************************************************************
 * @brief FUNCTION OVERLOADING
 * C++ allows multiple functions to have the same name with different parameters, enabling function overloading.
 * This feature is not available in C.
****************************************************************************************************************************************************/
void print(int i) {
    std::cout << "" << i << std::endl;
}

void print(double f) {
    std::cout << "" << f << std::endl;
}


/*****************************************************************************************************************************************************
 * @brief NAMESPACES
 * C++ uses namespaces to avoid name collisions, a feature not present in C.
 * Namespaces in C++ are a fundamental feature designed to avoid name collisions and organize code into logical groups.
 * This is especially useful in large projects or when using multiple libraries,
 * where the likelihood of two identifiers (such as functions, classes, or variables) having the same name significantly increases.
 * Without namespaces, programmers would have to ensure globally unique names across all libraries and codebases they work with,
 * which is impractical and restricts code readability and maintainability.
 * Why namespaces are important:
 * - Avoiding name collisions: Namespaces prevent conflicts between identifiers with the same name.
 * - Organizing code: Namespaces help group related code together, making it easier to manage and maintain.
 * - Encapsulation: Namespaces provide a level of encapsulation, allowing you to control the visibility of identifiers.
 * - Code readability: Namespaces improve code readability by providing context and structure to the codebase.

 * Example Scenario:
    * Imagine you are working on a graphics application that uses two different graphics libraries: AwesomeGraphicsLib and MegaCoolGraphicsLib.
    * Both libraries have a class named Renderer that you want to use.
    * Without namespaces, using both Renderer classes in the same file would be impossible due to name collisions.
*
********************************************************************************************************************************************************/

namespace AwesomeGraphicsLib {
    class Renderer {
    public:
        void render() {
            // Implementation for AwesomeGraphicsLib's renderer
            std::cout << "Rendering with AwesomeGraphicsLib\n";
        }
    };
}

namespace MegaCoolGraphicsLib {
    class Renderer {
    public:
        void render() {
            // Implementation for MegaCoolGraphicsLib's renderer
            std::cout << "Rendering with MegaCoolGraphicsLib\n";
        }
    };
}


/**********************************************************************************************************************************************************
 * @brief REFERENCE VARIABLES
 * C++ reference variables are indeed a powerful feature introduced as a safer and more convenient alternative to pointers.
 * They allow a program to refer to another variable directly without using a pointer address.
 * This mechanism simplifies certain programming tasks, enhances code readability, and reduces the risk of errors associated with pointer manipulation.
 *
 * Reference Variables: Basics and Benefits:
    * - Syntax and Usage Simplicity: References provide a simpler syntax for accessing an object since they do not require dereferencing (*) as pointers do.
        * Once a reference is initialized to an object, it acts as an alias to that object.
    * - Safety: References are safer to use than pointers because they must be initialized when declared and cannot be null.
        * This constraint eliminates common pointer errors such as dereferencing null or uninitialized pointers.
    * - No Reassignment: Once a reference is initialized to refer to an initial object, it cannot be changed to refer to a different object.
        * This immutability makes code behavior easier to predict and understand, reducing the risk of errors in complex programs.
    * - Use in Function Arguments: References are extensively used to pass objects to functions.
        * Passing by reference allows the function to operate on the original object rather than a copy, without the syntactic overhead of pointers.
        * This method can improve performance, especially with large objects, and enables functions to modify the state of the passed objects.
 * When to Use References vs. Pointers:
    * - Use references: When you need to ensure that a function parameter is not null,
        * when working with operator overloading, or when you want cleaner syntax for passing objects by reference.
    * - Use pointers: When you need to allow null as a valid value,
        * when you need to reassign the reference to another object,
    * or when working with dynamic memory allocation.
 *
**************************************************************************************************************************************************************/

// Function to decrement an integer value by 1 using a pointer
void decrement(int* value) {
    if (value) { // Check for null pointer
        (*value)--;
    }
}

// Function to decrement a float value by 1 using a reference
void decrement(int& value) {
    value--;
}

/***************************************************************************************************************************************************************
 * @brief INPUT/OUTPUT STREAMS
****************************************************************************************************************************************************************/

/****************************************************************************************************************************************************************
 * @brief NEW AND DELETE OPERATORS
*****************************************************************************************************************************************************************/

/*****************************************************************************************************************************************************************
 * @brief TEMPLATES
******************************************************************************************************************************************************************/

/******************************************************************************************************************************************************************
 * @brief TYPE INFERENCE
*******************************************************************************************************************************************************************/

/*******************************************************************************************************************************************************************
 * @brief EXCEPTION HANDLING
********************************************************************************************************************************************************************/

/*

*/
int main(int argc, char *argv[]) {
    std::string make = "Toyota";
    std::string model = "Corolla";
    int year = 2022;
    int speed = 42;
    float speedLimit = 65.5;

    // std::cout << "Enter the make: ";
    // std::cin >> make;
    // std::cout << "Enter the model: ";
    // std::cin >> model;
    // std::cout << "Enter the year: ";
    // std::cin >> year;

    Car myCar(make, model, year);
    // The Car class is used to create an instance of a car object.
    myCar.display();
    myCar.drive();
    std::cout << "The speed limit is ";
    print(speed); // The print function is overloaded to accept different types of arguments.
    std::cout << "Current speed is ";
    print(speedLimit); // The print function is overloaded to accept different types of arguments.
    std::cout << "Slowing down...\n";
    decrement(&speed); // Using a pointer to decrement the speed
    decrement(speed); // Using a reference to decrement the speed
    std::cout << "Current speed is ";
    print(speed); // The print function is overloaded to accept different types of arguments.


    // Namespaces are used to avoid name collisions between classes with the same name.
    AwesomeGraphicsLib::Renderer awesomeRenderer;
    MegaCoolGraphicsLib::Renderer megaCoolRenderer;

    awesomeRenderer.render();
    megaCoolRenderer.render();


    return 0;
}
