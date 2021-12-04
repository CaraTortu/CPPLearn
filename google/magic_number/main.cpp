#include <iostream>
#include <sstream>
using namespace std;

string reverse_string(int st) {
    string s = to_string(st);
    string rev;

    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }

    return rev;
    
}

int main() {
    int n, rev, de;
    stringstream ss, ssc;

    cout << "Enter a number: "; cin >> n;

    ss << reverse_string(n);
    ss >> rev;

    n -= rev;

    ssc << reverse_string(n);
    ssc >> de;

    de += 792;
    cout << "The magic number is: " << de << endl;

    return 0;
}