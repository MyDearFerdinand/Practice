#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

void AddSynonyms(map<string, set<string>>& synonyms,
	const string& first_word, const string& second_word) {
	synonyms[first_word].insert(second_word);
	synonyms[second_word].insert(first_word);
 }

size_t GetSynonymsCount(map<string, set<string>>& synonyms,
	const string& first_word) {
	return synonyms[first_word].size();
}

bool GetSynonymsCheck(map<string, set<string>>& synonyms,
	const string& first_word, const string& second_word) {
	if (synonyms[first_word].count(second_word) == 1) {
		return true;
	}
	return false;
}

int main() {
	int q;
	cin >> q;

	map<string, set<string>> synonyms;

	for (int i = 0; i < q; ++i) {
		string operation_code;
		cin >> operation_code;

		if (operation_code == "ADD") {
			string first_word, second_word;
			cin >> first_word >> second_word;
			AddSynonyms(synonyms, first_word, second_word);
		}
		else if (operation_code == "COUNT") {
			string word;
			cin >> word;
			cout << GetSynonymsCount(synonyms, word) << endl;
		}
		else if (operation_code == "CHECK") {
			string first_word, second_word;
			cin >> first_word >> second_word;
			if (GetSynonymsCheck(synonyms, first_word, second_word) == true) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}