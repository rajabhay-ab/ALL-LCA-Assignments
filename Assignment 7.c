#include <stdio.h>

struct Student
{
    int roll;
    int m1, m2, m3;
    char name[30];
    int total;
    float per;
};

int main()
{
    int i, n;

    printf("------------Student information ----------");
    printf("\n enter the no of records : ");
    scanf("%d", &n);

    struct Student strarr[n];

    for (i = 0; i < n; i++)
    {
        printf("enter the roll no of student :");
        scanf("%d", &strarr[i].roll);

        printf("enter the marks of 3 subjects :");
        scanf("%d%d%d", &strarr[i].m1, &strarr[i].m2, &strarr[i].m3);

        printf("enter the name of student:");
        scanf("%s", strarr[i].name);

        strarr[i].total = strarr[i].m1 + strarr[i].m2 + strarr[i].m3;
        strarr[i].per = strarr[i].total / 3.0;
    }

    printf("\n\n%-8s | %-12s | %-4s %-4s %-4s | %-6s | %-8s | %-6s |",
           "roll no", "name", "m1", "m2", "m3", "total", "per", "result");

    for (i = 0; i < n; i++)
    {
        printf("\n%-8d | %-12s | %-4d %-4d %-4d | %-6d | %-8.2f | ",
               strarr[i].roll, strarr[i].name, strarr[i].m1,
               strarr[i].m2, strarr[i].m3, strarr[i].total, strarr[i].per);

        if (strarr[i].per < 20)
        {
            printf("fail  |");
        }
        else
            printf("pass  |");
    }
    printf("\n");
    return 0;
}
