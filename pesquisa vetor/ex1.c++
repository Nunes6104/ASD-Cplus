#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

bool ordpar(int x, int y)
{
    return x % 2;
}
bool firsteven(int x)
{
    return !(x % 2);
}

int main()
{
system("cls");
vector<int> myV = {4, 2, 3, 1, 5, 6, 7};
cout << "\nVetor Inicial: ";
for(auto ELEM : myV)
cout << ELEM << " ";

sort(myV.begin(), myV.end(), ordpar);
auto IT = find_if(myV.begin(), myV.end(), firsteven);
sort(myV.begin(), IT);
sort(IT, myV.end());
cout << "\n\nVetor ordenado impar/par: ";
for(auto ELEM : myV)
cout << ELEM << " ";

return 0;
}