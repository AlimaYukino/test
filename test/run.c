#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<math.h>

int Num[10];
int i;
int j=1;

int run()
{
	for (i = 0; i < 10; i++)
	{
		Num[i] = j;
		j++;
	}
}

int result()
{
	for (i = 9;i >= 0;i--)
	{
		if (Num[i]==10)
		{
			printf("%d",Num[i]);
		}
		else
		{
			printf(" %02d", Num[i]);
		}
	}
	printf("\n");
}

main(void)
{
	run();
	result();
	system("pause");
	return 0;
}