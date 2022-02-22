#include "sort.h"

using namespace std;

class Bubble : public Array {
public:
	void printArray();
	void sort(int begin, int end);
};

void Bubble::printArray() {
	cout << "Bubble Sort\nTrocas = " << trocas << "\nArray:\n";
	for(auto i : this->vet) {
		cout << i << " ";
	}
	cout << "\n\n";
}

void Bubble::sort(int begin, int end) {
	for(int i = begin;i < end;i++) {
		for(int j = begin;j < end-i;j++) {
			if(vet[j] > vet[j+1]) {
				trocar(j, j+1);
			}
		}
	}
}