#include <iostream>

using namespace std;

int main()
{
    // int total_am {1000};
    // int total_num {17};
    // double avg;
    // double avg2;
    // avg = total_am/total_num;//an integer value is given
    // cout<<avg<<endl;

    // avg2=static_cast<double>(total_am)/total_num;
    // cout<<avg2<<endl;

    int a , b , c, num , sum;
    double int_avg,double_avg;
    num = 3;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    cout<<"Enter third number: "<<endl;
    cin>>c;

    sum = a+b+c;
    int_avg = sum/num;
    cout<<"Integral average is: "<<int_avg<<endl;
    double_avg = static_cast<double>(sum)/num;
    cout<<"Non-Intergal average is: "<<double_avg<<endl;





}