// Scott Fitzpatrick, 2328196
#include <iostream>
using namespace std;

/* function to change a and b values with variable reference */
void zeroBoth(int &a, int &b) {
  a = 0;
  b = 0;
}

main() { // for testing; a and b values are meaningless samples
  int a = 32;
  int b = 64;

  /* outputs a and b before zeroBoth is applied, and after */
  cout << "\nBefore zeroBoth: a = " << a << ", b = " << b << endl;
  zeroBoth(a, b);
  cout << "After zeroBoth: a = " << a << ", b = " << b << endl << endl;
}
