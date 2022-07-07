#include <iostream>
#include <cmath>
#include <vector>

void introduction(std::string first_name, std::string last_name) {

  std::cout << last_name << ", " << first_name << " " << last_name << "\n";

}

double average(double num1, double num2) {

  return (num1 + num2)/2;

}

int tenth_power(int num) {

  return pow(num, 10);

}

std::vector<int> first_three_multiples(int num) {

  std::vector<int> multiples = {num, num*2, num*3};
  return multiples;

}

std::string needs_water(int days, bool is_succulent) {

  if (!is_succulent && days > 3) {

    return "The plant needs to be watered.\n";

  } else if (is_succulent && days > 3) {

    return "The plant needs a little bit of water.\n";

  } else {

    return "The plant doesn't need to be watered.\n";

  }
   
}

bool is_palindrome(std::string text) {
  
  std::string text_reversed = "";

  for (int i = text.length() - 1; i >= 0; i--) {

    text_reversed += text[i];

  }
  
  return (text == text_reversed);

}

int main() {
  
  introduction("Pierre", "Podgornik"); // Output: Podgornik, Pierre Podgornik
  
  std::cout << average(23.0, 29.0) << "\n"; // Output: 26
  std::cout << average(3.0, 4.0) << "\n"; // Output: 3.5
  
  std::cout << tenth_power(0) << "\n"; // Output: 0
  std::cout << tenth_power(1) << "\n"; // Output: 1
  std::cout << tenth_power(2) << "\n"; // Output: 1024
  
  for (int element : first_three_multiples(9)) {
    std::cout << element << "\n";
  }
  /*Output:
    9
    18
    27
  */
  
  std::cout << needs_water(4, false); // Output: The plant needs to be watered.
  std::cout << needs_water(15, true); // Output: The plant needs a little bit of water.
  std::cout << needs_water(2, false); // Output: The plant doesn't need to be watered.
  
  std::cout << is_palindrome("noon") << "\n";  // Output: 1
  std::cout << is_palindrome("pierre") << "\n"; // Output: 0
  std::cout << is_palindrome("rotator") << "\n"; // Output: 1
  
}
