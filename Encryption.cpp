// This is a snippet of my work. 


#include <iostream>




    // The line output[i] = source[i] has been changed to add the transformation of each character based on an xor of the 
    // key modded constrained to key length using a mod. The transformation uses ^ key[i % key_length] to change each character
    // based on xor and completes a modulus operation between i and the key length. After the modulus operation is performed,
    // a new string called key is defined to hold a secret message that is determined to be a string named cupcake secret.

    output[i] = source[i] ^ key[i % key_length];

    const std::string key1 = "cupcake secret";  // This is a key using a dessert name for uniqueness.


  }

  

  // This is the implementation of loading the file into a string using a key, a cipher text format, and a plain text format.
  // The cipher text and plain text strings load the encrypt_decrypt method for using the output of the transformed string,
  // then will use the test string from file_text and the specific key to ensure that the file is loaded into a string that 
  // is both encrypted and in a plain text view that is readable. 

 const std::string key2 = "gingerbread secret"; // This is another key using a dessert name for uniqueness.

  const std::string cipher_text = encrypt_decrypt(file_text, key2);

  const std::string plain_text = encrypt_decrypt(cipher_text, key2);

  return file_text;
}





 // This is the implementation for file saving. The file saving includes the student name, the timestamp of when this implementation was created,
// a specific key used, and data that outputs the data was saved when file saving is successful. This implementation ensures that the user who saved the file
// is able to save the file. 

    const std::string student_name1 = "Clara Kellermann-Bryant";
    const std::string time_stamp = "2021-07-27";
    const std::string key3 = "marshmallow secret";
    const std::string data1 = "Saved";
}



 // This is the input file format for the encryption and decryption tests. This format includes the student name, the website used for the lorem ipsum
// generator, and the three lorem ipsum paragraphs from the generator. This format will be within the input file when executed. 

  const std::string student_name2 = "Clara Kellermann-Bryant";
  const std::string website = "http://www.cupcakeipsum.com/";
  const std::string lorem_ipsum = "Cupcake ipsum dolor sit. Amet cheesecake muffin soufflé cake lemon drops dragée. Marzipan dessert cotton candy ice cream cupcake cupcake. Lollipop bear claw toffee dragée. Jujubes soufflé sweet chocolate cake. Brownie cake cake cookie."
      "Cupcake chocolate bar danish pie croissant. Carrot cake chocolate bar icing liquorice powder chocolate cake caramels dessert." "Pudding cake caramels marzipan bonbon cake jujubes. Ice cream chocolate bar jelly cotton candy. Topping pudding bear claw bear claw."
      "Pastry gummi bears cupcake gummies pastry dragée tiramisu. Tiramisu candy lollipop marzipan icing cookie jelly ice cream macaroon. Lollipop cake pastry." "Macaroon candy canes powder chocolate cake tiramisu topping ice cream jelly beans lollipop. Carrot cake jujubes pudding. Halvah ice cream pie jelly cookie pudding chocolate bar. Sweet pudding candy croissant muffin sweet. Apple pie macaroon candy canes pie muffin chupa chups jelly beans bear claw bonbon."
      "Wafer toffee sugar plum brownie chocolate muffin chocolate bar. Pastry powder marshmallow tart jujubes tart cookie pie chocolate. Jujubes brownie soufflé pie lollipop. Chupa chups marzipan macaroon. Carrot cake sesame snaps tart cotton candy chocolate bar halvah. ";


  const std::string file_name = "inputdatafile.txt";
  const std::string encrypted_file_name = "encrypteddatafile.txt";
  const std::string decrypted_file_name = "decrytpteddatafile.txt";
  const std::string source_string = read_file(file_name);
  const std::string key = "password";

}
