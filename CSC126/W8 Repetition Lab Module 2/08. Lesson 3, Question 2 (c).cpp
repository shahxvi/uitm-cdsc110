#include <iostream>
using namespace std;

int main () {
    
    int i, j;

    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++) {
            cout << "@";
            cout << endl;
        }

        for (j = 0; j < 1; j++)
            cout << "@";
    }


}