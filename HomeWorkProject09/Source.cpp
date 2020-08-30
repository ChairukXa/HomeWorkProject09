#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	unsigned long long grid[21][21];
	int x, y;
	for (x = 0; x < 21; x++)
	{
		for (y = 0; y < 21; y++)
		{
			grid[x][y] = 1;
		}
	}
	for (x = 1; x < 21; x++)
	{
		for (y = 1; y < 21; y++)
		{
			grid[x][y] = grid[x - 1][y] + grid[x][y - 1];
		}
	}
	printf("%lld\n", grid[20][20]);
	return 0;
}