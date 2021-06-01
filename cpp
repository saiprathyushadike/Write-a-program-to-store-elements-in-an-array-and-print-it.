#include <iostream>
using namespace std;
#define SIZE 10
int main()
{
 int numbers[SIZE], i;
 cout<<"Reading Array with Position : \n";
 for (i = 0; i <SIZE; i++)
 {
 cout<<"Enter the Number : "<< (i+1) <<" : ";
 cin>>numbers[i];
 }
 cout<<"\nPrinting Array: \n";
 for (i = 0; i <SIZE; ++i)
 {
 cout<<numbers[i] << " ";
 }
 return 0;
} 
