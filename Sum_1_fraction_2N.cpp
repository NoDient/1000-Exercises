#include <iostream>

int main()
{
	int n = 0;
	double Sum = 0.5D;
	std::cin >> n;
	for (int i = 2; i <= n; i++)
	{
		Sum += 1.0/(2*i);
	}
	std::cout << Sum << std::endl;
	return 0;
}

