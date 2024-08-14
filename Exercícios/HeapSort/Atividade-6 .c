//Victor Costa Nova 


  #include <stdio.h>
  
  
  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void heap(int vet[], int n, int i) {
    int lgst = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && vet[left] > vet[lgst])
      lgst = left;
  
    if (right < n && vet[right] > vet[lgst])
      lgst = right;
  
    
    if (lgst != i) {
      swap(&vet[i], &vet[lgst]);
      heap(vet, n, lgst);
    }
  }
  
  
  void heapSort(int vet[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      heap(vet, n, i);
  
    
    for (int i = n - 1; i >= 0; i--) {
      swap(&vet[0], &vet[i]);
  
      heap(vet, i, 0);
    }
  }
  
  void printvet(int vet[], int n) {
    for (int i = 0; i < n; ++i)
    {
      printf("%d ", vet[i]);
    }
    printf("\n");
  }
  
    int main() {
    int vet[] = {1, 2, 9, 3, 5, 1, 9, 4, 11, 6, 8, 3,7};
    int n = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor inicial: \n");
    printvet(vet, n);

    heapSort(vet, n);
  
    printf("Vetor ordenado: \n");
    printvet(vet, n);
  }