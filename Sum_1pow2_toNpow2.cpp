#include <iostream>

int main()
{
	int n = 0, Sum = 1;
	std::cin >> n;
	for (int i = 2; i <= n; i++)
	{
		Sum += i*i;
	}
	std::cout << Sum << std::endl;
	return 0;
}

