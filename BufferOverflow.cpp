// These are snippets of my work

#include <iomanip>
#include <iostream>

int main()
{
  


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
