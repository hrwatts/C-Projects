// /* PrinciplesCPP.cpp : This file contains the 'main' function. */
// /* Program execution begins and ends there. */
// /* */

// Include some standard resources
#include <iostream>
#include <vector>

/* Pointers 
Pointers are variables that hold memory address.
Iterators are a generic function used to traverse containers.
This function allows the programmer to implement read and write code
as the container is traversed.
*/


/* Overloading
    Note that the new operation is overloadable.
    source: 
    https://www.geeksforgeeks.org/overloading-new-delete-operator-c/
*/
#include<string>
class student
{
    std::string name;
    int age;
    public:
        student()
        {   
            std::cout << "Constructor: \n" ;
        }

        student(std::string name, int age)
        {
            this -> name = name;
            this -> age = age;
        }

        void display()
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
        }
        void * operator new(size_t size)
        {
            std::cout<< "Overloading new operator with size: " << size << std::endl;
            void * p = ::operator new(size);
            //void * p = malloc(size); will also work fine
        
            return p;
        }
        void * operator new(size_t size, char c)
        {
            void *ptr;
            ptr = malloc(size);
        return ptr;
        }

        void operator delete(void * p)
        {
            std::cout<< "Overloading delete operator " << std::endl;
            free(p);
        }
};

/* Templates
source: https://www.cplusplus.com/doc/oldtutorial/templates/
"Function templates are special functions that can operate 
with generic types. This allows us to create a function template 
whose functionality can be adapted to more than one type or class 
without repeating the entire code for each type."
*/
template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

/* print vectors */
void printv(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

// Unions
union
{
    std::uint16_t a;
    std::uint32_t b;
    std::int8_t c; 
} u1;

int main(int argc, char* argv[])
{
    // Print Hello World! //
    std::cout << "Hello World!\n"<<std::endl;
    
    // Use the vector command from std namespace
    std::cout << "\n USING VECTORS \n" << std::endl;
    std::vector<int> v(22);
    bool b = (v[6]);
    printf("bool b = %d", !b); // returns 1
    /* Note that using namespace std; is bad practice 
        because this automatically includes
        all header files in the standard library */
    
    // more vectors    
    std::cout << "\n \n" << std::endl;

    std::cout << "\n MORE VECTORS \n" << std::endl;
    std::vector<int> v1{ 1,2,3 };
    std::vector<int> v2 = v1;
    v1.push_back(4);
    v2.push_back(5);
    std::cout << "\n Vector 1 \n ";
    printv(v1);
    std::cout << "\n Vector 2 \n";
    printv(v2);
    std::cout << "\n \n" << std::endl;

    /* Iterators 
    Use the ++ command to iterate an integer.
    */
    std::cout << "\n USING ITERATORS \n" << std::endl;
    int x = 10, y = 20;
    std::cout << "x = " << x << " and y = " << y << std::endl;
    std::cout << "x++ = " << x++ << " and ++y = "<< ++y << std::endl;
    
    std::cout << "x-- = " << x-- << " and --y = "<< --y << std::endl;

    // Templates
    /* Using the template GetMax
    */
    std::cout << "\n USING TEMPLATES \n" << std::endl;
    int i=5, j=6, k;
    long l=10, m=5, n;
    k=GetMax<int>(i,j);
    n=GetMax<long>(l,m);
    std::cout << "k=GetMax<int>(i,j)=" << k << std::endl;
    std::cout << "n=GetMax<long>(l,m)=" << n << std::endl;
    std::cout << "\n \n" << std::endl;

    // Structures
    /* By default the access specifier 
    for members of struct is public, 
    whereas for members of class, it is private. 
    */
    std::cout << "\n USING STRUCTS \n" << std::endl;
    typedef struct 
    { 
        unsigned int age ; 
        unsigned char gender ;
        unsigned int size ;
    } child_t;
    
    // smallest size a variable of type child_t may occupy
    printf("\n Size of struct: %li \n", sizeof(child_t));
    // Returns size = 12 > 7

    /* Permission to access data struct based on condition */
    typedef struct 
    {
        int sunday:1;
        int monday:1;
        //more days
        int friday:1;
        int saturday:1;
    } weekdays;
    std::cout << "\n \n" << std::endl;
    


    /* const references
    Declaring a parameter as a const reference 
    instead of declaring it as a regular
    object allows the argument to be passed as a reference, 
    so if the passed object is large,
    the program will require less memory
    */
    std::cout << "\n USING OVERLOADING \n" << std::endl;

    student * p = new student("Yash", 24);
 
    p->display();
    delete p;
    std::cout << "\n \n" << std::endl;

    // Size of a union
    std::cout << "\n USING UNIONS \n" << std::endl;

    std::cout <<"\n Size of u1: \n" << sizeof(u1);
    std::cout << "\n \n" << std::endl;

    /* lvalues and rvalues
    source: https://docs.microsoft.com/en-us/cpp/cpp/lvalues-and-rvalues-visual-cpp
    lvlaues are expressions that represent an object with an address.
        The C++17 standard defines expression value categories as follows:
            A glvalue is an expression whose evaluation determines 
                the identity of an object, bit-field, or function.
            A prvalue is an expression whose evaluation initializes 
                an object or a bit-field, or computes the value 
                of the operand of an operator, as specified by the context 
                in which it appears.
            An xvalue is a glvalue that denotes an object or bit-field 
                whose resources can be reused (usually because it is near 
                the end of its lifetime). 
                Example: Certain kinds of expressions involving rvalue references 
                (8.3.2) yield xvalues, such as a call to a function whose return type 
                is an rvalue reference or a cast to an rvalue reference type.
            An lvalue is a glvalue that is not an xvalue.
            An rvalue is a prvalue or an xvalue.
    */

    /* Ternary Operator -  Conditional (or Ternary) Operator (?:)
    source: http://www.cplusplus.com/articles/1AUq5Di1/
    
    The conditional operator is an operator used in C and C++ 
    (as well as other languages, such as C#). 
    The ?: operator returns one of two values depending on the result 
    of an expression.
    
    Syntax
    (expression 1) ? expression 2 : expression 3
    If expression 1 evaluates to true, then expression 2 is evaluated.
    If expression 1 evaluates to false, then expression 3 is evaluated instead.
    
    */
    std::cout << "TERNARY OPERATORS" << std::endl;

    int OneOrTwo;
    std::cout << "1 or 2?" << std::endl;
    std::cin >> OneOrTwo;
    std::string new_string;
    if(OneOrTwo == 1)
        {new_string = "selected 1.";}
    else   
        {new_string = "not selected 1.";}
    
    std::cout << "You have ";
    std::cout << new_string << std::endl;

 
    int ThreeOrFour;
    std::cout << "3 or 4?" << std::endl;
    std::cin >> ThreeOrFour;

    std::string selected =(ThreeOrFour==3)?"selected 3.": "not selected 3.";
    
    std::cout << "You have " << selected << std::endl;

    
}