#include "sort.h"

using namespace std;

class Selection : public Array {
public:
	void printArray();
	void sort(int begin, int end);
};

void Selection::printArray() {
	cout << "Selection Sort\nTrocas = " << trocas << "\nArray:\n";
	for(auto i : this->vet) {
		cout << i << " ";
	}
	cout << "\n\n";
}

void Selection::sort(int begin, int end) {
	for(int i = begin;i < end;i++) {
		int menor = i;
		for(int j = i+1;j < end+1;j++) {
			if(vet[j] < vet[menor]) {
				menor = j;
			}
		}
		trocar(i, menor);
	}
}



