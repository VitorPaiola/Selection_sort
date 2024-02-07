#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale.h>
#define TAM 10

using namespace std;

static void imprime_vetor(int vetor[]) {
	cout << "\n";
	for (int i = 0; i < TAM; i++) {
		cout << " |" << vetor[i] << "| ";
	}
}

static void selection_sort(int vetor[TAM]) {

	int posicaoDoMenorValor, aux, i, j;

	for (i = 0; i < TAM; i++) {

		// Recebe a posição inicial para o menor valor
		posicaoDoMenorValor = i;

		// Analisa os elementos na frente
		for (j = i + 1; j < TAM; j++) {

			// Caso encontre um valor menor na frente dos analisados
			if (vetor[j] < vetor[posicaoDoMenorValor]) {
				posicaoDoMenorValor = j;
			}

		}

		// Verifica se houve mudança e troca os valores
		if (posicaoDoMenorValor != i) {
			aux = vetor[i];
			vetor[i] = vetor[posicaoDoMenorValor];
			vetor[posicaoDoMenorValor] = aux;
		}

		imprime_vetor(vetor);

	}

}

int main() {
	setlocale(LC_ALL, "");

	int vetor[TAM] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	selection_sort(vetor);

	imprime_vetor(vetor);

	return 0;
}