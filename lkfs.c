#include<stdio.h>
//int x = 5, y = 7;
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int x = 3, y = 8;
//	swap();
//	printf("%d,%d\n", x, y);
//	return 0;
//}
//int main()
//{
//	double x[5] = { 2.0,4.0,6.0,8.0,10.0 };
//	char c2[] = { '\x10','\xa','\8' };
//	char c1[] = { '1','2','3','4','5' };
//	int y[5 + 3] = { 0,1,3,5,7,9 };
//}
//int* printNumbers(int n, int* returnSize) {
//    int m = 1;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        m *= 10;
//    }
//    int* a = (int*)malloc((m - 1) * sizeof(int));
//    *returnSize = m - 1;
//    for (i = 1; i < m; i++)
//    {
//        a[i - 1] = i;
//    }
//    return a;
//}
//int main() {
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%d%d%d", &year, &month, &day);
//    int monthsize[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//        monthsize[1]++;
//    int time = 0;
//    for (int i = 0; i < month - 1; i++)
//    {
//        time += monthsize[i];
//    }
//    time += day;
//    printf("%d", time);
//    return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//E��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (int a = 1; a <= 5; a++)
//	{
//		for (int b = 1; b <= 5; b++)
//		{
//			for (int c = 1; c <= 5; c++)
//			{
//				for (int d = 1; d <= 5; d++)
//				{
//					for (int e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3)) == 1 && ((b == 2) + (e == 4)) == 1 && ((c == 1) + (d == 2)) == 1 && ((c == 5) + (d == 3)) == 1 && ((e == 4) + (a == 1)) == 1)
//						{
//							if (a * b * c * d * e == 120)
//								printf("Aѡ�ֵ�%d,Bѡ�ֵ�%d,Cѡ�ֵ�%d,Dѡ�ֵ�%d,Eѡ�ֵ�%d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//int main()
//{
//    int killer = 'a';
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer != 'a') +(killer == 'c') +(killer == 'd') +(killer != 'd') == 3)
//        {
//            printf("killer = %c\n", killer);
//        }
//    }
//    return 0;
//}
//#define m 5
//#define n 5
//int main()
//{
//	int arr[m][n] = { 0 };
//	int i = 0;
//	int a = 1;
//	for (i = 0; i < m; i++)
//	{
//		arr[i][0] = 1;
//		if (i > 0)
//		{
//			arr[i][a] = 1;
//			a++;
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (a = 0; a < n; a++)
//		{
//			if (i > 1 && a > 0 && a < i)
//			{
//				arr[i][a] = arr[i - 1][a - 1] + arr[i - 1][a];
//			}
//			if (a <= i)
//			{
//				printf("%d ", arr[i][a]);
//			}
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (1 == *p)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д������������
//�����в���ĳ�������Ƿ���ڡ�
//#define m 3
//#define n 3
//int main()
//{
//	int arr[m][n] = { 1,2,3,4,5,6,7,8,9 };
//	int a = 0;
//	int b = n-1;
//	int number = 5;
//	while (a < m && b >= 0) {
//		if (arr[a][b] < number)
//		{
//			a++;
//		}
//		else if (arr[a][b] > number)
//		{
//			b--;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d %d\n", a, b);
//			return;
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}
#include <assert.h>
//char leftmove(char* arr, int a)
//{
//	int x;
//	assert(arr != NULL);
//	while (a--)
//	{
//		char* y = arr;
//		x = *y;
//		while (*(y + 1) != '\0')
//		{
//			*y = *(y + 1);
//			y++;
//		}
//		*y = x;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int a = 0;
//	scanf("%d", &a);
//	leftmove(arr, a);
//	printf("%s", arr);
//	return 0;
//}
#include <string.h>
int leftmove(char* str1, char* str2) 
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2) 
	{
		return 0;
	}
	strncat(str1, str1, len1);
	char* ret = strstr(str1, str2);
	if (ret == NULL) 
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}