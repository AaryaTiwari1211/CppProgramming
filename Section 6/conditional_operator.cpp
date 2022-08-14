#include <iostream>
using namespace std;
int main(){
    int a,b,result;
    cout<<"Enter two numbers seperated by space: ";
    cin>>a>>b;
    (a>b) ? cout<<a<<" is more than " <<b:cout << b << " is more than " << a;
}