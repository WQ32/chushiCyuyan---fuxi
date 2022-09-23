#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("hello world!\n");
//	printf("haha\n");
//	return 0;
//}
//// main函数是程序入口
////一个工程有且仅有一个main函数

//数据类型
//char		字符数据类型
//short		短整型
//int		整形  
//long		长整型
//long long 更长的整形
//float		单精度浮点型
//double	双精度浮点型
//C语言中没有字符串类型

////每种类型的大小
//
//int main()
//{
//	printf("%d\n", sizeof(char));		//1
//	printf("%d\n", sizeof(short));		//2
//	printf("%d\n", sizeof(int));		//4
//	printf("%d\n", sizeof(long));		//4
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));		//4
//	printf("%d\n", sizeof(double));		//8
//	printf("%d\n", sizeof(long double));//8
//	return 0;
//}

////类型的使用
//
//int main()
//{
//	char ch = 'w';
//	int weight = 120;
//	int salary = 20000;
//	return 0;
//}

//变量 - 值可变
//常量 - 值不可变

////定义变量的方法
//int main()
//{
//	int age = 19;
//	float weight = 79.6f;
//	char ch = 'w';
//	return 0;
//}

////变量的分类

////局部变量
////全局变量
//
//int global = 2022;   //全局变量 - 定义在main函数外面 - 在整个工程中都起作用
//int main()
//{
//	int local = 2021;  //局部变量 - 定义在函数内部 -只在他所在的区域内起作用
//	int global = 2025;
//	printf("%d\n", global);  //结果 - 2025
//	//当局部变量和全局变量同名的时候，局部变量优先使用。最好不要同名
//	return 0;
//}

////变量的使用
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个数：>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
////scanf
////printf

//变量的作用域和生命周期
// 作用域：
//1. 局部变量的作用域是变量所在的局部范围, 
//2.全局变量的作用域是整个工程
// 生命周期：
//1.局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//2. 全局变量的生命周期是：整个程序的生命周期。

//常量
//1.字面常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.枚举常量

////枚举常量
//enum Sex
//{
//	MALE,     //0
//	FEMALE,	  //1
//	SECRET	  //2
//};
//
//int main()
//{
//	3.14;   //字面常量
//	1000;   //字面常量
//	//const修饰的常变量
//	const float pai = 3.14;  //这里pai是const修饰的常变量
//	// pai = 5.14;   //error - const修饰的常变量不能被修改
//	//#define修饰的常量
//	#define MAX 50
//	printf("%d\n", MAX);
//	//枚举常量演示
//	printf("%d\n", MALE);   //0
//	printf("%d\n", FEMALE); //1
//	printf("%d\n", SECRET); //2
//	//注：枚举常量的默认是从0开始，依次向下递增1的
//	return 0;
//}

////字符串
////注：字符串都是以\0结尾，否者不是字符串
//
//int main()
//{
//	char arr1[] = "bit";			//有\0(在末尾隐藏有) - 打印bit
//	char arr2[] = { 'b','i','t' };	//数组中没有\0结尾 - 打印bit后，向后找\0，直到找到\0,后面就是随机值
//	char arr3[] = { 'b','i','t','\0' };//有\0 - 打印bit
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

////转义字符
////比如打印   c:\code\test.c
//
//int main()
//{
//	// printf("c:\code\test.c");   //结果error    -   c:code  est.c
//	printf(" c:\\code\\test.c\n");   //结果         -   c:\code\test.c
//	//问题1：在屏幕上打印一个单引号'，怎么做？
//	printf("%c\n", '\'');
//	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//	printf("%s\n","\"");
//	return 0;
//}

////笔试题
////程序输出什么？
//int main()
//{
//	//strlen()函数的作用是统计给定字符串的长度。
//	//统计字符串str中字符的个数，不包括'\0'
//	printf("%d\n", strlen("abcdef"));    //6
//	printf("%d\n", strlen("c:\test\628\test.c"));  //14  八进制 \ddd  但是八进制数是从 0-7
//	return 0;
//}

//注释
//C语言风格的注释 /*xxxxxx*/
//	缺陷：不能嵌套注释
//C++风格的注释 //xxxxxxxx
//	可以注释一行也可以注释多行


////选择语句
//
//int main()
//{
//	int coding = 0;
//	printf("你会努力敲代码吗？(选择1 or 0)>");
//	scanf("%d", &coding);
//	printf("\n");
//	if (coding == 1)
//	{
//		printf("努力就会有好offer！\n");
//	}
//	else
//	{
//		printf("废物，回家卖红薯吧……\n");
//	}
//	return 0;
//}

////循环语句
//#include <stdlib.h>   //rand()函数头文件
//
//int main()
//{
//	printf("加入比特……\n");
//	int into = rand()%30000;
//	int line = 0;
//	while (line <= 20000)
//	{
//		if (line == into)
//		{
//			printf("中奖数为%d\n", line);
//			printf("恭喜你中了500万，你将迎娶白富美！");
//			break;
//		}
//		line++;
//		printf("努力写代码吧……");
//	}
//	if (line > 20000)
//	{
//		printf("恭喜你，通过你的努力，你很有可能拿到一个好offer,也有能力迎娶白富美了！");
//	}
//	return 0;
//}

////函数   -  特点：简化代码，代码复用
//
////两数相加
//////法一
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	int sum = 0;
////	printf("请输入要求和的两个数:>");
////	scanf("%d%d", &num1, &num2);
////	sum = num1 + num2;
////	printf("两数之和为:%d\n", sum);
////	return 0;
////}
//
////法二：函数
//
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d",& num1, & num2);
//	printf("\n");
//	sum = Add(num1, num2);
//	printf("两数之和sum = %d\n", sum);
//	return 0;
//}

//数组   - 一组相同类型元素的集合

//数组定义

// int arr[10]={1,2,3,4,5,6,7,8,9,10};  //一共10个元素，方括号中给定了

//数组下标
//每个元素都有下标，且都是从0开始的

////数组的使用
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//操作符

//关键字typeof  - 类型重定义（重命名）

//struct S
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	struct S stu = { "王棋",19 };
//	printf("%s\n", stu.name);   //打印结构体变量
//	printf("%d\n", stu.age);
//	return 0;
//}
////使用typedef
//typedef struct S
//{
//	char name[10];
//	int age;
//} St;
//int main()
//{
//	St s = { "张周吉",19 };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//}
////另外定义
//
//#include <string.h>
//typedef unsigned int my_int;
//int main()
//{
//	unsigned int num1 = 0;   //unsigned以%u输出
//	my_int num2 = 0; 
//	printf("%u  %u", num1, num2);
//	return 0;
//}

//关键字static
//修饰局部变量 - 称为静态局部变量
//修饰全局变量 - 静态全局变量
//修饰函数 - 静态函数

//不加static
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();      //结果 - 1 1 1 1 1 1 1 1 1 1
//	}
//	return 0;
//}

//加static
//void test()
//{
// //static修饰局部变量
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();         //结果 - 1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}
// 第二种加static修饰局部变量改变了变量的生命周期
//让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束。
//所以加static的test函数中的i是变化着的

//static修饰全局变量
////代码1：
//int g_val = 20;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//代码2

//int main()
//{
//	//printf("%d\n", g_val);
//	return 0;
//}
// 代码1正常，代码2在编译的时候会出现连接性错误。
//一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用，
//不能在其他源文件内使用

////static修饰函数 - 与修饰全局变量一样
//
//int main()
//{
//	printf("%d\n", Add(2, 3));        //结果为5，函数在另一个源文件中
//	return 0;						//如果static用来修饰另一个源文件中的函数
//									//会出错，原因和修饰全局变量一样
//}

////define 定义常量和宏
//
////define 定义标识符常量
//
//#define MAX 100
//
////define定义宏
//
//#define ADD(x,y) ((x)+(y))
//
//int main()
//{
//	int sum = ADD(3, 5); 
//	printf("sum=%d\n", sum);
//	// 8
//	sum = 10 * ADD(3, 5);
//	printf("sum=%d\n", sum);
//	//80
//	return 0;
//}

////内存
//
//int main()
//{
//	int num = 10;
//	&num;
//	//取出num的地址
//	//注：这里num的4 个字节，每个字节都有地址，
//	//取出的是第一个字节的地址（较小的地址）
//	printf("%p\n", &num);
//	//打印地址，%p是以地址的形式打印
//	return 0;
//}

//地址存储，需要定义指针变量
//int num=0;
// int* p;
//p=&num;
//int* p=&num;   p是指针变量

////使用实例
//int main()
//{
//	int num = 10;
//	printf("%d\n", num);   //结果10
//	int* p = &num;
//	*p = 50;
//	printf("%d\n", num);   //结果50
//}

////指针变量的大小
////指针变量的大小取决于地址的大小
////32位平台下地址是32个bit位（即4个字节）
////64位平台下地址是64个bit位（即8个字节）
//
//#include <string.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	//结果都是4个字节，在32位平台下，地址大小不变
//	//指针大小在32位平台是4个字节，64位平台是8个字节。
//	return 0;
//}

////结构体
//
//struct S
//{
//	char name[10];
//	int age;
//	char sex[5];
//	char school[20];
//};
//int main()
//{
//	struct S s = { "张周吉",18,"男", "西南交通大学" };
//	printf("name=%s age=%d sex=%s school=%s\n", s.name, s.age, s.sex, s.school);
//	struct S* ps = &s;
//	printf("name=%s age=%d sex=%s school=%s\n", ps->name, ps->age, ps->sex, ps->school);
//	return 0;
//}