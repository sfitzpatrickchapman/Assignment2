// Scott Fitzpatrick, 2328196
#include <iostream>
using namespace std;

void userInput(int &feetInput, int &inchesInput, bool occurance) {
  /* If the program has already ran once, this will ask the user if they want
  to run the program again */
  if (occurance) {
    string exitOption;

    /* exit option prompt and input */
    cout << "Would you like to convert another measurement?" << endl;
    cout << "If yes, enter anything, if not, enter \"exit\": ";
    cin >> exitOption;

    /* exits if the user typed "exit" */
    if (exitOption == "exit") {
      cout << "Exiting program..." << endl << endl;
      exit(0);
    }
  }

  /* prompt and get feet and inches input */
  cout << "\nEnter your imperial values below:" << endl;
  cout << "Feet: ";
  cin >> feetInput;
  cout << "Inches: ";
  cin >> inchesInput;
}

void conversionCalculate(int feetInput, int inchesInput,
  int &meters, float &centimeters) {
  /* Initializes totalInches and totalCentimeters with their summed values */
  int totalInches = (feetInput * 12) + inchesInput;
  float totalCentimeters = (float)(totalInches) * 2.54; // 1in = 2.54cm

  /* Calculates meters and remainding centimeters */
  meters = (int)(totalCentimeters / 100); // int conversion rounds float down
  centimeters = (totalCentimeters - ((float)(meters) * 100)); // total cm - m
}

void outputToConsole(float meters, float centimeters) {
  /* Simple output to console */
  cout << "There are " << meters << " meters and " <<
  centimeters << " centimeters." << endl << endl;
}

main() {
  bool occurance = false;
  int feetInput;
  int inchesInput;
  int meters;
  float centimeters;

  while (true) { // allows program to loop as long as it's not exited
    userInput(feetInput, inchesInput, occurance);
    conversionCalculate(feetInput, inchesInput, meters, centimeters);
    outputToConsole(meters, centimeters);
    occurance = true; // for exit prompt to turn on now that it has ran once
  }
}
