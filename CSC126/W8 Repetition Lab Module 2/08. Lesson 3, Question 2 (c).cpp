#include <iostream>
using namespace std;

int main () {
    
    int i, j;
    char at = '@';

    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++) {
            cout << at;
            cout << endl;
        }

        for (j = 0; j < 1; j++)
            cout << at;
    }


}