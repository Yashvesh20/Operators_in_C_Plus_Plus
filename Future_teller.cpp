Yashvesh Singh 24070123138
#include<iostream>
using namespace std;

int main() {
    int birthDay;

    cout << "Welcome to your Digital Fortune Cookie!" << endl;
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;
    if (birthDay < 1 || birthDay > 31) {
        cout << "Invalid input! Please enter a number between 1 and 31." << endl;
        return 1;
    }

    int code = (birthDay * 7) % 5;

    cout << "\nYour fortune is...\n";

    if (code == 0) {
        cout << "A surprise is waiting for you!" << endl;
    } else if (code == 1) {
        cout << "Your next idea will take off—just believe in it." << endl;
    } else if (code == 2) {
        cout << "Today is a good day to learn something new." << endl;
    } else if (code == 3) {
        cout << "You will find joy in the little things." << endl;
    } else {
        cout << "Stay focused—success is just a few steps away!" << endl;
    }

    return 0;
}

output:
Welcome to your Digital Fortune Cookie!
Enter your birth day (1-31): 22

Your fortune is...
Stay focused—success is just a few steps away!


