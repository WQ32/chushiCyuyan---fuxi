#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("hello world!\n");
//	printf("haha\n");
//	return 0;
//}
//// main�����ǳ������
////һ���������ҽ���һ��main����

//��������
//char		�ַ���������
//short		������
//int		����  
//long		������
//long long ����������
//float		�����ȸ�����
//double	˫���ȸ�����
//C������û���ַ�������

////ÿ�����͵Ĵ�С
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

////���͵�ʹ��
//
//int main()
//{
//	char ch = 'w';
//	int weight = 120;
//	int salary = 20000;
//	return 0;
//}

//���� - ֵ�ɱ�
//���� - ֵ���ɱ�

////��������ķ���
//int main()
//{
//	int age = 19;
//	float weight = 79.6f;
//	char ch = 'w';
//	return 0;
//}

////�����ķ���

////�ֲ�����
////ȫ�ֱ���
//
//int global = 2022;   //ȫ�ֱ��� - ������main�������� - �����������ж�������
//int main()
//{
//	int local = 2021;  //�ֲ����� - �����ں����ڲ� -ֻ�������ڵ�������������
//	int global = 2025;
//	printf("%d\n", global);  //��� - 2025
//	//���ֲ�������ȫ�ֱ���ͬ����ʱ�򣬾ֲ���������ʹ�á���ò�Ҫͬ��
//	return 0;
//}

////������ʹ��
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
////scanf
////printf

//���������������������
// ������
//1. �ֲ��������������Ǳ������ڵľֲ���Χ, 
//2.ȫ�ֱ���������������������
// �������ڣ�
//1.�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
//2. ȫ�ֱ��������������ǣ�����������������ڡ�

//����
//1.���泣��
//2.const���εĳ�����
//3.#define����ı�ʶ������
//4.ö�ٳ���

////ö�ٳ���
//enum Sex
//{
//	MALE,     //0
//	FEMALE,	  //1
//	SECRET	  //2
//};
//
//int main()
//{
//	3.14;   //���泣��
//	1000;   //���泣��
//	//const���εĳ�����
//	const float pai = 3.14;  //����pai��const���εĳ�����
//	// pai = 5.14;   //error - const���εĳ��������ܱ��޸�
//	//#define���εĳ���
//	#define MAX 50
//	printf("%d\n", MAX);
//	//ö�ٳ�����ʾ
//	printf("%d\n", MALE);   //0
//	printf("%d\n", FEMALE); //1
//	printf("%d\n", SECRET); //2
//	//ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
//	return 0;
//}

////�ַ���
////ע���ַ���������\0��β�����߲����ַ���
//
//int main()
//{
//	char arr1[] = "bit";			//��\0(��ĩβ������) - ��ӡbit
//	char arr2[] = { 'b','i','t' };	//������û��\0��β - ��ӡbit�������\0��ֱ���ҵ�\0,����������ֵ
//	char arr3[] = { 'b','i','t','\0' };//��\0 - ��ӡbit
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

////ת���ַ�
////�����ӡ   c:\code\test.c
//
//int main()
//{
//	// printf("c:\code\test.c");   //���error    -   c:code  est.c
//	printf(" c:\\code\\test.c\n");   //���         -   c:\code\test.c
//	//����1������Ļ�ϴ�ӡһ��������'����ô����
//	printf("%c\n", '\'');
//	//����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//	printf("%s\n","\"");
//	return 0;
//}

////������
////�������ʲô��
//int main()
//{
//	//strlen()������������ͳ�Ƹ����ַ����ĳ��ȡ�
//	//ͳ���ַ���str���ַ��ĸ�����������'\0'
//	printf("%d\n", strlen("abcdef"));    //6
//	printf("%d\n", strlen("c:\test\628\test.c"));  //14  �˽��� \ddd  ���ǰ˽������Ǵ� 0-7
//	return 0;
//}

//ע��
//C���Է���ע�� /*xxxxxx*/
//	ȱ�ݣ�����Ƕ��ע��
//C++����ע�� //xxxxxxxx
//	����ע��һ��Ҳ����ע�Ͷ���


////ѡ�����
//
//int main()
//{
//	int coding = 0;
//	printf("���Ŭ���ô�����(ѡ��1 or 0)>");
//	scanf("%d", &coding);
//	printf("\n");
//	if (coding == 1)
//	{
//		printf("Ŭ���ͻ��к�offer��\n");
//	}
//	else
//	{
//		printf("����ؼ�������ɡ���\n");
//	}
//	return 0;
//}

////ѭ�����
//#include <stdlib.h>   //rand()����ͷ�ļ�
//
//int main()
//{
//	printf("������ء���\n");
//	int into = rand()%30000;
//	int line = 0;
//	while (line <= 20000)
//	{
//		if (line == into)
//		{
//			printf("�н���Ϊ%d\n", line);
//			printf("��ϲ������500���㽫ӭȢ�׸�����");
//			break;
//		}
//		line++;
//		printf("Ŭ��д����ɡ���");
//	}
//	if (line > 20000)
//	{
//		printf("��ϲ�㣬ͨ�����Ŭ��������п����õ�һ����offer,Ҳ������ӭȢ�׸����ˣ�");
//	}
//	return 0;
//}

////����   -  �ص㣺�򻯴��룬���븴��
//
////�������
//////��һ
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	int sum = 0;
////	printf("������Ҫ��͵�������:>");
////	scanf("%d%d", &num1, &num2);
////	sum = num1 + num2;
////	printf("����֮��Ϊ:%d\n", sum);
////	return 0;
////}
//
////����������
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
//	printf("������������:>");
//	scanf("%d%d",& num1, & num2);
//	printf("\n");
//	sum = Add(num1, num2);
//	printf("����֮��sum = %d\n", sum);
//	return 0;
//}

//����   - һ����ͬ����Ԫ�صļ���

//���鶨��

// int arr[10]={1,2,3,4,5,6,7,8,9,10};  //һ��10��Ԫ�أ��������и�����

//�����±�
//ÿ��Ԫ�ض����±꣬�Ҷ��Ǵ�0��ʼ��

////�����ʹ��
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

//������

//�ؼ���typeof  - �����ض��壨��������

//struct S
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	struct S stu = { "����",19 };
//	printf("%s\n", stu.name);   //��ӡ�ṹ�����
//	printf("%d\n", stu.age);
//	return 0;
//}
////ʹ��typedef
//typedef struct S
//{
//	char name[10];
//	int age;
//} St;
//int main()
//{
//	St s = { "���ܼ�",19 };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//}
////���ⶨ��
//
//#include <string.h>
//typedef unsigned int my_int;
//int main()
//{
//	unsigned int num1 = 0;   //unsigned��%u���
//	my_int num2 = 0; 
//	printf("%u  %u", num1, num2);
//	return 0;
//}

//�ؼ���static
//���ξֲ����� - ��Ϊ��̬�ֲ�����
//����ȫ�ֱ��� - ��̬ȫ�ֱ���
//���κ��� - ��̬����

//����static
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
//		test();      //��� - 1 1 1 1 1 1 1 1 1 1
//	}
//	return 0;
//}

//��static
//void test()
//{
// //static���ξֲ�����
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();         //��� - 1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}
// �ڶ��ּ�static���ξֲ������ı��˱�������������
//�þ�̬�ֲ�����������������Ȼ���ڣ�������������������ڲŽ�����
//���Լ�static��test�����е�i�Ǳ仯�ŵ�

//static����ȫ�ֱ���
////����1��
//int g_val = 20;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//����2

//int main()
//{
//	//printf("%d\n", g_val);
//	return 0;
//}
// ����1����������2�ڱ����ʱ�����������Դ���
//һ��ȫ�ֱ�����static���Σ�ʹ�����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�
//����������Դ�ļ���ʹ��

////static���κ��� - ������ȫ�ֱ���һ��
//
//int main()
//{
//	printf("%d\n", Add(2, 3));        //���Ϊ5����������һ��Դ�ļ���
//	return 0;						//���static����������һ��Դ�ļ��еĺ���
//									//�����ԭ�������ȫ�ֱ���һ��
//}

////define ���峣���ͺ�
//
////define �����ʶ������
//
//#define MAX 100
//
////define�����
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

////�ڴ�
//
//int main()
//{
//	int num = 10;
//	&num;
//	//ȡ��num�ĵ�ַ
//	//ע������num��4 ���ֽڣ�ÿ���ֽڶ��е�ַ��
//	//ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//	printf("%p\n", &num);
//	//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
//	return 0;
//}

//��ַ�洢����Ҫ����ָ�����
//int num=0;
// int* p;
//p=&num;
//int* p=&num;   p��ָ�����

////ʹ��ʵ��
//int main()
//{
//	int num = 10;
//	printf("%d\n", num);   //���10
//	int* p = &num;
//	*p = 50;
//	printf("%d\n", num);   //���50
//}

////ָ������Ĵ�С
////ָ������Ĵ�Сȡ���ڵ�ַ�Ĵ�С
////32λƽ̨�µ�ַ��32��bitλ����4���ֽڣ�
////64λƽ̨�µ�ַ��64��bitλ����8���ֽڣ�
//
//#include <string.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	//�������4���ֽڣ���32λƽ̨�£���ַ��С����
//	//ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڡ�
//	return 0;
//}

////�ṹ��
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
//	struct S s = { "���ܼ�",18,"��", "���Ͻ�ͨ��ѧ" };
//	printf("name=%s age=%d sex=%s school=%s\n", s.name, s.age, s.sex, s.school);
//	struct S* ps = &s;
//	printf("name=%s age=%d sex=%s school=%s\n", ps->name, ps->age, ps->sex, ps->school);
//	return 0;
//}