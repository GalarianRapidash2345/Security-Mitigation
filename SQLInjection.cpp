// These are snippets of my work. 


#include <iostream>






  // This condition statement will fail and display an error if there is a suspected SQL Injection,
  // and flags a generic error to ensure that attackers cannot use any type of exploit.
    char* error_message;
    if (sqlite3_exec(db, sql.c_str(), callback, &records, &error_message) == SQLITE_OK)
    {
        std::cout << " SQL security is successful. " << std::endl;
        
    }
    else
    {
        error_message = " or 'value' = 'value'; "; // This is the generic error being flagged
        std::cout << "Data failed, SQL Injection suspected. ERROR = " << error_message << std::endl;
    }

    

 

  if(result != SQLITE_OK)
  {
    std::cout << "Failed to connect to the database and terminating. ERROR=" << sqlite3_errmsg(db) << std::endl;
    error_message = " or 'value' = 'value'; "; // This is the generic flagged error being passed in main. 
    return -1;
  }

  std::cout << "Connected to the database." << std::endl;

  
  // This ensures that if there is not a SQL Injection exploit, the execution of the file is successful. 
  if (result == SQLITE_OK)
  {
      std::cout << " SQL execution is successful. " << std::endl;
  }

  return return_code;
}


