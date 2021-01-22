#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	ifstream input("input.txt");

	double a;

	cout << fixed << setprecision(3);

	while (input >> a) {
		cout << a << "\n";
	}

	return 0;
}
