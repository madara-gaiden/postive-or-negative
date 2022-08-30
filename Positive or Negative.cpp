#include <iostream>
#include<math.h>
using namespace  std;

int main ()
{
    double number;
    cout<<"Enter a number :";
    cin>>number;
    if(number > 0){
        cout<<"The "<<number<<" is greater than 0 'Positive'";
        }
    else if(number < 0){
        cout<<"The "<<number<<" is less than 0 'Negative'";
        }
    else{
        cout<<"The "<<number<<" is equal 0 'Neutral'";
    }
}