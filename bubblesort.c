#include <stdio.h>

int main() {
  int aux, numeros[] = {4, 1, 2, 3, 5};
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (numeros[j] > numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[i + j] = aux;
      }
    }
  }
  for (int i = 0; i < 5; i++) {
    printf("%d\n", numeros[i]);
  }
  return 0;
}
