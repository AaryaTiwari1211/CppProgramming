#include <iostream>

using namespace std;

int main()
{
    int test_score [3] {20,34,45};
    double temperature [3] {27.5,34.5,56.7};
    cout<<"First test score is: "<<test_score[0]<<endl;
    cout<<"Second test score is: "<<test_score[1]<<endl;
    cout<<"temperature at Sewedn is: "<<temperature[0]<<endl;
    test_score[2] = 50;
    cout<<"Third test score was changed to: "<<test_score[2]<<endl;

    return 0;
}
