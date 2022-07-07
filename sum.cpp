#include <vector>
#include <iostream>

int main() {
  
  int odd_sum = 0;
  int even_sum = 0;
  std::vector<int> number_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < number_vector.size(); i++) {

    if (number_vector[i] % 2 == 0) {

      even_sum += number_vector[i];

    } else {

      odd_sum += number_vector[i];

    }

  }

  std::cout << "Even sum: " << even_sum << "\n";
  std::cout << "Odd sum: " << odd_sum << "\n";
  
}
