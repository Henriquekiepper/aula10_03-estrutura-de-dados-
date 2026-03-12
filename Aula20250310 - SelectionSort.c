/*
Refaça o algoritmo, invertendo a logica para ordenação pelo maior elemento (mantendo a ordem crescente no vetor ordenado). 
Determine o melhor e o pior caso para o SelectionSort?
A ordenação por seleção é estável?

*/


#include <stdio.h>
void ImprimeVetor(int *x, int n){
    printf("\nVetor [%d]: ", n);
    for(int i=0; i<n; i++){
        printf("| %d ", x[i]);
    }
    printf("| ");
}

void selectionSort(int *v, int n){
    int i , j, menor, troca;
    for(i=0; i<n-1;i++){
        menor = i;
        for(j=i+1; j<n ; j++ ){
            if(v[j]<v[menor]){
                menor = j;
            }
        }
        if(i!=menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
        
    }
}

int main()
{
    int vet[10] = {6,75,1,14,24,18,3,7,50,10};
    ImprimeVetor(vet, 10);
    selectionSort(vet, 10);
    ImprimeVetor(vet, 10);
    
    
    return 0;
}







/*
o exercicio la de cima
//
#include <stdio.h>

void ImprimeVetor(int *x, int n){
    printf("\nVetor [%d]: ", n);
    for(int i=0; i<n; i++){
        printf("| %d ", x[i]);
    }
    printf("| ");
}

void selectionSortInverso(int *v, int n){
    int i, j, maior, troca;
    // Percorre do último índice até o segundo (0 é o que sobra)
    for(i = n - 1; i > 0; i--){
        maior = i; 
        // Procura o maior elemento entre o índice 0 e i
        for(j = 0; j < i; j++ ){
            if(v[j] > v[maior]){
                maior = j;
            }
        }
        // Troca o maior encontrado com a posição i (o final da parte não ordenada)
        if(i != maior){
            troca = v[i];
            v[i] = v[maior];
            v[maior] = troca;
        }
    }
}

int main() {
    int vet[10] = {6, 75, 1, 14, 24, 18, 3, 7, 50, 10};
    ImprimeVetor(vet, 10);
    selectionSortInverso(vet, 10);
    ImprimeVetor(vet, 10);
    
    return 0;
}*/
