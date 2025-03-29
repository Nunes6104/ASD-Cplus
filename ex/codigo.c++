#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    char nome[10];
    int idade;

    system("cls");
    cout << "Idade =";
    cin >> idade;

    cout << "Nome =";
    cin.getline(nome,10);

    cout << endl << "Idade: " << idade << endl;
    cout << "Nome: " << nome;
    return 0;
}