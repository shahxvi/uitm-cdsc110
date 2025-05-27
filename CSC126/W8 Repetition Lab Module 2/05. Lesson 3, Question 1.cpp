#include <iostream>
using namespace std;

int main() {
	
    char name[30];
    int students;
    float mark, total, average;

    for (students = 0; students < 3; students++) {
    	
        cout << "\nEnter student name: ";
        cin >> ws;
        cin.getline(name, 30);

        total = 0; //Reset total for each student

        for (int subject = 1; subject < 5; subject++) {
        	
            cout << "Enter the mark for subject " << (subject) << ": ";
            cin >> mark;
            total += mark;
        }

        average = total / 4;

        cout << "The average mark for " << name << " is " << average << endl;
    }

    return 0;
}
