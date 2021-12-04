#include <iostream>
using namespace std;

int solve(int seconds) {
	int hours, minutes, days;
	days = seconds / 3600 / 24;
	seconds -= days * 3600 * 24;
	hours = seconds / 3600;
	seconds -= hours * 3600;
	minutes = seconds / 60;
	seconds -= minutes * 60;
	cout << "D: " << days << " | H: " << hours << " | M: " << minutes << " | S: " << seconds << endl;
	return 0;
}

int main() {
	int total_seconds;
	cout << "Number of seconds: " ; cin >> total_seconds;
	return solve(total_seconds);
}
