#include <iostream>
using namespace std;

int main()
{
    int rooms,per_room,tax,days,cost,display_cost;
    per_room = 30;
    days = 30;
    cout<<"Price per room is "<<per_room<<" dollars"<<endl;
    cout<<"Enter the number of rooms you would like to be cleaned: "<<endl;
    cin>>rooms;
    
    
    display_cost = rooms*per_room;
    tax = 0.06*display_cost;
    cost = display_cost + tax;
    cout<<"Cost without tax is "<<display_cost<<"$"<<endl;
    cout<<"Tax validated is "<<tax<<"$"<<endl;
    cout<<"The total bill comes out to be: "<<cost<<"$"<<endl;
    cout<<"Valid for "<<days<<" days";
    return 0;

    
}