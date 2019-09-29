/* TÉCNICAS DE DESENVOLVIMENTO DE ALGORITMOS
   Aluno: João Vinícius Belo Barbosa
   Matrícula: 1910026157 */

#include <stdio.h>
#include <math.h>

//Definindo variáveis globais para serem usadas nas funções da primeira lista
int a1, a2, a3, media;
float N1, N2, MED, R;

//Funções da primeira lista

void verifica() //Função da Questão 2
{
  printf("\nDigite um numero para saber se ele eh par ou impar: ");
  scanf("%d", &a1);

  if(a1 % 2 == 0)
    printf("numero par\n\n");

  else
    printf("numero impar\n\n");

}

void potencia() //Função da Questão 3
{
  printf("\nDigite um numero base para potenciar: ");
  scanf("%f", &N1);

  printf("Digite o expoente: ");
  scanf("%d", &a1);

  R = pow(N1, a1);

  printf("Resultado em forma cientifica: %.2e\n\n", R);

}

void raiz() //Função da Questão 4
{
  printf("\nDigite o tipo da raiz: ");
  scanf("%d", &a1);
  
  printf("Digite um numero para raiz: ");
  scanf("%f", &N1);

  R = pow(N1, 1.0/a1);

  printf("Resultado em forma cientifica: %.2e\n\n", R);

}

void bissexto() //Função da Questão 5
{
  printf("\nDigite o ano para saber se ele eh bissexto ou nao: ");
  scanf("%d", &a1);

  if (a1 % 4 == 0)
    printf("Ano bissexto!\n\n");

  else
    printf("Nao eh bissexto\n\n");


}

void media_ponderada() //Função da Questão 6
{
  printf("\nDigite 3 notas (de 0 a 100) para calcular sua media ponderada:\n");
  scanf("%d %d %d", &a1, &a2, &a3);

  media = (1*a1 + 1*a2 + 2*a3) / (1 + 1 + 2);

  printf("Sua media eh: %d\n", media);

  if (media >= 60)
    printf("Aprovado!\n\n");
  else
    printf("Reprovado!\n\n");

}

void verifica_media() //Função da Questão 7
{
  printf("\nDigite suas duas notas:\n");
  scanf("%f %f", &N1, &N2);

  if ((N1 >= 0 && N1 <= 10) && (N2 >= 0 && N2 <= 10)) {
    MED = (N1 + N2) / 2;
    printf("Media: %.1f\n\n", MED); }
  else
    printf("Nota(s) invalida(s)!\n\n");

}

void matricula() //Função da Questão 8
{
  printf("\nMeu nome: Joao Vinicius Belo Barbosa\n");

  a1 = 1910026157;

  printf("minha matricula em hexadecimal: %X\n\n", a1);

}

//Funções da segunda lista

void fibonacci() //Função da Questão 3 (lista 2)
{
  int n, n1=0, n2=1, x, element=0;

  printf("\nDigite a quantidade de elementos: ");
  scanf("%d",&n);

  for(n=n; n>0; n--){
    x = n1 + n2;
    n2 = n1;
    n1 = x;
    element++;

    printf("Elemento %d: %d\n\n",element,x);

  }

}

void primos() //Função da Questão 2 (lista 2)
{
  int n, x, i=1;

  printf("\nDigite um numero: ");
  scanf("%d",&x);

  for(n=2; n<x; n++){

    if (x % n != 0)
      i++;
    else
      break;

  }

  if (i + 1 == x)
    printf("numero primo\n\n");
  else
    printf("numero nao primo\n\n");

}

void fatorial() //Função da Questão 1 (lista 2)
{
  int n, x;

  printf("\nDigite um numero: ");
  scanf("%d",&x);

  for (n=x-1; n>0; n--){
    x = x * n;


  }

  if(x == 0)
    x = 1;

  printf("Resultado: %d\n\n",x);

}

//Função principal do programa em C
int main() {
  int x=1, y; //Variáveis para serem usadas apenas no main

//Criando o menu da questão 1 (lista 1), onde as funções das outras questões serão chamadas
  while(x != 0){

    printf( 
            "MENU\n\n"
            "Digite 1  para verificar se algum numero eh par ou impar\n"
            "Digite 2  para potenciacao\n"
            "Digite 3  para calcular a raiz\n"
            "Digite 4  para saber se algum ano eh bissexto\n"
            "Digite 5  para calcular a media ponderada\n"
            "Digite 6  para calcular a meida simples\n"
            "Digite 7  para calcular o fatorial\n"
            "Digite 8  para verificar se um numero eh primo\n"
            "Digite 9  para imprimir a sequencia de fibonacci\n"
            "Digite 10 para exibir meu nome e minha matricula em hexadecimal\n\n"
          );
    
    scanf("%d", &y);

    switch(y){
      case 1:
      verifica();
      break;

      case 2:
      potencia();
      break;

      case 3:
      raiz();
      break;

      case 4:
      bissexto();
      break;

      case 5:
      media_ponderada();
      break;

      case 6:
      verifica_media();
      break;

      case 7:
      fatorial();
      break;

      case 8:
      primos();
      break;

      case 9:
      fibonacci();
      break;

      case 10:
      matricula();
      break;

      case 0:
      x = 0;
      printf("Adeus!!!");
      break;

      default:
      printf("numero invalido!\n\n");

    }

  }

  return 0;

}
//Fim do Exercício
