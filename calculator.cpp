#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <stdlib.h>
using namespace std;
int checkChoice(int min, int max);
float checkInput(int n);
int main() {
    bool cont = true;
    vector<std::string> meny{ "1. Addition","2. Subtraction","3. Multiplication",
    "4. Division","5. Quit" };
    while (cont){
        cout << "Simple Calculator 0.1" << endl;
        for(int i = 0; i < 5; ++i)
            cout << meny[i] << endl;
        int choice = 0;
        choice = checkChoice(1,5);
        cout << "You chose: " << meny[choice-1] << endl;
        float x = 0.0;
        float y = 0.0;
        switch(choice){
            case 1:
                x = checkInput(1);
                y = checkInput(2);
                cout << " " << endl;
                cout << x << " + " << y << " = " << x + y << endl;
                cout << " " << endl;
                break;
            case 2:
                x = checkInput(1);
                y = checkInput(2);
                cout << " " << endl;
                cout << x << " - " << y << " = " << x - y << endl;
                cout << " " << endl;
                break;
            case 3:
                x = checkInput(1);
                y = checkInput(2);
                cout << " " << endl;
                cout << x << " x " << y << " = " << x * y << endl;
                cout << " " << endl;
                break;
            case 4:
                x = checkInput(1);
                y = checkInput(2);
                cout << " " << endl;
                cout << x << " / " << y << " = " << x / y << endl;
                cout << " " << endl;
                break;
            case 5:
                cont = false;
                break;
        }
    }
 return 0;
}
int checkChoice(int min, int max){
    int input = 0;
    bool valid_input = false;
    while (!valid_input) {
        cout << "Choose which operator to use" << endl;
        cin >> input;
        // Takler ikke "2t", bokstaver ignoreres om de følger ett tall, men ikke motsatt
        if (cin.fail() || input < min || input > max) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            valid_input = true;
        }
    }
    return input;
}
float checkInput(int n){
    float input = 0;
    bool valid_input = false;
    float max = std::numeric_limits<float>::max();
    while (!valid_input) {
        cout << "Type in number " << n << ": ";
        cin >> input;
        if (cin.fail() || input < -(max) || input > max) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
        valid_input = true;
        }
    }
    return input;
}