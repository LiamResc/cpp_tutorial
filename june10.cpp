#include <iostream> // import library
using namespace std;

int main() {
  cout << "Hello World!" << "croenem" << "\n"; // you can do these in succession
  cout << "Croenem" << " is a cool name" << endl;
  cout << "this is a new line \n"; // endl is an object that represents a new line. 

  int x, y, z = 10; // you can declare multiple variables of the same type in one line. But 
  // only z is initialized to 10, x and y are uninitialized and will have garbage values.
  cout << "Heres some BS:" << (x + y + z) << endl;// some BS
  
  x = 10, y = 10;
  cout << x + y + z << endl; // 30


  // const variables
  const int secondsInMinute = 60; // This is read only and also wont be able to be updated
  // Also you need to assign const a vlaue on init obviously (think about it!)



  // cin
  // cin uses the extraction operator (>>) to take input from user.
  // it assigns the value to the variable on the right of the operator.
  int age;
  cout << "enter your age: ";
    cin >> age; // this will wait for user input and then assign it to age variable
    cout << "your age is: " << age << endl;


// double is usally better than float since its 8 bytes vs 4 so it has more precisioj

// string requires #include <string> i guess

 // auto lets the compiler deduce the type of the variable based on the assigned value. So pi will be of type double.
auto pi = 3.14159;
cout << "type of pi: " << typeid(pi).name() << endl; // this will print the type of pi, which is double
    return 0;}