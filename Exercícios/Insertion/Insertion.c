//Victor Costa 
//João Pedro Bianchini 
//Lucas Tonin Leite 

#include <stdio.h>
#include <string.h>
int contagem = 0;

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
    "Medico",
    "Navegar",
    "Rato",
    "Segundo",
    "Tecido",
    "Quarentena",
    "Rainha",
    "Dado",
    "Legado"
};

static void printent (const char ** array, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf ("%d: %s\n", i, array[i]);
    }
}
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
int main ()
{
    int sizestr = (sizeof (entrada) / sizeof (const char *));
    printf ("Ordem de entrada das palavras:\n\n");
    printent (entrada, sizestr);
    InsertionSort (entrada, sizestr);
    printf ("\nOrdem das palavras depois do Insertion:\n\n");
    printent (entrada, sizestr);
    printf("Quantidade de passos: %d.", contagem);
    return 0;
}