#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int countSubstringOccurrences(const char* str, const char* substr) {
    int count = 0;  
    int substrLen = strlen(substr);  


    while (*str) {  
        if (strncmp(str, substr, substrLen) == 0) {
            count++;  
        }
        str++;  
    }

    return count; 
}

int test() {
    char str[1001];  
    char substr[1001]; 

   
    printf("주어진 문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    printf("찾고자 하는 부분 문자열을 입력하세요: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';  

   
    int occurrences = countSubstringOccurrences(str, substr);
    
    printf("부분 문자열 \"%s\"이(가) \"%s\"에 %d번 등장합니다.\n", substr, str, occurrences);

    return 0;
}
