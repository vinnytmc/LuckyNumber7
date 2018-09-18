//Author:
#include <iostream>

using namespace std;

int main()
{
  int guess;
  cout<<"Guess a number between 1-10: ";
  cin>>guess;
    if (guess == 7)
      {
cout<<"YES! Lucky number 7!\n";
      }
    else if (guess == 6 ||  guess == 8)
      {
cout<<"Oh, so close!\n";
      }
    else 
      {
cout<<"Waaay off, sorry.\n";
      }
  return 0;
}
