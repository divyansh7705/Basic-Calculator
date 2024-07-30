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