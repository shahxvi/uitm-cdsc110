#include <iostream>
using namespace std;

int main() {

    //Initialize variables
    float purchaseAmount, points, additionalPoints, totalPoints;
    char productRating, preferredPurchases;

    //Input
    cout << "\nEnter the amount of purchases: RM";
    cin >> purchaseAmount;
    cout << "Have you successfully rated a product? (Y/N): ";
    cin >> productRating;
    cout << "Is the purchases made from preferred sellers? (Y/N): ";
    cin >> preferredPurchases;

    //Process
    if (purchaseAmount > 0 && purchaseAmount < 500)
        points = 100;
    else if (purchaseAmount >= 500 && purchaseAmount < 1000)
        points = 300;
    else if (purchaseAmount >= 1000)
        points = 500;
    else 
        points = 0;

    if (productRating == 'Y' || productRating == 'y')
        if (preferredPurchases == 'Y' || preferredPurchases == 'y')
            additionalPoints = 100;
        else
            additionalPoints = 50;
    else
        if (preferredPurchases == 'Y' || preferredPurchases == 'y')
            additionalPoints = 50;
        else
            additionalPoints = 0;

    totalPoints = points + additionalPoints;


    //Output
    if (purchaseAmount <= 0)
        cout << "\nInvalid purchase amount!" << endl;
    else {
        cout << "\nPoints: " << points << endl;
        cout << "Additional points: " << additionalPoints << endl;
        cout << "Total points: " << points << " + " << additionalPoints << " = " <<  totalPoints << endl;
    }

    return 0;

}