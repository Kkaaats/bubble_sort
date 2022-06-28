// Bubbles.cpp  
#include <iostream>
using namespace std;

class BubbleSort {
public:
	void SortArr();
};

void BubbleSort::SortArr() {
	int n;
	cout << "Enter the dimension of the array" << endl;
	cin >> n;
	cout << "\n";
	if (n <= 0) {
		cout << "Size must be positive integer";
	}
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand();
		cout << arr[i] << "\t";
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	cout << "\n\n Result of sorting the array: \n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	delete[] arr;
}


int main()
{
	BubbleSort Numbers;
	Numbers.SortArr();
	return 0;
}



