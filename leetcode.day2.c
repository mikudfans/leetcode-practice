#include<stdio.h> //Ishappy
int next_n(int n)
{
	int sum = 0;

	while (n != 0)
	{
		int d = n % 10;
		n /= 10;
		sum += d * d;
	}
	return sum;
}
int inspect(int* histroy, int n,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if (histroy[i] == n)
			return 1;
	}
	return 0;
}
int main()
{
	int n;
	int history[100000];            //存放n出现过的值
	int size = 0;             

	scanf("%d", &n);
	while (!inspect(history,n,size))//检查n有没有出现过
	{
		history[size] = n;
		size++;
		n = next_n(n);

	}
	printf("%d\n", next_n(n));

	return 0;
}
