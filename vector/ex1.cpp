#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vector;

    int add;
    for(int i = 0; i < 5; i++) 
    {
        cout << "\nInsira o valor: ";
        cin >> add;
        vector.push_back(add);
    }

    for(auto SHOW : vector)
    cout << SHOW << " ";
return 0;
}