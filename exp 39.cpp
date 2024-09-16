#include <stdio.h>
#include <math.h>
int main() {
    int totalLetters = 25;
    double possibleKeys = 1;
    for (int i = 1; i <= totalLetters; i++) {
        possibleKeys *= i;
    }
    double log2Keys = log2(possibleKeys);
    printf("Total possible keys (ignoring identical keys): %.0f (~2^%.0f)\n", possibleKeys, log2Keys);
    double uniqueKeys = possibleKeys / 2; 
    double log2UniqueKeys = log2(uniqueKeys);
    printf("Effectively unique keys: %.0f (~2^%.0f)\n", uniqueKeys, log2UniqueKeys);
    return 0;
}
