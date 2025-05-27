#include <iostream>
using namespace std;

int main() {
	
    char name[30];
    float mark = 0, total, average;

    for (int students = 0; students < 3; students++) {      //outerLoop for students
    	
        cout << "\nEnter student name: ";
        cin >> ws;
        cin.getline(name, 30);

        total = 0; //Reset total mark for each student

        for (int subject = 1; subject < 5; subject++) { //innerLoop for subjects
        	
            cout << "Enter the mark for subject " << (subject) << ": ";
            cin >> mark;
            total += mark;
        }

        average = total / 4.0;

        cout << "\nThe average mark for " << name << " is " << average << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}
