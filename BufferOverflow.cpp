// BufferOverflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>

int main()
{
  std::cout << "Buffer Overflow Example" << std::endl;

  // TODO: The user can type more than 20 characters and overflow the buffer, resulting in account_number being replaced -
  //  even though it is a constant and the compiler buffer overflow checks are on.
  //  You need to modify this method to prevent buffer overflow without changing the account_order
  //  variable, and its position in the declaration. It must always be directly before the variable used for input.

  


  const std::string account_number = "CharlieBrown42";
  char user_input[20];
  std::cout << "Enter a value: ";
  std::cin >> user_input;

  std::cout << "You entered: " << user_input << std::endl;
  std::cout << "Account Number = " << account_number << std::endl;


  // This will prevent buffer overflows without changing the account_order or account_number variables, and without changing the 
  // position in the declaration. 

  // This prevents buffer overflow
  // This input validation ensures account_number output is successful.
  
  while ((std::cin >> user_input)) {
	  std::cout << account_number << std::endl;
	  std::cout << "No Overflows Detected" << std::endl;
	  std::cin.clear();
	  std::cin.ignore(20, '\n');
  }

  // This input validation notifies callback for buffer overflow detection.
  
  while (!(std::cin >> user_input)) {
	  std::cout << "Error: Buffer Overflow Detected" << std::endl;
  }

  // This prevents buffer underflow
  
  char account_buffer[4];
  strncpy(account_buffer, "foo", sizeof(account_buffer));
  
  // This input validation ensures user_input is successful.
  
  while ((std::cin >> account_buffer)) {
	  std::cout << user_input << std::endl;
	  std::cout << "No Underflows Detected" << std::endl;
	  std::cin.clear();
	  std::cin.ignore(20, '\n');
  }

  // This input validation notifies callback for buffer underflow detection.
  
  while (!(std::cin >> account_buffer)) {
	  std::cout << "Error: Buffer Underflow Detected" << std::endl;
  }
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
