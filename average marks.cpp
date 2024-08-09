//Divyansh Rastogi
//23070123048
#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    float avg;

    cout << "Enter the marks for five subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5;

    if (avg > 80)
        cout << "It is A+ grade" << endl;
    else if (avg > 60 && avg <= 80)
        cout << "It is B++ grade" << endl;
    else if (avg > 0 && avg <= 60)
        cout << "It is C grade" << endl;
    else
        cout << "Invalid input for marks" << endl;

    return 0;
}
/* OUTPUT:-
Enter the marks for five subjects: 52
84
76
81
99
It is B++ grade*/
