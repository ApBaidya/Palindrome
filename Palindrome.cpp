/*
Aparajita Baidya
9.24.2025
Palindrome
Get input (max 80 char)
rm spaces and punctuation
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
  char original[81];
  cout << "enter an input of at max 80 characters"<<endl;
  cin.get(original, 80); 
  cin.get(); //kill haha
  cout << "so, your input is:" << endl;
  cout << original << endl; //let them know what they typed
  
  //rm spaces and punctuation
  char adjusted[81];
  int count = 0;
  //cout<< strlen(original)<<endl;
  
  for (int i = 0; i < strlen(original); i++) //set up i, while condition, then increase i each loop
  {
    //if char is an Capital alphabet (between A and Z) oooor lowercase alpha (between a and z)
    //given that numbs occur before alpha in ascii, this should account for them
    if (original[i] != '\0')
    {
      if ((original[i] >= 'A' && original[i] <= 'Z') || (original[i] >= 'a' && original[i]<='z'))
      {
	//add to adjusted
	adjusted[count] = tolower(original[i]); //just to make sure lower and capital doesn't matter
	count ++; //c(ount)++
      }
    }
  }
  cout << "Adjusted:" << adjusted << endl;

  //two cases, strlen is odd or strlen is even
  int chars = strlen(adjusted);
  int rmder = chars % 2;
  int indexleft = 0;
  int palindrome = 0; //0 for yes, 1 for no
  cout << "len odd or even (1 = odd, 0 = even):" << rmder << endl;
  //cout << adjusted[chars-1];
  for (int i = 0; indexleft <= ((chars-rmder)/2); i++)
  {
    if (adjusted[i] != adjusted[chars-1-i]) 
    {
      palindrome = 1;
    }
    indexleft ++;
  }
  if (palindrome == 1)
  {
    cout << "Not a palindrome";
  }
  else if (palindrome == 0)
  {
    cout << "Palindrome";
  }
  return 0;
}

