#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

int main()
{
    forward_list<string> Nomes={"Jorge", "Pedro"};
    for(auto el: Nomes)
    {
        cout << el << endl;
    }

return 0;
}