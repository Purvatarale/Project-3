#include<iostream>
using namespace std;
int main()
{
   int numbers[5];
   cout << "Enter your elements: ";

   for(int i = 0; i < 5; ++i)
      cin >>numbers[i];

   cout << "Your values are: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(numbers + i);

   return 0;
}
