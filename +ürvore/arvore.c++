#include <iostream>
using namespace std;

struct no{
	int val;
	no *esq;
	no*dir;
};

void criarNo(no *&raiz, int val)
{
no *novoNo = new (nothrow) no();
if(novoNo){
novoNo -> val = val;
raiz = novoNo;
}
}

void insNo(no *&raiz, int val)
{
if(!raiz){
criarNo(raiz, val);
}
else if(val < raiz->val){
insNo(raiz -> esq, val);
}
else if(val > raiz->val){
insNo(raiz ->dir, val);
}
}

no *encontraMin(no *raiz){
	while(raiz -> esq)
	{
		raiz = raiz -> esq;
	}
	return raiz;
}
void delNo(no *&raiz, int val)
{
	if(!raiz)return;
	if(val < raiz -> val)
	delNo(raiz -> esq, val);
	else if(val > raiz->val)
	delNo(raiz->dir, val);
	else{
		if(!raiz ->esq && !raiz->dir)
		{
			delete raiz;
			raiz = nullptr;
		}
		else if(!raiz->esq){
			no *pAux = raiz;
			raiz = raiz -> dir;
			delete pAux;
		}
		else if(!raiz -> dir){
			no *pAux = raiz;
			raiz = raiz -> esq;
			delete pAux;
		}
		else{
			no *pAux = encontraMin(raiz ->dir);
			raiz -> val = pAux -> val;
			delNo(raiz -> dir, pAux -> val);
		}
	}
}

int main(){
 no *raiz = nullptr;
//int ar[] = {1,2,3,4};
//int ar[] = {8,6,5,3};
//for(auto el : ar)
//insNo(raiz, el);
insNo(raiz, 8);
insNo(raiz, 5);
insNo(raiz, 1);

return 0;
}
