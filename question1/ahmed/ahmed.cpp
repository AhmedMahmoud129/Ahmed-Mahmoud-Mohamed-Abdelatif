
#include <iostream>
using namespace std;
int main() {
	int Number;
	cout << "Enter Number Of Students" << endl; cin >> Number;
	cout << "Enter GPA Of Students" << endl; 
	float maxi = 0, mini = 4;
	float GPA, sum = 0;
	
	int i;
	for (i = 1; i <= Number; i++) {
	    cin >> GPA;
		sum = sum + GPA;
		if (GPA > 4) {
			cout << "Error Please Enter The Correct GPA" << endl;
		}
		else {
			if (GPA > maxi)
				maxi = GPA;
			if (GPA < mini)
				mini = GPA;
		}
	}
	float Average = sum / Number;
		cout << "(1)--> Average = " << Average << endl;
		cout << "(2)--> The Maximum GPA =" << maxi << endl;
		cout << "(3)--> The Minimum GPA =" << mini << endl;
}





