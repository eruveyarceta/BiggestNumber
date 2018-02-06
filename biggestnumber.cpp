//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
    int a, b, biggest;

  cout<<"Please enter a whole number:\n";
    cin>> a;  
  cout<<"Please enter another whole number:\n";
    cin>> b;

    if(a>b)
        { biggest=a;
        }
    else{
            biggest=b;
            }
  cout<<"Of those two numbers, the biggest is: "<<biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
