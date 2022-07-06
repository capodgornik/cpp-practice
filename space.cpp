#include <iostream>

int main() {
  
  double weighte; //weight on earth
  int planet; //integer corresponding to the planet the user is going to fight on

  std::cout << "Enter Earth weight in pounds: ";
  std::cin >> weighte;
  
  std::cout << "Mercury - 1\nVenus - 2\nMars - 3 \nJupiter - 4\nSaturn - 5\nUranus - 6\nNepture - 7\n";
  std::cout << "Enter the number corresponding to the planet you want to fight on: ";
  std::cin >> planet;

  switch (planet) {
    case 1:
      std::cout << "Your weight on Mercury is: " << weighte * 0.38 << " pounds\n";
      break;
    case 2:
      std::cout << "Your weight on Venus is: " << weighte * 0.91 << " pounds\n";
      break;
    case 3:
      std::cout << "Your weight on Mars is: " << weighte * 0.38 << " pounds\n";
      break;
    case 4:
      std::cout << "Your weight on Jupiter is: " << weighte * 2.34 << " pounds\n";
      break;
    case 5:
      std::cout << "Your weight on Saturn is: " << weighte * 1.06 << " pounds\n";
      break;
    case 6:
      std::cout << "Your weight on Uranus is: " << weighte * 0.92 << " pounds\n";
      break;
    case 7:
      std::cout << "Your weight on Neptune is: " << weighte * 1.19 << " pounds\n";
      break;
    default:
      std::cout << "Please select a valid number.\n";
      break;
  }
  
}
