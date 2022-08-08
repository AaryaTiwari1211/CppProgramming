#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector <char> vowels {'a','e','i','o','u'};
    vector <int> test_scores {23,34,45,56};
    vector <double> temps (365,80.3);

    cout<<vowels.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<temps.at(2)<<endl;
    test_scores.push_back(90);
    temps.push_back(80.4);
    cout<<test_scores[4]<<endl;
    cout<<temps[365]<<endl;
    cout<<test_scores.size()<<endl;
    return 0;
}

