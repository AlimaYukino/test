/*´úÂë²âÊÔ*/

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
#include<conio.h>

main()
{
	int m = 1;
	int n = 2;
	int sum;
	sum = m++ + ++n - n-- - --m + n-- - --m;
	printf("m = %d\n",m);
	printf("n = %d\n",n);
	printf("sum = %d\n",sum);
	system("pause");
}