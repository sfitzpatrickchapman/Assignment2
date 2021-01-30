// Scott Fitzpatrick, 2328196
#include <iostream>
#include <limits>
using namespace std;

main() {
  int numberArray[10];

  /* prompt user for inputs */
  cout << "\nType 10 nonnegative integers for your array." << endl;

  /* input loop that checks for invalid negative numbers */
  for (int i = 0; i < 10; ++i) {
    int tempNumber;
    cout << "Enter integer " << (i + 1) << ": ";
    cin >> tempNumber;

    if (tempNumber < 0) { // if negative re-prompt and re-input
      cout << "Invalid input. Please enter a positive integer." << endl;
      cout << "Enter integer " << (i + 1) << ": ";
      cin >> tempNumber;
    }
    numberArray[i] = tempNumber; // adds the valid input to the array
  }

  /* prints the full array */
  cout << "\nYour array numbers are: " << endl;
  for (int i = 0; i < 10; ++i) {
    cout << numberArray[i] << endl;
  }
  cout << endl;
}
