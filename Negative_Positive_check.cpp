Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
int main() {
    cout << "Enter  a number: ";
    int n;
    cin >> n;
    if (n>0) {
        cout << "The Number is Positive" << endl;
    } else if (n < 0) {
        cout << "The Number is Negative" << endl;
    } else {
        cout << "The Number is Zero" << endl;
    }
    return 0;
}
output:
Enter  a number: 22
The Number is Positive
Enter  a number: -20
The Number is Negative
Enter  a number: 0
The Number is Zero
