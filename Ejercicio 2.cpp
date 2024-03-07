#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.count(complement)) {
            result.push_back(i);
            result.push_back(seen[complement]);
            seen.erase(complement);
        } else {
            seen[nums[i]] = i;
        }
    }
    return result;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> resultado = twoSum(nums, target);
    for (int i : resultado) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
