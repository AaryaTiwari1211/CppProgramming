#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*US dollar system
    1 dollar 100 cents
    1 quarter 25 cents
    1 dime 10 cents
    1 penny 1 cent*/
    int cents,dollar,penny,dime,nickel,quarter,change_amount,balance;
    cout<<"Enter the amount of cents you have: ";
    cin>>cents;
    dollar = cents/100;
    balance = cents - (dollar*100);

    quarter = balance/25;
    balance = balance - (quarter*25);

    dime = balance/10;
    balance = balance - (dime*10);

    nickel = balance/5;
    balance = balance - (nickel*5);

    penny = balance;
    
    cout<<"Dollars: "<<dollar<<endl;
    cout<<"Quarters: "<<quarter<<endl;
    cout<<"Dimes: "<<dime<<endl;
    cout<<"Nickels: "<<nickel<<endl;
    cout<<"Pennies: "<<penny<<endl;
    return 0;



}