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

// 函数用于检查字符串是否包含子序列"LANQIAO"
int containsLANQIAO(char *str) {
    int len = strlen(str);
    int i, j;
    char target[] = "LANQIAO";
    int targetLen = strlen(target);
    
    // 遍历字符串
    for (i = 0; i < len; i++) {
        // 检查当前字符是否与目标子序列的第一个字符匹配
        if (str[i] == target[0]) {
            // 从当前位置开始，检查剩余的字符
            for (j = 1; j < targetLen; j++) {
                // 查找下一个匹配的字符
                int k;
                for (k = i + 1; k < len; k++) {
                    if (str[k] == target[j]) {
                        // 找到匹配，移动到下一个字符
                        i = k;
                        break;
                    }
                }
                // 如果没有找到匹配，返回NO
                if (k == len) {
                    return 0;
                }
            }
            // 找到完整的子序列，返回YES
            return 1;
        }
    }
    // 没有找到子序列，返回NO
    return 0;
}

int main() {
    char str[1001]; // 假设字符串长度不超过1000
    scanf("%s", str); // 读取输入的字符串
    
    if (containsLANQIAO(str)) {
        printf("YES\n"); // 如果包含LANQIAO，输出YES
    } else {
        printf("NO\n"); // 否则输出NO
    }
    
    return 0;
}
























