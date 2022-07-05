#include <iostream>

int main() {

  double miles;
  double kilometers;

  std::cout << "Enter a distance in miles: ";
  std::cin >> miles;
  kilometers = miles * 1.609;
  std::cout << "The distance in kilometers would be: " << kilometers << " kilometers.";

}
