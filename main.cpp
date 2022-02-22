#include <iostream>
#include <iostream>
#include "sort.h"
#include "bubble.h"
#include "quick.h"                

using namespace std;

int main() {
	int op, alg;
	Array *arr;
	
	cout << "======================\n";
	cout << "1 - Aleatorio\n";
	cout << "2 - Ordem Crescente\n";
	cout << "3 - Ordem Decrescente\n";
	cout << "======================\n";
	cin >> op;
	
	if(op > 3 or op < 1) {
		cout << "Opcao invalida\n";
		exit(EXIT_FAILURE);
	}
	
	cout << "======================\n";
	cout << "1 - Bubble Sort\n";
	cout << "2 - Quick Sort\n";
	cout << "======================\n";
	cin >> alg;
	
	// Realização do polimorfismo
	if(alg == 1) {
		arr = new Bubble;
	} else if(alg == 2) {
		arr = new Quick;
	} else {
		cout << "Opcao invalida\n";
		exit(EXIT_FAILURE);
	}
	
	// Preenchimento do vetor
	switch(op) {
		case 1:
			arr->gerarVetorAleatorio();
		break;
		case 2:
			arr->gerarVetorCrescente();
		break;
		case 3:
			arr->gerarVetorDecrescente();
		break;
	}
	
	// Execução do sort
	arr->printArray();
	arr->sort(0, SIZE-1);
	
	return 0;
}