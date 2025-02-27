#include <stdio.h>

// Função para verificar se um número está no array
int ElementoEscolhido(int arr[], int tamanho) {
    if (tamanho == 0) return -1; // Retorna -1 se o array estiver vazio
    
    int numero_sugerido = 7; // Lê o número que o usuário deseja encontrar

    int numero_achado = -1; // Inicializa com -1 (caso o número não seja encontrado)

    for (int i = 0; i < tamanho; i++) { // Percorre todo o array
        if (arr[i] == numero_sugerido) { // Verifica se o número está no array
            numero_achado = numero_sugerido;
            break; // Para o loop assim que encontrar o número
        }
    }
    
    return numero_achado; // Retorna o número encontrado ou -1 se não estiver no array
}

int main() {
    int numeros[] = {5, 2, 9, 1, 6}; // Definição do array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Cálculo do tamanho do array

    int numero_encontrado = ElementoEscolhido(numeros, tamanho); // Chama a função

    if (numero_encontrado != -1) {
        printf("O número %d foi encontrado no array.\n", numero_encontrado);
    } else {
        printf("O número não foi encontrado no array.\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
