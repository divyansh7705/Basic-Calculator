# CDS-experiment-1


AIM :- downloading and installation of vs code ( hello world and calculator) <br>

Theory:- <br>

1) in this we installed vs code and ming w (from source forge) <br>
2). in this program we have printed hello world and find the sum , subtarction , multiplication and division of two numbers (user input), taking average of 5 inputs and grading them <br>

CODE:-<br>
A).  <br>
 #include <iostream> <br>
using namespace std; <br>

int main() { <br>
    cout <<"hello word"; <br>
} <br>

B). <br>
#include <iostream>
using namespace std;

int main() {
    float num1, num2, res;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Addition is: " << num1 + num2 << endl;
    cout << "Subtraction is: " << num1 - num2 << endl;
    
    res = num1 * num2;
    cout << "Multiplication is: " << res << endl;
    
    cout << "Division is: " << num1 / num2 << endl;
    
    

    return 0;
}
C). <br>
#include <iostream> <br>
using namespace std; <br>
int main() { <br>
    int m1,m2,m3,m4,m5,avg; <br>
    cout << "enter the num :"; <br>
    cin >> m1 >> m2 >> m3 >> m4 >> m5; <br>
    avg = (m1+m2+m3+m4+m5)/5; <br>
    if (avg > 80) <br>
    cout << "it is A+ grade"; <br>
    else if (avg > 60 and avg<80) <br>
    cout <<"it is B++ grade"; <br>
    else if (avg < 60 and avg > 0 ) <br>
    cout <<"it is C grade"; <br>
    

    return 0; <br>
}<br>

CONCLUSION:- in this experiment we learnt the basic syntax of cpp , add ,subtract, multiply numbers, find the average .<br>


