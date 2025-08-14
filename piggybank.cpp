#include <iostream>
#include <cmath> // for round, floor, ceil
int main() {
  
  double pesos; //pesos to USD: 1 peso is = to 0.000249 USD
  double reals; // reals to USD: 1 reais is = 0.19 USD
  double sols; // sols to USD: 1 sols is = to USD 0.28
  double dollars; 

  std::cout << "Enter number of pesos: ";
  std::cin >> pesos;

  std::cout << "Enter amount of reals: ";
  std::cin >> reals;

  std::cout << "Enter amount of sols: ";
  std::cin >> sols;
  
  dollars = (0.000249 * pesos) + (0.19 * reals) + (0.28 * sols);

  std::cout << "US Dollars = $" << std::round(dollars * 100) / 100;
}
