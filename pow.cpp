#include <iostream>
#include <vector>
using namespace std;

double pow(double x, int n) {
    double ans=1;
    long binaryForm = n;

    if(n==0) return 1;
    if(x==0) return 0;

    if(n<0) {
        x = 1/x;
        binaryForm = -binaryForm;
    }

    while(binaryForm>0) {
        if(binaryForm%2==1) {
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    }
    return ans;
}

int main() {
    int n;
    double x;
    cout << "Syntax: X^n" << endl;

    cout << "Enter X: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << "Result: " << pow(x, n) << endl;
    return 0;
}
