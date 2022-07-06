#include <iostream>

int main() {

  double weighte; //weight on earth
  double weightm;  //weight on Mars

  std::cout << "Enter the weight of an item on Earth in pounds: ";
  std::cin >> weighte;
  weightm = (weighte/9.81) * 3.711;
  std::cout << "The weight of the item on Mars would be: " << weightm << " pounds.";

}
