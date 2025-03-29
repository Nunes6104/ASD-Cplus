#include <iostream>
#include <locale.h>
#include <string.h>
#include <array>
#include <vector>
using namespace std;

/*int main()
{
    int num[5] = {10, 20, 30};

    for (auto EL : num) cout << EL << endl;
    //int dim = sizeof(num) / sizeof(num[0]); //fazem a mesma instrução, mas size_t mais preciso
    size_t dim = sizeof(num) / sizeof(num[0]);

    string nom[] = {"Ana", "Igor"};
    for (auto EL : nom) cout << EL << endl;

}*/

/*int main()
{
    int AA[5] = {0}; //colocar o array todo em 0

    //objeto array de dimensão fixa
    #include <array>
    array <int, 5> num = {10, 20, 30};

    num.fill(8); //coloca todos os elementos a 8


    //objeto vector dimensão variável
    #include <vector>
    vector <int> num = {10, 20, 30};

}*/

void somaum(int arr[], int dim) //dois parâmetros que recebem dois argumentos
{
    for(int i = 0; i < dim; i++)
    {
        arr[i]++;
    }
}

void outrasoma(int *arr, int dim)
{
    for(int i = 0; i < dim; i++)
    {
        arr[i]++;
    }
}

template < typename T, size_t n >
    void listar (T (&arr)[n])
    {
    for(auto EL : arr) cout << EL << endl;
    }

int main()
{
    int ar[] = {5, 6, 7};
    somaum(ar, 3);//argumentos

    for(auto EL : ar) cout << EL << endl; //6 7 8

    outrasoma(ar, 3);
    for(auto EL : ar) cout << EL << endl; // 7 8 9

    listar(ar);

return 0;
}