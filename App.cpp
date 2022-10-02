#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        // if nums.size() = 0, return 0
        if (nums.size() == 0) 
        {
            return 0;
        }

        // this will be our return value
        // 0 indicates the front of the array
        int valid_size = 0;

        // iterate through nums and move all valid numbers to the front of the array
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != val) 
            {
                nums[valid_size] = nums[i];

                // increment validSize for next valid number
                valid_size++;
            }
        }
        return valid_size;
    }
};

int main()
{
    vector<int> example_one{3, 2, 2, 3};
    vector<int> example_two{0, 1, 2, 2, 3, 0, 4, 2};
    vector<int> example_three{1, 1, 1, 1, 1};
    vector<int> example_four;

    Solution solution;

    cout << "example one : " << solution.removeElement(example_one, 3) << endl;
    cout << "example two : " << solution.removeElement(example_two, 2) << endl;
    cout << "example three : " << solution.removeElement(example_three, 8) << endl;
    cout << "example four : " << solution.removeElement(example_four, 1) << endl;

	return 0;
}
