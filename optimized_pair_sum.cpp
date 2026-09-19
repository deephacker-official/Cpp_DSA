#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums={2, 7, 11, 15};
    vector<int> ans;
    int target = 9;

    int start=0, end=nums.size()-1;

    while(start<end){
        int curSum = nums[start]+nums[end];
        if(curSum>target) {
            end--;
        } else if(curSum < target) {
            start++;
        } else {
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
    }

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
