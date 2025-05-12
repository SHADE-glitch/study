//atoi
//#include<stdio.h>
//#include<ctype.h>
//int atoi(char  s[])
//{
//	int i,n,sign;
//	for(i=0;isspace(s[i]);i++)
//	;
//	sign=(s[i]=='-')?-1:1;
//	if(s[i]=='+'||s[i]=='-')
//	i++;
//	for(n=0;isdigit(s[i]);i++)
//	n=10*n+(s[i]-'0');
//	return sign*n;
//}
//
//
//int main()
//{
//	char s[]="         1234/hello567w";
//	int a=atoi(s);
//	printf("%s\n%d",s,a);
//	
//	return 0;
//}






//// reverse函数：倒置字符串s中各个字符的位置
//#include<stdio.h>
//#include<string.h>
////void shellsort (int v[],int n)
////{
////	int gap,i,j,temp;
////	for(gap=n/2;gap>0;gap/=2)
////	for(i=gap;i<n;i++)
////	for(i=i-gap;j>=0&&v[j]>v[j+gap];j-gap)
////	{
////		temp=v[j];
////		v[j]=v[j+gap];
////		v[j+gap]=temp;
////	}
////}
////#include<string.h> // 包含头文件，提供strlen函数的声明
//

//void reverse(char s[]) {
//    int c, i, j;
//    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
//        c = s[i]; // 保存s[i]的值
//        s[i] = s[j]; // 将s[j]的值赋给s[i]
//        s[j] = c; // 将保存的s[i]的值赋给s[j]
//    }
//}
//
//int main()
//{
//	char str[]="apples";
//	reverse(str);
//	printf("%s",str);
////	int a=5;
////	int integer[a]={4,9,2,1,7};
////	shellsort(integer,a);
////	for(int i=0;i<a;i++)
////	printf("%d",integer[i]);
//	
//	
//	return 0;
//}
//
//












//shellsort
//#include <stdio.h>
//
//void shellsort(int v[], int n) {
//    int gap, i, j, temp;
//    for (gap = n / 2; gap > 0; gap /= 2) {
//        for (i = gap; i < n; i++) {
//            temp = v[i];
//            for (j = i; j >= gap && v[j - gap] > temp; j -= gap) {
//                v[j] = v[j - gap];
//            }
//            v[j] = temp;
//        }
//    }
//}
//
//int main() {
//    int a = 5;
//    int integer[5] = {4, 9, 2, 1, 7};
//    shellsort(integer, a);
//    for (int i = 0; i < a; i++) {
//        printf("%d ", integer[i]);  // 注意这里打印的是变量值，而不是地址
//    }
//    printf("\n");
//    return 0;
//}




//void sellsort(int integer[],int n)
//{
//	int gap,i,j,temp;
//	for(i=gap/2;gap>0;gap/=2)
//	{
//		for(j=i;j<n;j-=gap)
//		{
//			temp=integer[j];
//			for()
//		}
//	}
//}




//itoa
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char str[]={'2','4','e','5','f','z','a','6','3'};
//	printf("%d\n",atoi(str));
////	printf("%c",itoa(str));
//}

//#include <stdio.h>
//void printd(int n)
//{
//	if(n<0)
//	{
//		putchar('-');
//		n=-n;
//		
//	}
//	if(n/10)
//	printd(n/10);
//	putchar(n%10+'0');
//	
//}
//int main() {
////    int i = 0;
////    
////    printf("Value of i: %d\n", i);
////    i++;
//////start_over: // 定义标签
//////{
//////	printf("Value of i: %d\n", i);
//////    i++;
//////}
////    if (i < 5) {
////        goto error; // 使用goto跳转到标签
////    }\
//
//char a="-123456";
//printd(a);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h> // 引入标准库，以便使用 atoi 函数

void printd(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        printd(n / 10);
    putchar(n % 10 + '0');
}

int main() {
    char a[] = "-123456";
    int num = atoi(a); // 将字符串 a 转换为整数
    printd(num);

    return 0;
}













