#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	int tot;
	int *pnum = NULL;
	
    system("cls");
	cout << "Total:";
	cin >> tot;
    
    pnum = (int *) malloc( tot * sizeof(int)); //criar um espaço de memória dinâmica
    //teste
    if(!pnum) return 8; //return 8 por ser memória insuficiente

    for(int i = 0; i < tot ; i++)
    {
        cout << "\nElemento: ";
        cin >> pnum[i]; //não precisa do * porque por definição o pointer irá apontar para o valor da memória
    }

    for(int j = 0; j < tot; j++)
    {
        cout << "\nValor: " << pnum[j];
    }
    free(pnum); //libertar a memória dinâmica alocada pelo pnum

return 0;
}