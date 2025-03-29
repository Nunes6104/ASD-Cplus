#include <iostream>
#include <locale.h>

using namespace std;

void somaum(int v)
{
    v++;
}
void outroSomaUm(int &v)
{
    v++;
}

void maisSomaum(int *v)
{
    (*v)++;
}

int main(){
	int n1;
	
    n1 = 4;
	
    system("cls");
    //passagem por valor, copia
	somaum(n1);
    cout << endl << n1; //4
    //passagem por referência, altera o valor apontado
    outroSomaUm(n1);
    cout << endl << n1; //5
    //passagem por pointer, altera porque trabalha na memória
    maisSomaum(&n1);
    cout << endl << n1; //6

return 0;
}