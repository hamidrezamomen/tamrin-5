#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int charCount = 0, wordCount = 0;
  char ch;

  cout << "\nEnter a statement(and press ENTER):";
  while((ch = getche()) != '\r'){
    charCount ++;
    if(ch == ' ')
	wordCount ++;
  }//end of while
  cout << "\nChar count=" << charCount << " , Word count=" << wordCount + 1;
  getch();
  return 0;
}