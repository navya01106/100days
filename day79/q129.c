//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    int n, s = 0, cnt = 0;
    float avg;
    FILE *f;
    
    f = fopen("numbers.txt", "r");
    
    if (f == NULL) {
        printf("Error! Could not open numbers.txt\n");
        return 1;
    }
    
    while (fscanf(f, "%d", &n) == 1) {
        s += n;
        cnt++;
    }
    
    fclose(f);
    
    if (cnt == 0) {
        printf("No numbers found in file.\n");
        return 1;
    }
    
    avg = (float)s / cnt;
    
    printf("Sum: %d\n", s);
    printf("Average: %.2f\n", avg);
    
    return 0;
}