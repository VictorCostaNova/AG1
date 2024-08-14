//Victor Costa Nova 

#include <stdio.h>


void part2way (int v[], int n)
{
    int vmen[n];
    int vmai[n];
    int i = 0;
    int j = 0;
    int k = 0;
    int p = v[0];


    for (i=1; i < n; i++)
        if (v[i] <= p) 
        {
            vmen[j++] = v[i];    //Valores adicionados a vmen menores ou iguais a p
        }
        else 
        {
            vmai[k++]=v[i];      //Valores adicionados a vmai maiores ou iguais a p
        }
    int szemen = j;
    int szemai = k;
    k=j=i=0;

    while (j<szemen)           //Valores de vmen copiados de volta
    {
        v[i++] = vmen[j++];
    }
    v[i++] = p;                //Valor de p copiado de volta
    while (k<szemai)           //Valores de vmai copiados de volta
    {
        v[i++] = vmai[k++];
    }
}

int main()
{
    int vet[6]={3,2,5,1,4,9};
    int n = 6;
    printf("\nVetor Inicial: -");
    for (int i = 0; i < n; i++)
    {
         printf("%d", vet[i]);
         printf("-");
    }    
    part2way (vet, n);
    printf("\nPart2way: -");
    for (int i = 0; i < n; i++)
    {
         printf("%d", vet[i]);
         printf("-");
    }    
}