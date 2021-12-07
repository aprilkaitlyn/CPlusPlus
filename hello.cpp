#include <iostream>

int main() 
{
  //output text to the terminal
  std::cout << "Hello World!\n";
  
  //variables
  int year;
  year = 2021;
  bool isHot = true;
  
  //concat words + variables
  std::cout << "The year is ";
  std::cout << year;
  std::cout << "!";
  
  //OR
  std::cout << "The year is " << year << "!";
  
  //cin is used for input
  std::cout << "Password: ";
  std::cin >> password;
}
