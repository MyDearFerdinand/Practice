#include <map>
#include <set>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int Sum(int x, int y) {	
	if (x < 0) {
	}
	return x + y; }

void TestSum() {
	assert(Sum(2, 3) == 5);
	assert(Sum(-2, -3) == -5);
	assert(Sum(-2, 0) == -2);
	assert(Sum(-2, 3) == 1);
	cout << "TestSum OK" << endl;
}

template <class T, class U> 
void AssertEqual(const T& t, const U& u) {
	if (t != u) {
		ostringstream os;
		os << "Assertation failed" << t << "!=" << u;
		throw runtime_error();
	}
}

int main() {
	TestSum();
	return 0;
}