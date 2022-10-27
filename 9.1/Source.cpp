#include <iostream>
#include <ctime>
using namespace std;

int randomizer();

int main() {
	srand(time(0));
	int numbers[10];

	cout << "The Random integers: ";
	for (int i = 0; i < 10; i++) {
		numbers[i] = randomizer();
		cout << numbers[i] << " ";
	}
	
	cout << endl << "Even indices: ";
	for (int i = 0; i < 10; i = i+2) {
		cout << numbers[i] << " ";
	}
	cout << endl << "Even values: ";
	for (int i = 0; i < 10; i++) {
		if (numbers[i] % 2 == 0) {
			cout << numbers[i] << " ";
		}
	}
	cout << endl << "Reversed values: ";
	for (int i = 9; i >= 0; i--) {
		cout << numbers[i] << " ";
	}
	cout << endl << "First and last: ";
	cout << numbers[0] << " " << numbers[9];
}

int randomizer() {
	int number;
	number = rand() % 8999 + 1000;
	return number;
}