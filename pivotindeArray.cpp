#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

class PivotIndexArray
{
    public:
    int findpivotindex(vector<int> &nums)
    {
        int total = accumulate(nums.begin(),nums.end(),0);
        int leftsum =0;
        for (int i =0;i < nums.size();i++)
        {
            int rightsum = total - nums[i] - leftsum;
            if(leftsum == rightsum)
                return i;
            leftsum += nums[i];
        }
        return -1;
    }
};

int main()
{
    vector<int> num = {1,7,3,6,5,6};
    PivotIndexArray pivot;
    cout<<pivot.findpivotindex(num)<<endl;
    return 0;
}