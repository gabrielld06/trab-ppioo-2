#include "sort.cpp"

using namespace std;

class Quick : public Array {
public:
	void printArray();
	void sort(int low, int high);
	int partition(int low, int high);
};

void Quick::printArray() {
	cout << "Quick Sort\nTrocas = " << trocas << "\nArray:\n";
	for(auto i : this->vet) {
		cout << i << " ";
	}
	cout << "\n\n";
}

int Quick::partition (int begin, int end) {
    int pivo = vet[end];
    int i = (begin - 1);
    for (int j = begin; j < end; j++) { 
        if (vet[j] < pivo) { 
            i++;
			if(i != j) {
				vet[i]^=vet[j];
				vet[j]^=vet[i];
				vet[i]^=vet[j];
				trocas++;
				printArray();
			}
        }
    }
	if((i + 1) != end) {
		vet[i+1]^=vet[end];
		vet[end]^=vet[i+1];
		vet[i+1]^=vet[end];
		trocas++;
		printArray();
	}
    return (i + 1); 
} 

void Quick::sort(int begin, int end) { 
    if (begin < end) {
        int p = partition(begin, end); 
        sort(begin, p - 1); 
        sort(p + 1, end); 
    } 
} 