#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream input("Alex.txt");
	string line;
	string command;
	cout << "������� ��� ������������:" << "\n";
	cin >> command;
	if(command == "˸��"){
	if(input) {
		while (getline(input, line)) {
			cout << line << "\n";
		}
		cout <<  ' ' << "\n";
	} else {
		cout << "error!" << "\n";
	}
	} else
		cout << "�� �� ˸��, ��� �� ��� ����." << "\n";

	return 0;
}
