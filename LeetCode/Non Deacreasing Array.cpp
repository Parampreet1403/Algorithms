// Parampreet Singh - 28/05/20
// LeetCode Easy (665) Non-Decreasing Array

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums{ 4, 2, 3 };
    int increasing{};
    int decreasing{};
    int size = nums.size();
    int location{};
    bool flag;
    for (int i{}; i < size - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            increasing++;
        }
        else
        {
            decreasing++;
            location = i;
        }
    }

    if (increasing == nums.size() - 2 && decreasing == 1)
    {
        int modNum = nums[location + 1] - 1;
        if (location == 0 || modNum > nums[location - 1])
        {
            flag = true;
        }
    }
    else
        flag = false;

    std::cout << "flag: " << flag;

	return 0;
}
