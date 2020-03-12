#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int i = 0;
    int j = 0;
    vector<int> result;
    for(; i < nums.size(); i ++){
        for(; j < nums.size(); j ++){
        	cout << i << endl << j;
            if(i != j){
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    cout << i << endl << j;
                    return result;
                }
            }
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
	int a[4] = {2, 7, 11, 15}; 
	vector<int> nums(a, a + 4);
	int target = 9;
	twoSum(nums, target);
	//cout << twoSum(nums, target) << twoSum(nums, target);
	return 0;
}