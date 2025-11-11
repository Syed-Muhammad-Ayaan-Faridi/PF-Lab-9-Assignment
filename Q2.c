#include <stdio.h>

float studentStanding(int array[], int upperbound)
{
    int marks,Total = 0;
    float avgMarks=0.0;
    printf("Enter your 3 subject marks between 0 to 100\n");
    for (int i = 0; i<(upperbound-1); i++)
    {
        printf("Enter your marks of subject %d: ", (i + 1));
        scanf("%d", &array[i]);
        while ((array[i] < 0) || (array[i] > 100))
        {
            printf("Re-enter your marks of subject %d between 0-100: ", (i + 1));
            scanf("%d", &array[i]);
        }
        Total += array[i];
    }
    avgMarks = (float)Total/(upperbound-1);
    // printf("Average marks: %.2f\n",avgMarks);
    //Checking fail codition wrt Marks
    for (int i = 0; i < (upperbound-1); i++)
    {
        if (array[i] <= 40)
        {
            printf("Fail\n");
            printf("Reason: Failed asyu have less than 40 marks in subject %d\n",(i+1));
            return avgMarks;
        }
    }
    //Checking failed condition wrt Average marks
    if (avgMarks > 50.0)
    {
        printf("Passed\n");
    }
    else
    {
        printf("FAILED\nReason: Failed as your average marks is less than 50\n");
    }
    return avgMarks;
}

int main()
{
    int marks[4], mark;
    printf("Average Marks: %.2f\n",studentStanding(marks,4));
    return 0;
}
