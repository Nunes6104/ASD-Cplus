#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
vector<int> myV = {10, 20, 30, 40};
int procura;

for(auto ELEM : myV)
cout << ELEM << " ";

cout << "\nValor a procurar: ";
cin >> procura;

auto IT = find(myV.begin(), myV.end(), procura);
if(IT != myV.end())
cout <<"\nEncontrou no indice: " << (size_t)distance(myV.begin(), IT);
else cout << "\nIndice não encontrado";

return 0;
}