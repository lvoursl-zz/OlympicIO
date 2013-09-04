#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]) {
	
	ifstream input;
	ofstream output;
	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);
	
	int vertical, horizontal;
	input >> vertical;
	input >> horizontal;
	
	int arr[vertical][horizontal];

	if (input) {		
		while (!input.eof()) {
			for (int i = 0; i < vertical; ++i) {
				for (int j = 0; j < horizontal; ++j) {
					input >> arr[i][j];
					//cout << arr[i][j] << endl;
				}
			}	
		}
	}

	for (int i = 0; i < vertical; ++i) {
		for (int j = 0; j < horizontal; ++j) {
			output << arr[i][j];
		}
		output << endl;
	}

	input.close();
	output.close();

	return 0;
}