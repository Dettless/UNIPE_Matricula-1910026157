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

//Funções da terceira lista (string)

void contar_caracter() //Questão 1 - lista 3
{
  char s[20];
  int x=0;

  printf("\nDigite um texto: ");
  getchar();
  scanf("%[^\n]s",s);

  while(s[x] != '\0'){
    x++;
  }

  printf("Quantidade de caracteres: %d\n\n",x);
}

void contar_vogais() //Questão 2 - lista 3
{
  char s[20];
  int x=0, y=0;

  printf("\nDigite um texto: ");
  getchar();
  scanf("%[^\n]s",s);

  for(;s[x] != '\0';x++){
    if (s[x] == 'a' || s[x] == 'e' || s[x] == 'i' || s[x] == 'o' || s[x] == 'u')
      y++;


  }

  printf("Quantidade de vogais: %d\n\n",y);
}

void comparar_textos() //Questão 3 - lista 3
{
  char s1[20], s2[20];
  int x=0, y=0;

  printf("\nDigite dois textos para comparação:\n");
  
  printf("Texto 1: ");
  getchar();
  scanf("%[^\n]s",s1);
  
  printf("Texto 2: ");
  getchar();
  scanf("%[^\n]s",s2);

  while(s1[x] != '\0' && s2[x] != '\0') {
    if(s1[x] != s2[x]) {
      y = 1;
      break; 
      }
    
    x++;
  }

  if(y == 0 && s1[x] == '\0' && s2[x] == '\0')
    printf("Textos iguais!\n\n");
  else
    printf("Textos diferentes!\n\n");
}

void copiar_texto() //Questão 4 - lista 3
{
  char s1[20], s2[20];
  int x=0;

  printf("\nDigite um texto para ser copiado\n");

  printf("Digite o texto dentro da variavel s1: ");
  getchar();
  scanf("%[^\n]s",s1);

  while(s1[x] != '\0') {
    s2[x] = s1[x];
    x++;
  }

  s2[x] = '\0';

  printf("Copia do texto s1 na variavel s2: %s\n\n",s2);
}

void concatenar_textos() //Questão 5 - lista 3
{
  char s1[20], s2[20];
  int x=0, y=0;
  
  printf("\nDigite o primeiro texto: ");
  getchar();
  scanf("%[^\n]s",s1);
  
  printf("Digite o segundo texto: ");
  getchar();
  scanf("%[^\n]u",s2);

  for(; s1[x] != '\0'; x++) {}

  for(; s2[y] != '\0'; y++) {
    s1[x] = s2[y];
    x++;
  }

  s1[x] = '\0';
  
  printf("Textos concatenados: %s\n\n",s1);
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
            "Digite 10 para exibir meu nome e minha matricula em hexadecimal\n"
            "Digite 11 para contar os caracteres de um texto\n"
            "Digite 12 para contar as vogais de um texto\n"
            "Digite 13 para comparar dois textos\n"
            "Digite 14 para copiar um texto\n"
            "Digite 15 para concatenacao de textos\n\n"
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

      case 11:
      contar_caracter();
      break;

      case 12:
      contar_vogais();
      break;

      case 13:
      comparar_textos();
      break;

      case 14:
      copiar_texto();
      break;

      case 15:
      concatenar_textos();
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
