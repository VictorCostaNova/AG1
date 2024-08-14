//Victor Costa Nova 
#include <stdio.h>


int partition (int A[], int p, int r)
{
    int x = A[r];  
    int i = (p - 1);  
                   
    int j;

    for (int j = p; j <= r- 1; j++)
    {
        
        if (A[j] < x)
        {
            i++;    
            A[i] = A[j];
        }
    }
    A[i + 1] = A[r];
    return (i + 1);
}


int main()
{
    int vet[6]={1,2,9,3,4,5};
    int p = 0;
    int r = 5;
    printf("\nVetor Inicial: -");
    for (int i = 0; i < 6; i++)
    {
         printf("%d", vet[i]);
         printf("-");
    }    
    partition (vet, p,r);
    printf("\nPartition: -");
    for (int i = 0; i < 6; i++)
    {
         printf("%d", vet[i]);
         printf("-");
    }    
}