/*
2016-04-11 9:58
练习目的:
熟练掌握for语句

*/
#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	for (i = 1; i < 101;i+=2) //奇数的步长是2
	{
		sum = sum + i;
	}
	//for (i = 1; i < 101;++i)
	//{
	//	if (i%2==1) //除2取余只要等于1 那就是奇数
	//	{
	//		sum = sum + i;
	//	}
	//}
	printf("从1到100之间的和是:%d",sum);
	getchar();
	return 0;
}
/*
运行结果:
---------------------------------------------
从1到100之间的和是:2500
---------------------------------------------
总结:奇数两个特点
1.步长增加为2
2.除2取余只要等于1
*/