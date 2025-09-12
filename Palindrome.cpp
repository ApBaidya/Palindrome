
/*
Aparajita Baidya
9.11.2025
Palindrome
Get input (max 80 char)
rm spaces and punctuation
reverse it
check if palindrome
if yes print "Palindrome"
If no print "Not a palindrome"
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  //input
  char original[10];
  cout << "enter an input of at max 80 characters"<<endl;
  cin.get(original, 10);
  cin.get(); //kill
  cout << "so, your input is:" << endl;
  cout << original << endl;
  
  //rm spaces and punctuation
  char adjusted[10];
  int count = 0 ;
  cout<< strlen(original)<<endl;
  
  for (int i = 0; i < strlen(original); i++) //set up i, while condition, then increase i each loop
  {
    //if char is an Capital alphabet (between A and Z) oooor lowercase alpha (between a and z)
    //given that numbs occur before alpha in ascii, this should account for them
    if (original[i] != '\0')
    {
      if ((original[i] >= 'A' && original[i] <= 'Z') || (original[i] >= 'a' && original[i]<='z'))
      {
	//add to adjusted
	adjusted[count] = original[i];
	count ++;
      }
    }
  }
  //main resturns 0 for some reason for certain inputs like p!!!deo
  cout << "Adjusted:" << adjusted << endl;
  //reverse
  char reversed[81];
  //iterate backwards!!!
  /*
  for (int i = strlen(adjusted)-1; i>0; i--)
  {
    if (adjusted[i] != '\0')
    {
      cout << adjusted[i];
      reversed[i] = adjusted[i];
    }
  }
  cout << "reversed:" << reversed;
  //print result
  /*for (int i = 0, condition, i++)
    compare array stuff
    cout << "Palindrome"
    if not palindrome
    cout << "Not a palindrome"
   */
  return 0;
}
