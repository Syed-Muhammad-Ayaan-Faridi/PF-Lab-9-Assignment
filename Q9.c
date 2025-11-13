#include <stdio.h>

int main() {
    int num1 = 100, num2 = 200, num3 = 300;
    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;
    int *temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;
    *p1 = *p1 + 50;
    *p2 = *p2 - 100;
    *p3 = *p3 * 3;
    p1 = &num3;
    p2 = &num1;
    p3 = &num2;
    *p1 += 25;
    *p2 -= 50;
    *p3 *= 2;
    printf("Final values:\n");
    printf("num1 = %d\n", num1);
    printf("b = %d\n", num2);
    printf("c = %d\n", num3);

    return 0;
}
