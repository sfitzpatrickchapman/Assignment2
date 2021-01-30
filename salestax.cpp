// Scott Fitzpatrick, 2328196
#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) {
  return cost + (cost * (taxRate/100));
}

main () {
  float inputTaxRate;
  float inputCost;
  float totalCost;

  /* tax rate prompt & input */
  cout << "\nPlease enter your tax rate %: ";
  cin >> inputTaxRate;

  while (inputTaxRate <= 0){ // makes sure tax rate is positive
    cout << "There cannot be a negative tax rate." << endl;
    cout << "Please enter a positive percent number: ";
    cin >> inputTaxRate;
  }

  /* cost prompt & input */
  cout << "Please enter your cost: $";
  cin >> inputCost;
  if (inputCost <= 0) {
    cout << "There is no tax on free items." << endl << endl;
    exit(0);
  }

  /* function call, float output formatting, and output */
  totalCost = addTax(inputTaxRate, inputCost);
  cout << fixed; // fixes output so float doesn't display too many decimals
  cout.precision(2); // sets the decimal precision to 2
  cout << "The total cost including the sales tax is: $" << totalCost <<
  endl << endl;
}
