#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;

    int ans=0, pow=1;

    while (num > 0) {
        int r = num%2;
        ans += (r*pow);
        num /= 2;
        pow *= 10;
    }

    cout << ans << endl;
    return 0;
}
