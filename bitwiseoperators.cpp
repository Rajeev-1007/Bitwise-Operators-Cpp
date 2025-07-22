#include<iostream>
using namespace std;
int main()
{
int a;
int b;
cout<<"Enter number a: ";
cin>>a;
cout<<"Enter number b: ";
cin>>b;
int bitwise_and=a&b;
int bitwise_or=a|b;
int bitwise_not=~a;
int bitwise_xor=a^b;
int bitwise_rightshift=a>>1;
int bitwise_leftshift=a<<1;

cout<<"AND: " <<bitwise_and<<endl;
cout<<"OR: " <<bitwise_or<<endl;
cout<<"NOT: " <<bitwise_not<<endl;
cout<<"XOR: " <<bitwise_xor<<endl;
cout<<"Right Shift: " <<bitwise_rightshift<<endl;
cout<<"Left Shift: " <<bitwise_leftshift<<endl;
}