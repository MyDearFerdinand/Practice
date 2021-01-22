﻿#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

template <typename K>
K Max(K a, K b) {
    if (b < a) {
        return a;
    }
    return b;
}

template <typename First, typename Second>
ostream& operator << (ostream& out, const pair<First, Second>& p);

template <typename T>
ostream& operator << (ostream& out, const vector<T>& vi);

template <typename Key, typename Value>
ostream& operator << (ostream& out, const map<Key, Value>& m);

template <typename Collection>
string Join(const Collection& c, char d) {
    stringstream ss;
    bool first = true;
    for (const auto& i : c) {
        if (!first) {
            ss << d;
        }
        first = false;
        ss << i;
    }
    return ss.str();
}

template <typename First, typename Second>
ostream& operator << (ostream& out, const pair<First, Second>& p) {
    return out << '(' << p.first << ',' << p.second << ')';
}

template <typename T>
ostream& operator << (ostream& out, const vector<T>& vi) {
    return out << '[' << Join(vi, ',') << ']';
}

template <typename Key, typename Value>
ostream& operator << (ostream& out, const map<Key, Value>& m) {
    return out << '{' << Join(m, ',') << '}';
}



int main() {
    vector<double> vi = { 1.4, 2, 3 };
    cout << vi << endl;
    map<int, double> m = { {1, 2.5}, {3, 4} };
    cout << m << endl;
    vector<vector<int>> v = { {1, 2}, {3, 4} };
    cout << v << endl;
    cout << Max<double>(2, 3.5) << endl;
    return 0;
}