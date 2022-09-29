#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void YYY(int horas, int mnts, int soma_minutos) {
  int h;
  int h2;
  if ((mnts + soma_minutos) >= 60) {
    h = horas + (soma_minutos + mnts) / 60;
    h2 = (mnts + soma_minutos - 60);
    printf("%d horas", h);
    printf(" e %d minutos\n", h2);
  } else if ((mnts + soma_minutos) < 60) {
    int mnts2 = mnts + soma_minutos;
    printf("%d horas", horas);
    printf(" e %d minutos\n", mnts2);
  }
  return;
}

int main() {
  int horas;
  int mnts;
  int soma_minutos;
  printf("Digite as horas: \n");
  scanf("%d", &horas);
  printf("Digite os minutos: \n");
  scanf("%d", &mnts);
  printf("Voce esta adicionando minutos a %d:%d \n", horas, mnts);
  printf("Digite os minutos que voce deseja adicionar: \n");
  scanf("%d", &soma_minutos);
  YYY(horas, mnts, soma_minutos);
}
