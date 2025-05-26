#include <iostream>
using namespace std;

int main () {
 
    char name[30];
    int students;
    float mark;

    for (students = 0; students < 3; students++) {
    
    	int subjects = 0, studentCount = 0, subjectCount = 0;
    	
    	cout << endl;
    	
        cout << "Enter Student Name: ";
        cin.ignore();
		cin.getline(name, 30);

        for (subjects = 0; subjects < 4; subjects++) {
            
            while (subjectCount < 4) {
            
                cout << "\nEnter the mark for subject " << subjectCount << ": ";
                cin >> mark;

				subjectCount++;
            }
            mark = mark / subjectCount;
        }
        
        cout << "\nThe average mark for " << name << " is " << mark;
    }
}
