#include <iostream>

int main() {

  double earthWeight;
  int planet;
  double endweight;

  std::cout << "What is your earth weight? ";
  std::cin >> earthWeight;
  
  std::cout << "What planet are you planning on fighting today? ";
  std::cin >> planet;

  if (planet == 1) {
    std::cout << "You have chosen: Mercury\n";
    endweight = earthWeight * 0.38;
    std::cout << "Your final weight is: " << endweight << "\n";

  } else if (planet == 2) {
    std::cout << "You have chosen: Venus\n";
    endweight = earthWeight * 0.91;
    std::cout << "Your final weight is: " << endweight << "\n";

  } else if (planet == 3) {
    std::cout << "You have chosen: Mars\n";    
    endweight = earthWeight * 0.38;
    std::cout << "Your final weight is: " << endweight << "\n";

  } else if (planet == 4) {
    std::cout << "You have chosen: Jupiter\n";
    endweight = earthWeight * 2.34;
    std::cout << "Your final weight is: " << endweight << "\n";

  } else if (planet == 5) {
    std::cout << "You have chosen: Saturn\n";
    endweight = earthWeight * 1.06;
    std::cout << "Your final weight is: " << endweight << "\n";

  } else if (planet == 6) {
    std::cout << "You have chosen: Uranus\n";
    endweight = earthWeight * 0.92;
    std::cout << "Your final weight is: " << endweight << "\n";
  
  } else if (planet == 7) {
    std::cout << "You have chosen: Neptune\n";
    endweight = earthWeight * 1.19;
    std::cout << "Your final weight is: " << endweight << "\n";

  } else {
    std::cout << "Error. Either you have entered a string or the number is invalid.\n";
  }

}
