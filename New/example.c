#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#include<math.h>

main()
{
	int key;
	while (1)
	{
		key = _getch();
		printf("%d\n",key);
	}
	end:
	return 0;
}