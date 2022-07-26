// Running the Sum of 1d Array
/*
Given a arry nums. We define a running sum of array as runningSum[i] = sum(nums[0]...nums[i])
Returns the running Sum of nums
*/

#include<iostream>
#include<vector>
using namespace std;

class RunningsumArry
{
    public:
    vector<int> runningsum(vector<int>& nums)
    {
        for(int i=1;i<nums.size();++i)
            nums[i] += nums[i-1];
        return nums;
    }

};

int main()
{
    RunningsumArry rsumArry;
    vector<int> nums = {1,2,2,4,4};

    vector<int> result = rsumArry.runningsum(nums);
    cout << "[";
    int len = result.size();
    for(int i =0;i<result.size();i++)
    {
        cout << result[i];
        if( i < result.size()-1)
            cout<<",";
    }
    cout << "]";
    return 0;
}