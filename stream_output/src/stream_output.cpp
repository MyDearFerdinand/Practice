#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
	ifstream input("date.txt");
	int year = 0;
	int month = 0;
	int day = 0;
	if(input) {
		input >> year;
		input.ignore(1);
		input >> month;
		input.ignore(1);
		input >> day;
		input.ignore(1);
	}
	cout << year << ' ' << month << ' ' << day;
	return 0;
}
