#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

bool down(int x, int y)
{
    return x > y;
}

bool ordpar(int x, int y)
{
    return x % 2;
}
int main()
{
system("cls");
vector<int> myV = {40, 20, 30, 10};
cout << "Vetor Inicial: ";
for(auto ELEM : myV)
cout << ELEM << " ";

sort(myV.begin(), myV.end());
cout << "\n\nVetor ordenado crescente: ";
for(auto ELEM : myV)
cout << ELEM << " ";


sort(myV.begin(), myV.end(), down);
cout << "\n\nVetor ordenado descrescente: ";
for(auto ELEM : myV)
cout << ELEM << " ";


vector<int> myV2 = {4, 2, 3, 1};
cout << "\nVetor2 Inicial: ";
for(auto ELEM : myV2)
cout << ELEM << " ";

sort(myV2.begin(), myV2.end(), ordpar);
cout << "\n\nVetor ordenado impar/par: ";
for(auto ELEM : myV2)
cout << ELEM << " ";

return 0;
}