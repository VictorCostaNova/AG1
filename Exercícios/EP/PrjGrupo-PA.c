//Victor Costa 
//João Pedro Bianchini  
//Lucas Tonin Leite 

#include <stdio.h>
#include <string.h>
#define MAX 10
int contagem = 0;
int contagem1 = 0;
int contagem2 = 0;
int contagemm = 0;

const char * entrada[] = {
    "Carro",
    "Livro",
    "Cinema",
    "Arvore",
    "Avenida",
    "Escola",
    "Antena",
    "Prancheta",
    "Bola",
    "ocidental",
};


static void InsertionSort (const char ** array, int size)
{
    int j;
    for (j = 1; j < size; j++) {
	int i;
	const char * k;
	k = array[j];
	for (i = j - 1; i >= 0; i--) {
	    if (strcasecmp (array[i], k) < 0) {
		break;
	    }
	    array[i + 1] = array[i];
	    contagem++;
	}
	array[i + 1] = k;
    }
}

  
void Merge(char* arr[],int low,int mid,int high) 
{
    int nL= mid-low+1;
    int nR= high-mid;

    char** L=malloc(sizeof(char *)*nL);
    char** R=malloc(sizeof(char *)*nR);
    int i;
    for(i=0;i<nL;i++)
    {
        L[i]=malloc(sizeof(arr[low+i]));
        strcpy(L[i],arr[low+i]);
        contagem1++;
    }
    for(i=0;i<nR;i++)
    {
        R[i]=malloc(sizeof(arr[mid+i+1]));
        strcpy(R[i],arr[mid+i+1]);
        contagem2++;
    }
    int j=0,k;
    i=0;
    k=low;
    while(i<nL&&j<nR)
    {
        if(strcmp(L[i],R[j])<0)strcpy(arr[k++],L[i++]);
        else strcpy(arr[k++],R[j++]) ;
        contagemm++;

    }
    while(i<nL)strcpy(arr[k++],L[i++]);
    while(j<nR)strcpy(arr[k++],R[j++]);


}

void MergeSort(char* arr[],int low,int high) 
{
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}

static void printent (const char ** array, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf ("%d: %s\n", i, array[i]);
    }
}

int main ()
{
    int sizestr = (sizeof (entrada) / sizeof (const char *));
    printf ("Ordem de entrada das palavras:\n\n");
    printent (entrada, sizestr);
    InsertionSort (entrada, sizestr);
    printf ("\nOrdem das palavras depois do Insertion:\n\n");
    printent (entrada, sizestr);
    printf("Quantidade de passos: %d.", contagem);

    int size = 10;  
    char** arr = malloc(sizeof size); 
    printf("\nDigite 10 Palavras: ");
    int i;
    for(i=0;i<size;i++)
    {
        arr[i]=malloc(sizeof(char)*MAX);
        printf("\nDigite a Palavra %d: ",i);
        scanf("%s",arr[i]);
    }

    MergeSort(arr,0,size-1);
    printf("\nAs palavras ordenadas com o merge: \n");
    printent (arr, size);
    printf("Quantidade de passos 1: %d.\n", contagem1);
    printf("Quantidade de passos 2: %d. \n", contagem2);
     printf("Quantidade de passos M: %d. \n", contagemm);

    return 0;
}


