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






//// reverse�����������ַ���s�и����ַ���λ��
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
////#include<string.h> // ����ͷ�ļ����ṩstrlen����������
//

//void reverse(char s[]) {
//    int c, i, j;
//    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
//        c = s[i]; // ����s[i]��ֵ
//        s[i] = s[j]; // ��s[j]��ֵ����s[i]
//        s[j] = c; // �������s[i]��ֵ����s[j]
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
//        printf("%d ", integer[i]);  // ע�������ӡ���Ǳ���ֵ�������ǵ�ַ
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
//////start_over: // �����ǩ
//////{
//////	printf("Value of i: %d\n", i);
//////    i++;
//////}
////    if (i < 5) {
////        goto error; // ʹ��goto��ת����ǩ
////    }\
//
//char a="-123456";
//printd(a);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h> // �����׼�⣬�Ա�ʹ�� atoi ����

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
    int num = atoi(a); // ���ַ��� a ת��Ϊ����
    printd(num);

    return 0;
}













