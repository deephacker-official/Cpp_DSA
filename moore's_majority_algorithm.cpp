#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums={1, 2, 1, 2, 1};
    int n=nums.size();

    int ans=0, freq=0;

    for(int i=0; i<n; i++) {
        if(freq==0) {
            ans=nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    cout << ans << endl;

    return 0;
}
