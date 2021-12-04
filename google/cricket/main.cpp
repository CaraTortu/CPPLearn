#include <iostream>
using namespace std;

int main() {
	int chirps = 0;
	float temp = 0;
	cout << "Number of chrips: "; cin >> chirps;
	temp = (chirps + 40) / 4;
	cout << "Temperature: " << temp << " degrees" << endl;
	return 0;
}
