#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int factorial=1;
    for(int i=2; i<=num; i++){
        factorial *=i;
    }
    cout<<"The factorial of " <<num<< " is: "<<factorial<<endl;
    return 0;

}