Yashvesh Singh
#include<iostream>
using namespace std;
int main() {
    float Maths,EDC,DCDL,SIGNAL_SYS;
    cout << "Enter the marks in Maths, EDC, DCDL, SIGNAL_SYS: ";
    cin >> Maths >> EDC >> DCDL >> SIGNAL_SYS;
    float average = (Maths + EDC + DCDL + SIGNAL_SYS)/4;
    if (average >85 && average <=100){
        cout << "Grade: O" << endl;
    }
    else if (average >75 && average <=85) {
        cout << "Grade: A" << endl;
    }
    else if (average >65 && average <=75) {
        cout << "Grade: B" << endl;
    }
    else if (average >55 && average <=65) {
        cout << "Grade: C" << endl;
    }
    else if (average >45 && average <=55) {
        cout << "Grade: D" << endl;
    }
    else if (average >=0 && average <=45) {
        cout << "Grade: F" << endl;
    }
    else {
        cout << "Invalid marks entered." << endl;
    }
    return 0;
}

output:
Enter the marks in Maths, EDC, DCDL, SIGNAL_SYS: 78
80
67
77
Grade: A
