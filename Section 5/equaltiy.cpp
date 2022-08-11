#include <iostream>
using namespace std;
int main()
{
    bool equal , not_equal;
    int a,b;
    cout<<boolalpha;
    cout<<"enter two integers with space: ";
    cin>>a>>b;
    equal = (a==b);
    not_equal = (a!=b);
    cout<<"Are the numbers equal?: "<<equal<<endl;
    cout<<"Are the numbers not equal?: "<<not_equal<<endl;
    return 0;
    
}