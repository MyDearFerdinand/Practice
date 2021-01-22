#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream input("Alex.txt");
	string line;
	string command;
	cout << "Введите имя пользователя:" << "\n";
	cin >> command;
	if(command == "Лёша"){
	if(input) {
		while (getline(input, line)) {
			cout << line << "\n";
		}
		cout <<  ' ' << "\n";
	} else {
		cout << "error!" << "\n";
	}
	} else
		cout << "Ты не Лёша, это не для тебя." << "\n";

	return 0;
}
