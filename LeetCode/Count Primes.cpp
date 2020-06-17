// Parampreet Singh - 03/06/20
// LeetCode Easy (227) Count Primes

#include<iostream>
#include<thread>

void print( bool* ptr, int size)
{
	for (int i{}; i < size; i++)
	{
		std::cout << ptr[i] << std::endl;
	}
}


int main()
{
	int n{ 3 }; // Input

	int res{};
	int size{ n + 1 };
	bool* pr = new bool[size] {};
	pr[0] = true;
	pr[1] = true;

	// Sieve Eratosthenes
	for (int i{}; i * i < n; i++)
	{
		if (!pr[i])
		{
			for (int j{ i * i }; j <= n; j += i)
				pr[j] = true;
		}
	}

	for (int i{2}; i < n; i++)
	{
		if (pr[i] == false) res++;
	}

	std::cout << res << std::endl; 	// Output

	print(pr, size);
	delete[] pr;

	unsigned int c = std::thread::hardware_concurrency();
	std::cout << " number of cores: " << c << std::endl;

	return 0;
}
