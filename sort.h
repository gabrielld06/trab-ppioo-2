#include <iostream>
#include <stdlib.h>
#include <random>
#ifndef SORT
#define SORT

#define SIZE 16
#define MIN -64
#define MAX 64

using namespace std;

class Array {
public:
	int vet[SIZE];
	int trocas;
	void gerarVetorAleatorio();
	void gerarVetorCrescente();
	void gerarVetorDecrescente();
	void trocar(int i, int j);
	virtual void printArray();
	virtual void sort(int begin, int end);
};

void Array::gerarVetorAleatorio() {
	random_device dev;
    mt19937 rand(dev());
    uniform_int_distribution<mt19937::result_type> dist(MIN, MAX);
	
	for(int i = 0;i < SIZE;i++) {
		vet[i] = dist(rand);
	}
}

void Array::gerarVetorCrescente() {
	for(int i = 0;i < SIZE;i++) {
		vet[i] = i;
	}
}

void Array::gerarVetorDecrescente() {
	for(int i = 0;i < SIZE;i++) {
		vet[i] = SIZE-i-1;
	}
}

void Array::printArray() {
	cout << "Array: ";
	for(auto i : this->vet) {
		cout << i << " ";
	}
	cout << endl;
}

void Array::trocar(int i, int j) {
	if(i != j) {
		int aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
		trocas++;
		printArray();
	}
}

void Array::sort(int begin, int end) {
	
}

#endif