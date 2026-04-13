#include <stdio.h> 

int main() {
    int matriz[2][2] = {{1, 2}, {3, 4}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Ingrese valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0; 
}
