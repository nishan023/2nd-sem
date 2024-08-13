// implementation of Dijkstra’s algorithm
#include <stdio.h>
#define INFINITY 999

void dij(int n, int v, int cost[10][10], int dist[]);

int main()
{
    int a, v, i, j, cost[10][10], dist[10];

    printf("\nEnter the number of nodes: ");
    scanf("%d", &a);
    printf("\nEnter the cost matrix:\n");

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
            {
                cost[i][j] = INFINITY;
            }
        }
    }

    printf("\nEnter the source node: ");
    scanf("%d", &v);

    dij(a, v, cost, dist);

    printf("\nShortest Paths from Node %d:\n", v);
    for (i = 1; i <= a; i++)
    {
        if (i != v)
        {
            printf("Node %d to Node %d, Cost = %d\n", v, i, dist[i]);
        }
    }

    return 0;
}

void dij(int n, int v, int cost[10][10], int dist[])
{
    int i, u, count, w, flag[10], min;

    for (i = 1; i <= n; i++)
    {
        flag[i] = 0;
        dist[i] = cost[v][i];
    }

    count = 2;

    while (count <= n)
    {
        min = INFINITY;
        for (w = 1; w <= n; w++)
        {
            if (dist[w] < min && !flag[w])
            {
                min = dist[w];
                u = w;
            }
        }

        flag[u] = 1;
        count++;

        for (w = 1; w <= n; w++)
        {
            if ((dist[u] + cost[u][w] < dist[w]) && !flag[w])
            {
                dist[w] = dist[u] + cost[u][w];
            }
        }
    }
}
