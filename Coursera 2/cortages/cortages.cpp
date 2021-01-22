#include <iostream>
#include <vector>
#include <tuple>
#include <utility>

using namespace std;

int main() {
	tuple<int, string, bool> t(7, "C++", true);
	auto b = make_tuple(6, "phyton", false);
	pair <int, string> p(2, "Java");
	auto g = make_pair(3, "SQL");
	cout << get<1>(t) << " " << get<0>(b) << endl;
	cout << p.first << " " << p.second;
	return 0;
}