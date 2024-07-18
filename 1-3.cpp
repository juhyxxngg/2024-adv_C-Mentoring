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

   
    printf("�־��� ���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    printf("ã���� �ϴ� �κ� ���ڿ��� �Է��ϼ���: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';  

   
    int occurrences = countSubstringOccurrences(str, substr);
    
    printf("�κ� ���ڿ� \"%s\"��(��) \"%s\"�� %d�� �����մϴ�.\n", substr, str, occurrences);

    return 0;
}
