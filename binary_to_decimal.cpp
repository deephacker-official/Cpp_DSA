#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter binary num: ";
    cin >> num;

    int ans=0, pow=1;

    while (num > 0) {
        int r = num%10;
        ans += (r*pow);
        num /= 10;
        pow *= 2;
    }

    cout << ans << endl;
    return 0;
}
