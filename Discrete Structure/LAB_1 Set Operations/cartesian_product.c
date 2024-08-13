// cartesian_product
#include <stdio.h>
void cartesian()
{
    int a[10], b[10], n1, n2;
    printf("***** CARTESIAN PRODUCT *****");
    printf("\nEnter size of set A :");
    scanf("%d", &n1);
    printf("Enter elements of set A:");
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of set B:");
    scanf("%d", &n2);
    printf("Enter elements of set B:");
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    // Logic for cartesian product
    printf("{");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("(%d, %d)", a[i], b[j]);
            if (i != n1 - 1 || j != n2 - 1)
                printf(", ");
        }
    }
    printf("}");
}
int main()
{
    cartesian();
    return 0;
}
