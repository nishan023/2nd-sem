// A Program to represent a Graph by using an Adjacency Matrix method
#include <stdio.h>
#include <stdlib.h>
// Function prototypes
void dirgraph();
void undirgraph();
void readgraph(int adjmat[50][50], int n);

int main()
{
    int option;

    do
    {
        printf("\n A Program to represent a Graph by using an Adjacency Matrix method \n");
        printf("\n 1. Directed Graph ");
        printf("\n 2. Un-Directed Graph ");
        printf("\n 3. Exit ");
        printf("\n\n Select a proper option : ");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            dirgraph();
            break;
        case 2:
            undirgraph();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n Invalid option. Please select 1, 2, or 3.\n");
            break;
        }
    } while (1);
}

void dirgraph()
{
    int adjmat[50][50];
    int n, indeg, outdeg, i, j;

    printf("\n How Many Vertices?: ");
    scanf("%d", &n);

    readgraph(adjmat, n);

    printf("\n Vertex \t InDegree \t OutDegree \t TotalDegree ");
    for (i = 1; i <= n; i++)
    {
        indeg = outdeg = 0;
        for (j = 1; j <= n; j++)
        {
            if (adjmat[j][i] == 1)
                indeg++;
        }

        for (j = 1; j <= n; j++)
            if (adjmat[i][j] == 1)
                outdeg++;

        printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n", i, indeg, outdeg, indeg + outdeg);
    }
}

void undirgraph()
{
    int adjmat[50][50];
    int deg, i, j, n;

    printf("\n How Many Vertices: ");
    scanf("%d", &n);
    readgraph(adjmat, n);

    printf("\n Vertex \t Degree ");
    for (i = 1; i <= n; i++)
    {
        deg = 0;
        for (j = 1; j <= n; j++)
            if (adjmat[i][j] == 1)
                deg++;

        printf("\n\n %d \t\t %d\n\n", i, deg);
    }
}
void readgraph(int adjmat[50][50], int n)
{
    int i, j;
    char reply;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
                adjmat[i][j] = 0;
            else
            {
                printf("\n Vertices %d & %d are Adjacent ? (Y/N) : ", i, j);
                fflush(stdin);
                scanf(" %c", &reply);

                if (reply == 'Y' || reply == 'y')
                    adjmat[i][j] = 1;
                else
                    adjmat[i][j] = 0;
            }
        }
    }
    return 0;
}
