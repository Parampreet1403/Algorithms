// Parampreet Singh - 02/06/2020
// LeetCode Easy (7): Reverse Integer

#include <iostream>

int main()
{
    int x{ 123 };
    int rev = 0;

    while (x != 0) 
    {
        int pop = x % 10;
        x /= 10; // x = x / 10
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        rev = rev * 10 + pop;
    }
    
    int answer{ rev };
    std::cout << "Answer: " << answer << std::endl;
    
	return 0;
}