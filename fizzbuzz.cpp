#include <iostream>

int main() {

  // Brain explodes here:

  for(int i = 100; i > 0; i--){
    std::cout << i << "\n"; 


if(i % 5 == 0 && i % 3 == 0){
    std::cout << "FizzBuzz\n";
}else if (i % 3 == 0){
  std::cout << "Fizz\n";
}else if (i % 5 == 0 ){
  std::cout << "Buzz\n";
};

  };
};
