// Program for union
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], b[10], c[20];
    int i, j, k = 0, n1, n2;
    printf(" *****UNION OF SET A AND B*****\n");
    printf(" ...............................\n");
    printf("Enter the number of elements in set A: ");
    scanf("%d", &n1);
    printf("Enter the elements of set A: "); // taking input set A
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter the number of elements in set B: "); // taking input set B
    scanf("%d", &n2);
    printf("Enter the elements of set B: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    // Logic to calculate union
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (c[j] == a[i])
                break;
        }
        if (j == k)
        {
            c[k] = a[i];
            k++;
        }
    }
    // Copy elements of set B into set C
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (c[j] == b[i])
                break;
        }
        if (j == k)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("Union of set A and B is: "); // printing of union of set A and set B
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    getch();
}