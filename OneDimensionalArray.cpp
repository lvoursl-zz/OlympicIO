#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]) {
	
	ifstream input;
	ofstream output;
	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);
	
	int number;
	input >> number;
	
	int arr[number];

	if (input) {		
		while (!input.eof()) {
			for (int i = 0; i < number; i++) {
					input >> arr[i];
			}	
		}
	}

	for (int i = 0; i < number; i++) {
		output << arr[i];
	}


	input.close();
	output.close();

	return 0;
}