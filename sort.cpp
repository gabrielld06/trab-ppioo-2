#include <iostream>
#include <stdlib.h>
#include <random>
#include <climits>
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
	void generateRandomVector();
	void generateAscendingVector();
	void generateDescendingVector();
	virtual void printArray();
	virtual void sort(int begin, int end);
};

void Array::generateRandomVector() {
	random_device dev;
    mt19937 rand(dev());
    uniform_int_distribution<mt19937::result_type> dist(MIN, MAX);
	
	for(int i = 0;i < SIZE;i++) {
		vet[i] = dist(rand);
	}
}

void Array::generateAscendingVector() {
	for(int i = 0;i < SIZE;i++) {
		vet[i] = i;
	}
}

void Array::generateDescendingVector() {
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

void Array::sort(int low, int high) {
	
}

#endif