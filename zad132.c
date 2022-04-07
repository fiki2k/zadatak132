// Program treba ispisat elemente na dijagonali.

#include<stdio.h>

int main()
{
    int A[10][10],i,j,m,n;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nElementi na dijagonali matrice su: \n\n");

    // Uvjet da je matrica kvadratna.
    if(m==n)
    {
            // Ispis dijagonale
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j)
                        printf("\t%d", A[i][j]);    // Ispis elemenata.
                    else
                        printf("\t"); 
                }
                printf("\n\n");   // Nakon svakog reda ispisi novu liniju
            }
    }
    else
    {
        printf("\nMatrica nije kvadratna");
    }

    return 0;
}
