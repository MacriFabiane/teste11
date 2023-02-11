/* Codigo com a biblioteca convert.h */
#include "convert.h"

void imprimaBin(int bin[], int length);

int main(int argc, char* argv[])
{
  int tamanho=8, in[tamanho];
  int out, i;

  printf("Digite o valor em binário para conversão em decimal\n");

  for ( i = 0; i < tamanho; i++)
  {
    printf("Digite o valor da posição %d\n", i);
    scanf("%d", &in[i]);
    if ((in[i]) < 0 || (in[i]) > 1)
    {
      printf("Valor incorreto, binário [0,1].\n");
      i++;
    }
  }

  out = binario_para_decimal(in, tamanho);

  printf("A conversão de ");
  imprimaBin(in, tamanho);
  printf("::bin em decimal é: %d::dec.\n", out);

  return 0;
}

void imprimaBin(int bin[], int tamanho)
{
    int i;
  for ( i = 0; i < tamanho; i++)
  printf("%d", bin[i]);
}

