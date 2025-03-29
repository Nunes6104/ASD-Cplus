#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	int tot;
	int *pnum = nullptr; //nullptr em minisculo
	
    system("cls");
	cout << "Total:";
	cin >> tot;
    //nothrow serve para o código não largar
    pnum = new(nothrow) int[tot];  //criar um espaço de memória dinâmica
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
    //colocar [] para o delete libertar o array da memória dinâmica 
    delete[](pnum); //libertar a memória dinâmica alocada pelo pnum

return 0;
}