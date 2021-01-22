#include <fstream>
#include <string>
#include <iostream>
using namespace std;



int main() {
	ifstream input("input.txt");
	ofstream output("output.txt");
	string line;
	if(input) {
		while (getline(input, line)) {
					cout << line << "\n";
					output << line << "\n";
				}
	}


	return 0;
}
