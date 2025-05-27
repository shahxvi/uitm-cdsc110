#include <iostream>
using namespace std;

int main() {

    int i = 1, score = 0, score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0;
    int validScore = 0, invalidScore = 0;
    int correspondent = 0, correspondentsValid = 0, correspondentsInvalid = 0;

    cout << "\nHigh Marks Confidence Survey" << endl;
    cout << "\nPlease enter your score for each question." << endl;

    while (i == 1) {
        cout << "From 1 (least likely) to 5 (most likely) of getting a high marks fo any programming subject: ";
        cin >> score;

        switch (score) {
            case 1:
                score1++;
                break;
            case 2:
                score2++;
                break;
            case 3:
                score3++;
                break;
            case 4:
                score4++;
                break;
            case 5:
                score5++;
                break;
            default:
                cout << "\nInvalid score. Please enter a score between 0 and 5." << endl;
                i = 1;
                invalidScore++;
        }


        if (score >= 1 || score <= 5) {
            validScore++;
            correspondentsValid++;
        }

        else {
            invalidScore++;
            correspondentsInvalid++;
        }
    }
            
        cout << "Continue for another correspondent? (1 for Yes, 0 for No): ";
        cin >> i;
}