// Encryption.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cassert>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <ctime>

/// <summary>
/// encrypt or decrypt a source string using the provided key
/// </summary>
/// <param name="source">input string to process</param>
/// <param name="key">key to use in encryption / decryption</param>
/// <returns>transformed string</returns>
std::string encrypt_decrypt(const std::string& source, const std::string& key)
{
  // get lengths now instead of calling the function every time.
  // this would have most likely been inlined by the compiler, but design for perfomance.
  const auto key_length = key.length();
  const auto source_length = source.length();

  // assert that our input data is good
  assert(key_length > 0);
  assert(source_length > 0);

  std::string output = source;

  // loop through the source string char by char
  for (size_t i = 0; i < source_length; ++i)
  { // TODO: student need to change the next line from output[i] = source[i]
    // transform each character based on an xor of the key modded constrained to key length using a mod

    // The line output[i] = source[i] has been changed to add the transformation of each character based on an xor of the 
    // key modded constrained to key length using a mod. The transformation uses ^ key[i % key_length] to change each character
    // based on xor and completes a modulus operation between i and the key length. After the modulus operation is performed,
    // a new string called key is defined to hold a secret message that is determined to be a string named cupcake secret.

    output[i] = source[i] ^ key[i % key_length];

    const std::string key1 = "cupcake secret";  // This is a key using a dessert name for uniqueness.


  }

  // our output length must equal our source length
  assert(output.length() == source_length);

  // return the transformed string
  return output;
}

std::string read_file(const std::string& filename)
{
  std::string file_text = "John Q. Smith\nThis is my test string";

  // TODO: implement loading the file into a string

  // This is the implementation of loading the file into a string using a key, a cipher text format, and a plain text format.
  // The cipher text and plain text strings load the encrypt_decrypt method for using the output of the transformed string,
  // then will use the test string from file_text and the specific key to ensure that the file is loaded into a string that 
  // is both encrypted and in a plain text view that is readable. 

 const std::string key2 = "gingerbread secret"; // This is another key using a dessert name for uniqueness.

  const std::string cipher_text = encrypt_decrypt(file_text, key2);

  const std::string plain_text = encrypt_decrypt(cipher_text, key2);

  return file_text;
}

std::string get_student_name(const std::string& string_data)
{
  std::string student_name;

  // find the first newline
  size_t pos = string_data.find('\n');
  // did we find a newline
  if (pos != std::string::npos)
  { // we did, so copy that substring as the student name
    student_name = string_data.substr(0, pos);
  }

  return student_name;
}

void save_data_file(const std::string& filename, const std::string& student_name, const std::string& key, const std::string& data)
{
  //  TODO: implement file saving
  //  file format
  //  Line 1: student name
  //  Line 2: timestamp (yyyy-mm-dd)
  //  Line 3: key used
  //  Line 4+: data

 // This is the implementation for file saving. The file saving includes the student name, the timestamp of when this implementation was created,
// a specific key used, and data that outputs the data was saved when file saving is successful. This implementation ensures that the user who saved the file
// is able to save the file. 

    const std::string student_name1 = "Clara Kellermann-Bryant";
    const std::string time_stamp = "2021-07-27";
    const std::string key3 = "marshmallow secret";
    const std::string data1 = "Saved";
}

int main()
{
  std::cout << "Encyption Decryption Test!" << std::endl;

  // input file format
  // Line 1: <students name>
  // Line 2: <Lorem Ipsum Generator website used> https://pirateipsum.me/ (could be https://www.lipsum.com/ or one of https://www.shopify.com/partners/blog/79940998-15-funny-lorem-ipsum-generators-to-shake-up-your-design-mockups)
  // Lines 3+: <lorem ipsum generated with 3 paragraphs> 
  //  Fire in the hole bowsprit Jack Tar gally holystone sloop grog heave to grapple Sea Legs. Gally hearties case shot crimp spirits pillage galleon chase guns skysail yo-ho-ho. Jury mast coxswain measured fer yer chains man-of-war Privateer yardarm aft handsomely Jolly Roger mutiny.
  //  Hulk coffer doubloon Shiver me timbers long clothes skysail Nelsons folly reef sails Jack Tar Davy Jones' Locker. Splice the main brace ye fathom me bilge water walk the plank bowsprit gun Blimey wench. Parrel Gold Road clap of thunder Shiver me timbers hempen halter yardarm grapple wench bilged on her anchor American Main.
  //  Brigantine coxswain interloper jolly boat heave down cutlass crow's nest wherry dance the hempen jig spirits. Interloper Sea Legs plunder shrouds knave sloop run a shot across the bow Jack Ketch mutiny barkadeer. Heave to gun matey Arr draft jolly boat marooned Cat o'nine tails topsail Blimey.


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

  // get the student name from the data file
  const std::string student_name = get_student_name(source_string);

  // encrypt sourceString with key
  const std::string encrypted_string = encrypt_decrypt(source_string, key);

  // save encrypted_string to file
  save_data_file(encrypted_file_name, student_name, key, encrypted_string);

  // decrypt encryptedString with key
  const std::string decrypted_string = encrypt_decrypt(encrypted_string, key);

  // save decrypted_string to file
  save_data_file(decrypted_file_name, student_name, key, decrypted_string);

  std::cout << "Read File: " << file_name << " - Encrypted To: " << encrypted_file_name << " - Decrypted To: " << decrypted_file_name << std::endl;

  // students submit input file, encrypted file, decrypted file, source code file, and key used
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

