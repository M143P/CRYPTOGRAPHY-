#include <stdio.h>
#include <string.h>
char matrix[5][5];
void createMatrix(char key[]) {
    int used[26] = {0}, k = 0, i, j;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            while (used[key[k] - 'A'] && k < strlen(key)) k++;
            matrix[i][j] = (k < strlen(key)) ? key[k++] : 'A' + i * 5 + j;
            used[matrix[i][j] - 'A'] = 1;
        }
}
void displayMatrix() {
    printf("Playfair Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    char key[] = "KEYWORD";
    createMatrix(key);
    displayMatrix();
    return 0;
}
