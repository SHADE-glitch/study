#include<stdio.h>
#include<string.h>

int main()
{
	char target[]={'L','A','N','Q','I','A','O'};
	char *str;
	scanf("%s",str);
	
	    char *place;
		place=strchr(str,target[0]);
		int i=1;

	
		
		while(place!=NULL&&i<7)
		{
				place=strchr(place,target[i++]);
		}
		
	if(place==NULL)
	printf("Yes");
	else
	printf("No");
	
	
	
	return 0;
}



#include <stdio.h>
#include <string.h>

// �������ڼ���ַ����Ƿ����������"LANQIAO"
int containsLANQIAO(char *str) {
    int len = strlen(str);
    int i, j;
    char target[] = "LANQIAO";
    int targetLen = strlen(target);
    
    // �����ַ���
    for (i = 0; i < len; i++) {
        // ��鵱ǰ�ַ��Ƿ���Ŀ�������еĵ�һ���ַ�ƥ��
        if (str[i] == target[0]) {
            // �ӵ�ǰλ�ÿ�ʼ�����ʣ����ַ�
            for (j = 1; j < targetLen; j++) {
                // ������һ��ƥ����ַ�
                int k;
                for (k = i + 1; k < len; k++) {
                    if (str[k] == target[j]) {
                        // �ҵ�ƥ�䣬�ƶ�����һ���ַ�
                        i = k;
                        break;
                    }
                }
                // ���û���ҵ�ƥ�䣬����NO
                if (k == len) {
                    return 0;
                }
            }
            // �ҵ������������У�����YES
            return 1;
        }
    }
    // û���ҵ������У�����NO
    return 0;
}

int main() {
    char str[1001]; // �����ַ������Ȳ�����1000
    scanf("%s", str); // ��ȡ������ַ���
    
    if (containsLANQIAO(str)) {
        printf("YES\n"); // �������LANQIAO�����YES
    } else {
        printf("NO\n"); // �������NO
    }
    
    return 0;
}
























