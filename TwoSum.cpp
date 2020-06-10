// Parampreet Singh - 23/05/20
// LeetCode Easy (1) TwoSum

#include<vector>
#include<iostream>
#include <unordered_map>

int main()
{
	std::vector<int> list{ 1, 2, 3, 4, 5, 6, 7, 8 };
	std::vector<int> nums = list;
	int target{ 6 };
	int size = nums.size();
	std::vector<int> ans;
	int diff;


	std::unordered_map<int, int > map;
	for (int i{}; i < size; i++)
	{
		diff = target - nums[i];
		if (map.find(diff) != map.end() && map.find(diff)->second != i)
		{
			ans.push_back(i);
			ans.push_back(map.find(diff)->second);
		}
		map[nums[i]] = i;
	}

	for (auto e : ans)
		std::cout << e << std::endl;

	return 0;
}