#include <iostream>
using namespace std;

int main() {
	
    char name[30];
    int students;
    float mark, total, average;

    for (students = 0; students < 3; students++) {
    	
        cout << "\nEnter Student Name: ";
        cin >> ws;
        cin.getline(name, 30);

        total = 0; //Reset total for each student

        for (int subject = 0; subject < 4; subject++) {
        	
            cout << "Enter the mark for subject " << (subject + 1) << ": ";
            cin >> mark;
            total += mark;
        }

        average = total / 4;

        cout << "The average mark for " << name << " is " << average << endl;
    }

    return 0;
}
