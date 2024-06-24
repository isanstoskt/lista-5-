#include <stdio.h>

int main() {
    
    for (int linha = 1; linha <= 10; linha++) {
      
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
