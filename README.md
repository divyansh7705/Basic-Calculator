# CDS-experiment-1


AIM :- downloading and installation of vs code ( hello world and calculator) <br>

Theory:- <br>

1) in this we installed vs code and ming w (from source forge) <br>
2). in this program we have printed hello world and find the sum , subtarction , multiplication and division of two numbers (user input), taking average of 5 inputs and grading them <br>

CODE:-<br>
A).  <br>
```#include <iostream> <br>
using namespace std; <br>

int main() { <br>
    cout <<"hello word"; <br>
}```

B). <br>
```#include <iostream>
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
}```
C). <br>
```#include <iostream>
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
}```


CONCLUSION:- in this experiment we learnt the basic syntax of cpp , add ,subtract, multiply numbers, find the average .<br>


