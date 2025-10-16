#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Hello World\n";
    int x ,y;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    int divisor;
    for(int i = 2;i<10;i++){
        if(x%i==0&&y%i==0){
            divisor+=i;
            break;
        }
    }
    cout<<"The commoun divisor of this number is "<<divisor;
    return 0;
}