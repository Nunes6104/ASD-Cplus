#include <iostream>
using namespace std;

int somatorio(int n)
{
    if(n == 0) return 0;
    else return n + somatorio(n-1);
}
int fatorial(int n)
{
    if(n < 1) return 1;
    else return n * fatorial(n-1);
}
void produto(int n1, int n2, int &r)
{
    if(n2 == 0) return;
    else 
    {
        produto(n1, --n2, r);
        r += n1;
    }
}

int main()
{
    int x, v1, v2, result = 0;
    cout << "x=";
    cin >> x;
    cout << "\nsomatório:" << somatorio(x);
    cout << "\nFatorial:" << fatorial(x);

    cout << "\nV1= "; cin >> v1;
    cout << "V2= "; cin >> v2;
    produto(v1, v2, result);
    cout << "O produto é: " << result;
    return 0; 
}