#include <iostream>
using namespace std;

int main() {
	float assignments[4] = { };
	float midterm, final_mark, final_exam, participation, final_assignments;
	string nums[4] = {"first", "second", "third", "fourth"};

	for(int i = 0; i < 4; i++) {
		cout << "Enter the score for the " << nums[i] << " assignment: " ; cin >> assignments[i];
		final_assignments += assignments[i];
	}


	cout << "Enter the score for the midterm: "; cin >> midterm;
	cout << "Enter the score for the final: " ; cin >> final_exam;
	cout << "Enter the score for participation: " ; cin >> participation;  

	final_assignments = ((final_assignments / 4) / 100) * 40;
	midterm = (midterm / 100) * 15;
	final_exam = (final_exam / 100) * 35;
	participation = participation / 10;
	
	final_mark = final_assignments + midterm + final_exam + participation; 

	cout << final_mark << endl;

	return 0;

}
