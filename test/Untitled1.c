#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k)
{
	//Write your code here.
	int arrn[11], arrk[11], i;
	//	scanf("%d", &n);

	for (i = 10; i >= 0; i--)
	{
		if (n >= pow(2, i))
		{
			arrn[10 - i] = 1;
			n = n - pow(2, i);
		}
		else
		{
			arrn[10 - i] = 0;
		}
	}

	//	scanf("%d", &k);
	for (i = 10; i >= 0; i--)
	{
		if (k >= pow(2, i))
		{
			arrk[10 - i] = 1;
			k = k - pow(2, i);
		}
		else
		{
			arrk[10 - i] = 0;
		}
	}
	//and operation
	int x, y, ans1[11];

	for (i = 10; i >= 0; i--)
	{
		x = arrn[i];
		y = arrk[i];
		if (x == 1 && y == 1)
		{
			ans1[i] = 1;
		}
		else if ((x == 1 && y == 0) || (x == 0 && y == 1) || (x == 0 && y == 0))
		{
			ans1[i] = 0;
		}
	}
	//or operation
	int ans2[11];
	for (i = 10; i >= 0; i--)
	{
		x = arrn[i];
		y = arrk[i];
		if( (x == 1 && y == 1)||(x == 1 && y == 0) || (x == 0 && y == 1))
		{
			ans2[i] = 1;
		}
		else if (x == 0 && y == 0)
		{
			ans2[i]== 0;
		}
	}
	//exor operation
	int ans3[11];

	for (i = 10; i >= 0; i--)
	{
		x = arrn[i];
		y = arrk[i];
		if ((x == 1 && y == 1) || (x == 0 && y == 0))
		{
			ans3[i] = 0;
		}
		else if ((x == 1 && y == 0) || (x == 0 && y == 1))
		{
			ans3[i] = 1;
		}
	}

	int tot1 = 0, tot2 = 0, tot3 = 0;
	for (i = 0; i <= 10; i++)
	{
		tot1 = tot1+ pow(2,10- i) * ans1[i];
	}
	for (i = 0; i <= 10; i++)
	{
		tot2 = tot2 + pow(2, 10-i)*ans2[i];
	}
	for (i = 0; i <= 10; i++)
	{
		tot3 = tot3+ pow(2,10- i)*ans3[i];
	}
	printf("%d\n%d\n%d", tot1, tot2, tot3);
}
int main()
{
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}