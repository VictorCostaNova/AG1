//Victor Costa Nova 

#include <stdio.h>

void merge2way(int vetora[], int vetorb[], int sizea, int sizeb, int vetorc[])
{
    for (int i = 0, j = 0, x = 0; x < sizea+sizeb; x++)
    {
        if (i==sizea)
        {
            vetorc[x]=vetorb[j++];
            continue;
        }
        if (j==sizeb)
        {
            vetorc[x]=vetora[i++];
            continue;
        }
    
        if (vetora[i] < vetorb[j])
            vetorc[x] = vetora[i++];  
        else if (vetorb[j] < vetora[i])
            vetorc[x] = vetorb[j++];   
    }  
     
}

int main()
{
    int veta[3] = { 1,5,8 };
    int vetb[3] = { 26,6,99 };
    int vetc[6];
    int sza = 3;
    int szb = 3;
    merge2way (veta, vetb, sza, szb, vetc);
    printf("Valores ordenados: -");
    for (int x = 0; x < sza + szb; x++)
    {
         printf("%d", vetc[x]);
         printf("-");
    }    
}