#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void sieveOfEratosthenes(int n, bool prime[]) {
    

    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }

    


    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        
        if (prime[p] == true) {
            
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
}



void printPrimes(int n, bool prime[]) {
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N;
    printf("정수를 입력하세요 (2 <= N <= 1000): ");
    scanf("%d", &N);

    
    if (N < 2 || N > 1000) {
        printf("잘못된 입력입니다. 2와 1000 사이의 정수를 입력하세요.\n");
        return 1;
    }

    
    bool* prime = (bool*)malloc((N + 1) * sizeof(bool));
    if (prime == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    sieveOfEratosthenes(N, prime); 
    printf("1부터 %d까지의 소수:\n", N);
    printPrimes(N, prime); 

    free(prime); 

    return 0;
}

