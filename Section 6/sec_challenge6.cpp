#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    char choice;
    bool lup{};
    vector<int> vec {1,2,3,4,5};
    do
    {
        cout<<"P-Print numbers"<<endl;
        cout<<"A-Add a number"<<endl;
        cout<<"M-Display Mean of the numbers"<<endl;
        cout<<"S-Display Smallest Number"<<endl;
        cout<<"L-Display Largest Number"<<endl;
        cout<<"Q-Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice=='P' || choice=='p'){
            cout<<"[ ";
            if (vec.size() != 0){
            for(int i1 : vec){
                cout<<i1;
                cout<<" ";
            }
            cout<<"]"<<endl;
            }else
                {
                    cout<<"list is empty";
                }
            
        }
        else if (choice=='A' || choice=='a')
        {
            int add;
            cout<<"Which number would you like to add to the list: ";
            cin>>add;
            vec.push_back(add);
            cout<<add<<" added to the vector"<<endl;;
            
        }
        else if(choice=='M'||choice=='m')
        {
            if (vec.size() != 0){
                int sum{0};
                double mean;
                for (int i2 : vec)
                {
                    sum+=i2;
                }
                mean = static_cast<double>(sum)/ vec.size();
                cout<<"Mean of the numbers is: "<<mean<<endl;
                

            }
            else{
                cout<<"Unable to calculate mean- no data"<<endl;
            }
            
            
        }
        else if (choice=='S'||choice=='s')
        {
            if (vec.size() != 0)
            {
                int min = *min_element(vec.begin(),vec.end());
                cout<<"Smallest number is: "<<min<<endl;
                
            }
            else
            {
                cout<<"Unable to find smallest element - List is empty"<<endl;
            }
            
            
        }
        else if(choice=='L' || choice=='l')
        {
            if (vec.size() != 0)
            {
                int max = *max_element(vec.begin(),vec.end());
                cout<<"The Largest number in the list is: "<<max<<endl;
                

            }
            else
            {
                cout<<"Unable to find largest element - List is empty"<<endl;
            }
        }
        else if (choice=='Q' || choice=='q')
        {
            cout<<"Quit"<<endl;
            lup=false;
            
        }
        
        else
        {
            cout<<"Invalid input- Please try again"<<endl;
            
        }
    

    

    }
    while (lup=true);
    return 0;
}

