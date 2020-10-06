// 06/10/2020 
// Another solution

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	int target{ 0 };
	std::vector<std::vector<int>> answer;

	// Create sorted vector
	std::sort(nums.begin(), nums.end());
	int size = nums.size();

	// Loop through vector
	for (int i{}; i < size - 2; i++)
	{
		// Create pointers
		int* left = &nums[i + 1];
		int* right = &nums[nums.size() - 1];

		// Check for possible solutions
		while (left < right)
		{
			int sum = nums[i] + *left + *right;

			if (sum < target) left++; // Increase sum
			else if (sum > target) right--; // Decrease sum
			else // Found a solution
			{
				std::vector<int> solution;
				solution.push_back(nums[i]); // 0
				solution.push_back(*left); // 1
				solution.push_back(*right); // 2
				answer.push_back(solution);

				// Duplicate check of pointers
				while (left < right && *left == solution[1]) left++;
				while (left < right && *right == solution[2]) right--;
			}
			// Duplicate check of current value
			while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
		}
	}
	return answer;}
};


// Parampreet Singh - 23/05/20
// LeetCode Medium (15) 3Sum

#include <iostream>
#include <string>
#include <vector>
#include<algorithm>


int main()
{
	std::vector<std::vector<int>> ret;
	std::vector<int> nums{ -1, 0, 1, 2, -1, 4 };
	std::sort(nums.begin(), nums.end());
	int size = nums.size();
	std::vector<int> ans;

	for (int i{}; i < size - 1; i++)
	{
		int L{ i + 1 };
		int R{ size - 1 };
		int target = -nums[i];
		while (L < R)
		{
			int sum = nums[L] + nums[R];
			if (sum < target)
			{
				L++;
			}
			else if (sum > target)
			{
				R--;
			}
			else
			{
				ans.push_back(nums[i]);
				ans.push_back(nums[L]);
				ans.push_back(nums[R]);
				ret.push_back(ans);


				while (L < R && nums[L] == ans[1]) { L++; }
				while (L < R && nums[R] == ans[2]) { R--; }
			}
			ans.clear();
			while (i + 1 < size && nums[i] == nums[i + 1]) { i++; }
		}



	}
	
	return 0;
}
