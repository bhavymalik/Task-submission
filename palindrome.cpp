#include <iostream>
#include<math>
using namespace std;



int main()
{
  cout<<"enter the number to check for palindrome : ";
  int n;
  cin>>n;

  int x=n;
  int sum=0,count=0;
  while(x)
  {
    count++;
    x/=10;
  }

  x=n;

  while(x)
  {
    sum+= pow(x%10,count);
    x/=10;
  }

  if(sum==n)
  cout<<"\nthe number you entered is a palindrome";

  else
    cout<<"\nthe number you entered is not a palindrome";

    return 0;
}
