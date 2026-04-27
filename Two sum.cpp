#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution S;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int target = 10;
    vector<int> result = S.twoSum(nums, target);
     if(result.size() == 2){
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }
}