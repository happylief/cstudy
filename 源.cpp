#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char arr[20];
//	int a=0;
//	printf("输入字符串个数：");
//	scanf("%d", &a);
//	printf("输入字符串:");
//	scanf("%s", &arr);
//	while (a > 0)
//	{
//		a--;
//		printf("%c\n", arr[a]);
//	}
//	
//	return 0;
//}
//char fib(char a[],char b[])
//{

//
//}


//int main()
//{
//	char a[] = {0};
//	
//	return 0;
//}



//int main(void)
//{
//	int a = 20;
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	char *pa = "abc";
//	char *pb = "abc";
//
//
//	printf("%p\n", &arr1+1);
//	printf("%p\n\n", arr1);
//
//	printf("%p\n", &arr2[0]);
//
//	printf("%p\n", &*pa);
//	printf("%p\n", &*pa + 1);
//
//	printf("%p\n", &pa);
//
//	printf("%p\n", &pb);
//
//	printf("%d\n", &a);
//	printf("%d\n", a);
//
//	return 0;
//
//}

//int main()
//{
//	int a=0;
//	a = 20;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0, 1, 2, 3 };
//	int *p = arr;
//	printf("%p\n", &arr[0]);
//	printf("%p\n",&arr[3]);
//	printf("%p\n", &arr+1);
//	printf("%d\n",*p + 1);
//
//	return 0;
//}



//int main()
//{
//	
//	for (int i = 0; i <= 5; i++) 
//	{
//		for (int j = 0; j < 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int m = 0; m < 2 * i + 1; m++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n, j, i;
//	printf("打印行数：\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= 2 * n - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int i=0, j=0, x=0;
//	scanf("%d", &x);
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


 /*  int main()
{
	int i = 0, j = 0, x = 0;
	printf("输入三角行数：");
	scanf("%d", &x);
	for (i = 0; i < x ; i++)
	{
		for(j = 0; j < x-i; j++)
		{
			printf(" ");
		}
		for (; j <= x+i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

//int main()
//{
//	int i = 0, j = 0, x = 0;
//	printf("输入三角行数：");
//	scanf("%d", &x);
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < x - i; j++)
//		{
//			printf(" ");
//		}
//		for (j=0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a= 0;
//	a = 20;
//	if (a == 1)
//	{
//		printf("1");
//	}
//	else if (a == 2)
//	{
//		printf("2");
//	}
//	else if (a == 3)
//	{
//		printf("3");
//	}
//	else if (a == 20)
//	{
//		printf("4");
//	}
//	else if (a == 20)
//	{
//		printf("5");
//	}
//	return 0;
//}



//void printBinary(int num);
//int main(int argc, const char * argv[]) 
//{
//	printBinary(13);
//}
//void printBinary(int num)
//{
//	int len = sizeof(int)* 8;
//	int temp;
//	for (int i = 0; i<len; i++) 
//	{
//		temp = num; //每次都在原数的基础上进行移位运算
//		temp = temp >> (31 - i); //每次移动的位数
//		int t = temp & 1; //取出最后一位
//		if (i != 0 && i % 4 == 0)
//		printf(" ");
//		printf("%d", t);
//	}
//}

//int main()
//{
//	int a = 0;
//	a =1;
//	a=a|1 << 2;
//
//	return 0;
//}

//int main()
//{
//	 char a =-128;//10000000
//	a -= 1;
//	printf("%d\n", a);
//	return 0;
//
//}
//#include <string.h>
//int search(int* nums, int numsLen, int target)
//{
//	  
//		int i = numsLen;
//		while (0 < numsLen)
//		{
//			if (*nums == target)
//			{
//				break;
//			}
//			else
//			{
//				numsLen--;
//				nums++;
//			}
//		}
//		if (numsLen != 0)
//			return i - numsLen;
//		else
//			return -1;
//	
//}

//int search(int* nums, int numsLen, int target);
//int main()
//{
//	int a[20] = { 0 }, b = 0, c = 0, d = 0,e=0;
//	scanf("%d", &c);
//	for (b = 0; b < c;b++)
//	scanf("%d",&a[b] );
//	scanf("%d", &d);
//	e=search(a, b, d);
//	printf("%d\n", e);
//	return 0;
//}
// int search(int* nums, int numsLen, int target)
//{
//	  
//	 int a = numsLen / 2, i;
//	 if (target >= *nums + a)
//	 {
//		 while (a<numsLen)
//		 {
//			 if (*nums + a == target)
//				 break;
//			 else
//				 a++;
//		 }
//	 }
//	 else
//	 {
//		 while (a>0)
//		 {
//			 if (*nums + a == target)
//				 break;
//			 else
//				 a--;
//		 }
//	 }
//	 return i - a;
//}
//int search(int* nums, int numsLen, int target);
//int main()
//{
//	int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8 }, b=0,c=8,d=0;
//
//	while (a[++b] != '\0');
//
//	printf("%d\n", b);
//
//	d= search(a, b, c);
//	printf("%d\n", d);
//
//	 return 0;
//}
//int search(int* nums, int numsLen, int target)
//{
//	int low = 0, high = numsLen - 1;
//	while (low <= high){
//		int mid = (low + high) / 2;
//		if (nums[mid] == target)
//			return mid;
//		else if (nums[mid]<target){
//			low = mid + 1;
//		}
//		else if (nums[mid] > target){
//			high = mid - 1;
//		}
//	}
//	return -1;
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1==arr2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	char *p1 = "abcdf";
//	char *p2 = "abcdf";
//	printf("%p\n",*p1);
//	printf("%p\n", *p2);
//	return 0;
//}



//int research(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//		return b;
//}
//int main()
//{
//	int a = 5, b = 2, c = 0;
//	c = research(a, b);
//	printf("%d", c);
//	return 0;
//
//}

//int prints(int (*arr)[5], int x, int y)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//			printf("%d ", *(arr[i] + j));
//			printf("%d ",(*(arr+i))[j]);
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	int a = 3, b = 5;
//	
//	prints(arr, a, b);
//	return 0;
//}

//
//#include <stdlib.h>
//#include <Windows.h>
//int main()
//{
//	int  i = 0;
//	while (1)
//	{
//		if (i % 4 == 0) {
//			printf(" *** *** \n");
//			printf("*********\n");
//			printf(" *******\n");
//			printf("  ****\n");
//			printf("   **\n");
//		}
//		else
//		{
//			printf("\n");
//			printf("   ** ** \n");
//			printf("  *******\n");
//			printf("   *****\n");
//			printf("    **\n");
//		}
//		Sleep(5);
//		i++;
//		system("cls");
//	}
//}

//int main()
//{
//	int(*arr1)[10];//这是一个指向含有十个int类型的数组的指针
//	int arr0[10];//这是一个含有十个int类型元素的数组
//	int(*arr[10])[5];//这是一个拥有十个元素的数组，该元素为指向含五个int类型元素的指针
//	return 0;
//}



//struct data
//{
//	int year;
//	int month;
//	int hour;
//	int minute;
//	int secnod;
//};
//struct borrow
//{
//	char book_name[30];
//	data out_data;
//	data back_data;
//	int time;
//
//};
//struct stu
//{
//	char name[20];
//	int age;
//	int phone;
//	/*borrow library*/;
//};
//char* my_strcpy(char*dest, const char*src)
//{
//	return dest;
//}
//
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	printf("%p\n", pf);
//	printf("%p\n", my_strcpy);
//	char* (*pfarr[10])(char*, const char*) = { my_strcpy};
//	return 0;
//
//}
//#include <windows.h>
//void main()
//{
//	struct student
//	{
//		char num[8];
//		char name[20];
//		char sex;
//		float score;
//	};
//	struct  student *p,stu1;
//	p = &stu1;
//	strcpy(stu1.num, "3021210");
//	strcpy(stu1.name, "Li Lin");
//	stu1.sex = 'M';
//	stu1.score = 91.5;
//	printf("No:%s\nName:%s\nSex:%c\nScore:%f\n", stu1.num, stu1.name, stu1.sex, stu1.score);
//	printf("No:%s\nName:%s\nSex:%c\nScore:%f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
//
//	system("pause");
//
//
//}

//int main()
//{
//	int(*pfarr[4])(int, int);//存放函数指针的数组
//	int(*(*ppfarr)[4])(int, int) = &pfarr;
//	int(*(*pppfarr[4])[4])(int, int);
//	return 0;
//}

//int main()
//{
//	char a, b;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%d", &b);
//	printf("%d\n", b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int compare(const void*e1, const void*e2)
//{
//	return  *(char*)e1 - *(char*)e2;
//}
////
//int main()
//{
//	char arr[] = "dcbafetuxy";
//	int sz = sizeof(arr) / sizeof(arr[0]),i=0;
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	for (i = 1; i < sz;i++)
//	printf("%c", arr[i]);
//	return 0;
//}
//void swap(char*a,char*b,int wide)
//{
//	int i;
//	
//	for (i = 0; i < wide; i++)
//	{
//		char c = *a;
//		*a = *b;
//		*b = c;
//		a++;
//		b++;
//	}
//}
//void buttle(void* base, int sz, int wide, int(*compare)(const void *e1, const void *e2))
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 1; j < -i - 1; j++)
//		{
//			if (compare((char*)base  + i*wide, (char*)base + i*wide + wide*j)>0)
//			{
//				swap((char*)base + i*wide,(char*)base + i*wide + wide*j,wide);
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buttle(arr, sz,sizeof(arr[0]), compare);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//struct node
//{
//	int data;
//	struct node * next;
//};
//int main()
//{;
//	struct node member, member1, member2;
//	member.data = 1;
//	member.next = &member1;
//	member.next->data = 2;
//	member.next->next = &member2;
//	return 0;
//
//}
//
//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2
//{
//	char c2;
//	char c1;
//	int a;
//};
//
//int main()
//{
//	struct s1 s = { 0 };
//	struct s2 d = { 0 };
//	printf("%d  %d", sizeof(s), sizeof(d));
//	return 0;
//}
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//
//};
//
//
//struct ListNode* ReverseList(struct ListNode* pHead)
//{
//	// write code here
//	if (pHead == NULL)
//		return pHead;
//	while (pHead!=NULL)
//	{
//		int a;
//		a = pHead->val;
//		pHead->val = pHead->next->val;
//		pHead->next->val = a;	
//	}
//	return pHead;
//
//}
//
//int main()
//{

//}



