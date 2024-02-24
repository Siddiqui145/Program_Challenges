#include <stdio.h>

int main() {
    int i, j;
   
    printf("Enter an integer pair: ");
    scanf("%d %d", &i, &j);
   
    printf("Numbers: %d %d\n", i, j);
    int maxcount = 0;
   
    for (int num = i; num <= j; num++) {
        int count = 1;
        int n = num;   
       
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            }
            else {
                n = 3 * n + 1;
            }
            count++;
        }
       
        if (count > maxcount) {
            maxcount = count;
        }
    }
   
    printf("Total Count: %d\n", maxcount);
    return 0;
}

