# CDS-experiment-1


AIM :- downloading and installation of vs code ( hello world and calculator) <br>

Theory:- <br>

1) in this we installed vs code and ming w (from source forge) <br>
2). in this program we have printed hello world and find the sum , subtarction , multiplication and division of two numbers (user input), taking average of 5 inputs and grading them <br>

CODE:-<br>
A).  <br>
 #include <iostream>
using namespace std;

int main() {
    cout <<"hello word";
} <br>

B). <br>
#include <iostream>
using namespace std;

int main() {
    float  num1, num2,res;
    cout << "Enter the first numbers: ";
    cin>>num1;
    cout<<"enter the second no.";
    cin>>num2;
    cout<<"  addition is :"<<num1+num2<<endl;
    cout<<"  subtraction is :"<<num1-num2<<endl;
    res=num1*num2;
    cout<<" multiplication is :"<<res<<endl;
    cout<<" division is:"<<num1/num2<<endl;
   
   
    return 0;
}<br>

C). <br>
#include <iostream>
using namespace std;
int main() {
    int m1,m2,m3,m4,m5,avg;
    cout << "enter the num :";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    avg = (m1+m2+m3+m4+m5)/5;
    if (avg > 80)
    cout << "it is A+ grade";
    else if (avg > 60 and avg<80)
    cout <<"it is B++ grade";
    else if (avg < 60 and avg > 0 )
    cout <<"it is C grade";
    

    return 0;
}<br>

CONCLUSION:- in this experiment we learnt the basic syntax of cpp , add ,subtract, multiply numbers, find the average .<br>


