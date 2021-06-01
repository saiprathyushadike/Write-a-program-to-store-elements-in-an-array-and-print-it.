#include <iostream>
#include<conio.h>
using namespace std;
#define ARRAY_SIZE 10
int main()
{
 int numbers[ARRAY_SIZE], i;
 cout<<"Read Array and Print Array In C++ Example Program\n";

 cout<<"Reading Array with Position : \n";
 for (i = 0; i < ARRAY_SIZE; i++)
 {
 cout<<"Enter the Number : "<< (i+1) <<" : ";
 cin>>numbers[i];
 }
 cout<<"\nPrinting Array: \n";
 for (i = 0; i < ARRAY_SIZE; ++i)
 {
 cout<<numbers[i] << " ";
 }
 return 0;
} 
