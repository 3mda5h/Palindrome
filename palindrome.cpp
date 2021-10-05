//Palindrome - tells user if their input is the same backwards as forwards
//Emily MacPherson, 10/5/21

#include <iostream>
#include <cstring>
#include <cctype>
#include <ctype.h>

using namespace std;

int main()
{
  char input[81];
  char lettersonly[81];
  char backwards[81];

  cout << "enter a word or a sentence" << endl;
  cin.get(input, 82); 
  cin.get();
  int count = 0;

  for (int i = 0; i < strlen(input); i++)
    {
      if(isalpha(input[i])) //if letter
        {
          lettersonly[count] = tolower(input[i]); //makes lowercase
          count++;
        }
    }
  lettersonly[count] = '\0';
  
  //puts in letters backwards
  count = 0;
  for (int i = (strlen(lettersonly) - 1); i >  -1; i--)
    {
     	backwards[count] = lettersonly[i];
	    count++;
    }
  backwards[count] = '\0';

  if(strcmp(lettersonly, backwards) == 0) 
  
  //if strings are equal
    {
      cout << "is a palindrome" << endl;
    }
  else
    {
      cout << "is not a palindrome" << endl;
    }  
}
