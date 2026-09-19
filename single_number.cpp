#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 2, 1, 2, 4, 5, 8, 5};
    int ans=0;
    for(int i: nums) {
        ans ^= i;
    }

    cout << ans << endl;
    return 0;
}
