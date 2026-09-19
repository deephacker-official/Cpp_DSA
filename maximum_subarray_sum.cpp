#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1, -2, -3, -4};
    int ans=INT_MIN, curSum=0;

    for(int val: nums) {
        curSum += val;
        ans = max(curSum, ans);
        if(curSum<0) {
            curSum=0;
        }
    }

    cout << ans << endl;

    return 0;
}
