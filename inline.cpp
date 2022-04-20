#include<iostream>
using namespace std;
inline int square(int a,int b)
{
 int c=(a>b)?a:b;
cout<<"The maximum number is "<<c<<endl;
}
int main()
{
  int a,b,c;
cout<<"Enter the values of a and b:"<<endl;
cin>>a>>b;
square(a,b);

}
