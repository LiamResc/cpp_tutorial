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
  cout << x + y + z; // 30
    return 0;}