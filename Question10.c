#include <stdio.h>

int main() {
    // Step 1: Create 3x4 grid
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int *p = &grid[0][0];

    printf("Accessing elements using pointer:\n");
    printf("%d \n", *p);        
    printf("%d \n", *(p + 5));  
    printf("%d\n", *(p + 10)); 
    int *p2 = &grid[1][0];
    printf("Accessing via positive and negative indexing:\n");
    printf("%d \n", p2[2]);   // *(p2 + 2) → 7
    printf("%d\n", p2[-1]); // *(p2 - 1) → 4
    printf("Numbers divisible by 3 in the grid:\n");
    for (int i = 0; i < 12; i++) {
        if (*(p + i) % 3 == 0)
            printf("%d \n", *(p + i));
    }
    // printf("\n");
    int last = *(*(grid + 2) + 3);
    printf("Last element accessed: %d", last);

    return 0;
}