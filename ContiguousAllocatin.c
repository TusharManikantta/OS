#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f[50], st, len, i, j, count = 0, c, k;

    for (i = 0; i < 50; i++)
    {
        f[i] = 0;
    }
    printf("Files Allocated are: ");
x:
    count = 0;
    printf("Enter the starting block and the length of the file: ");
    scanf("%d%d", &st, &len);

    for (k = st; k < st + len; k++)
    {
        if (f[k] == 0)
        {
            count++;
        }
    }

    if (len == count)
    {
        for (j = st; j < st + len; j++)
        {
            if (f[j] == 0)
            {
                f[j] = 1;
                printf("%d\t%d\n", j, f[j]);
            }
        }
        if (j != (st + len - 1))
        {
            printf("File allocated to the disk\n");
        }
        else
        {
            printf("File not allocated to the disk\n");
        }
        printf("Do you want to enter more files? (1/0): ");
        scanf("%d", &c);
        if (c == 1)
        {
            goto x;
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
