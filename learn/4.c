//#include<stdio.h>
//#define MAXLINE 1000
//int getline(char line[],int max);
//int strindex(char source[],char searchfor[]);
//char pattern[]="ould";
//main()
//{
//	char line[MAXLINE];
//	int found=0;
//	while (getline(line,MAXLINE)>0)
//	{
//		if(strindex(line,pattern)>=0)
//		{
//			printf("%s",line);
//			found++;
//		}
//
//	}
//	return found;
//}



//int getline(char s[],int lim)
//{
//	int c,i;
//	i=0;
//	while(--lim>0&&(c=getchar())!=EOF&&c!='\n')
//	s[i++]=c;
//	if(c=='\n')
//	s[i++]=c;
//	s[i]='\0';
//	return i;
//}
//





//int strindex(char s[],char t[])
//{
//	int i,j,k;
//	for(i=0;s[i]!='\0';i++)
//	{
//		for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
//		;
//		if(k>0&&t[k]=='\0')
//		return i;
//	}
//	return -1;
//}







//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	char c=getch();
//	printf("%c",c);
//}







//#include <stdio.h>
//
//#define BUFSIZE 100
//
//char buf[BUFSIZE]; /* ����ungetch�����Ļ����� */
//int bufp = 0; /* buf����һ������λ�� */
//
//int getch(void) /* ȡһ���ַ���������ѹ�ص��ַ��� */ {
//    return (bufp > 0) ? buf[--bufp] : getchar();
//}
//
//void ungetch(int c) /* ���ַ�ѹ�ص������� */ {
//    if (bufp >= BUFSIZE) {
//        printf("ungetch: too many characters\n");
//    } else {
//        buf[bufp++] = c;
//    }
//}
//
//int main()
//{
//	int c;c=getch();
//	printf("%c",c);
//	ungetch(c);
//	printf("%c",c);
//	return 0;
//}



#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFSIZE) {
        printf("ungetch: too many characters\n");
    } else {
        buf[bufp++] = c;
    }
}

int main() {
    printf("Enter characters: ");
    int c;
    while ((c = getch()) != '\n') {
        if (c == 'a') {
            ungetch(c); // ���ַ� 'a' ѹ�ص����뻺����
            printf("Found 'a', pushing back to buffer.\n");
           //c = getch(); // ��һ���ַ����ٴζ�ȡ 'a'
        }
        c=getchar();
        printf("%c", c);
    }
    return 0;
}










































