#include<iostream>
using namespace std;

int main()
{
        char input;
        bool symbol;
        int digit = 0, alpha = 0;
    
        for (int counter = 0; counter < 10; counter++) {
                cout << "Enter a symbol: ";
                cin >> input;
                
                symbol = isdigit(input);

                if (symbol) {
                        cout << "You entered a digit: " << input << endl;
                        digit++;
                }
                
                else {
                        cout << "You entered an alphabet: " << input << endl;
                        alpha++;
                }
        }
        
        cout << "You entered a total of " << digit << " digits and " << alpha << " alphabets." << endl;

        system("pause");
        return 0;
}
