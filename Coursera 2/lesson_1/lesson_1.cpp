#include <iostream>
#include <vector>

using namespace std;



void CountAvg(vector<int> avg) {
	int sum = 0;
	for (auto i : avg) {
		sum += i;
	}
	vector<int> cavg;
	int avgcounted = sum / static_cast<int>(avg.size());
	for (auto i : avg) {
		if (i > avgcounted) {
			cavg.push_back(i);
		}
	}
	cout << cavg.size() << endl;;
	for (auto i : cavg) {
		cout << i;
	}
	
}

int main() {
	int n;
	int t;
	vector<int> temperatures;
	cin >> n;
	while (n) {
		cin >> t;
		temperatures.push_back(t);
		n--;
	}
	CountAvg(temperatures);
	return 0;
}