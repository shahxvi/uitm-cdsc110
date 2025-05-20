#include <iostream>
using namespace std;

int main () {
    
    //Write a program in C++ that can determine and display the largest and the smallest number among any number of integers entered by the user. 
    
    int i, n, num;
    int total = 0;
    int odd = 0;
    int even = 0;
    
    //Step 1: Initialize
    int largest = -999999; 
    int smallest = 999999; 

    cout << "\nEnter the number of integer(s) you want to enter: ";
    cin >> n;

    cout << endl;

    for (i = 0; i < n; i++) {
        
        cout << "Enter the Number: ";
        cin >> num;

        //Step 2: Compare
        if (num < smallest)
            smallest = num; //Step 3: Upadate
        if (num > largest)
            largest = num; //Step 3: Upadate
        
        if (num % 2 == 0)
            even++;
        else
            odd++;

        total += num;

    }

    //Display the smallest & largest number
    cout << "\nThe smallest number is: " << smallest << endl;
    cout << "The largest number is: " << largest << endl;

    //find & display the average of all numbers
    float average = (float) total / n;
    cout << "\nThe average of all numbers is: " << average << endl;

    //find the number of odd & even numbers
    cout << "\nThe number of odd numbers is: " << odd << endl;
    cout << "The number of even numbers is: " << even << endl;

}