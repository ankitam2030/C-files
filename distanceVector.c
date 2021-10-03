#include <stdio.h>

struct Router
{
    unsigned dist[20];
    unsigned from[20];
} route[10];

void startMessage()
{
    printf("=====================================\n");
    printf("              19BCE0565\n");
    printf("=====================================\n\n");
}

int main()
{
    int distMatrix[20][20];
    int numOfNodes, i, j, k, count = 0;

    startMessage();
    printf("\nEnter the number of nodes : ");
    scanf("%d", &numOfNodes);

    // Get Distance Matrix
    printf("\nEnter the distance matrix :\n");
    for (i = 0; i < numOfNodes; i++)
    {
        for (j = 0; j < numOfNodes; j++)
        {
            scanf("%d", &distMatrix[i][j]);
            distMatrix[i][i] = 0;
            route[i].dist[j] = distMatrix[i][j];
            route[i].from[j] = j;
        }
    }

    do
    {
        count = 0;
        for (i = 0; i < numOfNodes; i++) 
            for (j = 0; j < numOfNodes; j++)
                for (k = 0; k < numOfNodes; k++)
                    if (route[i].dist[j] > distMatrix[i][k] + route[k].dist[j])
                    { 
                        // Calculate the minimum distance
                        route[i].dist[j] = route[i].dist[k] + route[k].dist[j];
                        route[i].from[j] = k;
                        count++;
                    }
    } while (count != 0);

    // Display Distance Vectors 
    for (i = 0; i < numOfNodes; i++)
    {
        printf("\n\n For router %d\n", i + 1);
        for (j = 0; j < numOfNodes; j++)
        {
            printf("\t\nnode %d via %d Distance %d ", j + 1, route[i].from[j] + 1, route[i].dist[j]);
        }
    }
    printf("\n\n");
}
