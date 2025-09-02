#include <stdio.h>

int main() {
  unsigned char flag = 16;
  unsigned char num1, num2;

  scanf("%hhu %hhu", &num1, &num2);

  flag |= num1 << 3;
  flag &= ~(num2 >> 2);
  flag ^= (1 << 7);

  // num1 shifter de 3 a gaucher ajouter a flag

  // num2 shifter de 2 a droite ajouter a flag

  // premier bit de flag je dois le toggle

  // Exemple attendu 1 64 -> 136

  printf("%u\n", flag);
  return 0;
}