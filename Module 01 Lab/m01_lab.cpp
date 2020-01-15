/*
Used as part of M01 lecture lab to random number generation
from CSCI 101 Based on Example 1-3 from Malik textbook
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int num; //this is a var to assign random number
  int guess; //this is a var to hold user guess
  char usr_cmd; //used for storing user escape command

  do {
      srand (time(NULL)); //random start number for rand() init
      num = rand() % 50 + 1;

      cout << "Guess a number from 1 to 50:";
      cin >> guess;
    
    if (guess == num)
    {
      cout << "Your number " << guess << " is equal to " << num;
      
        cout << "Press 'R' to restart the program." << endl;
        cout << "Press 'S' to stop the program." << endl;

        cin >> usr_cmd;
    } else
        {
          cout << "Your number " << guess << " is not equal to "
            << num;
          
          cout << ", the random number is: " << num << endl;

          cout << "Press 'r' to restart the program." << endl;
          cout << "Press any other character key to stop the program." << endl;

        cin >> usr_cmd;
        }
  } while (usr_cmd == 'r' || usr_cmd == 'R'); 
    //This additonal add courtesy of Kayode Ogunmakinwa for asking questions!
  return 0;
}