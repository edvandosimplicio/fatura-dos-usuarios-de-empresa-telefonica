#include <stdio.h>
#include <string.h>
 int main (void) {   
typedef struct {

  int codigo;
  char nome[30];
  int sexo;
  int ligacoes;
  int plano;
  float valor;

}Dados;
Dados dados[50];
int sair = 1;
int i=0;

while (sair == 1) {

    printf("\ncadastro do cliente\n");
  
    printf("\ncódigo: ");
    scanf("%d", &dados[i].codigo);
    
    setbuf(stdin, 0);
    printf("Nome: ");
    fgets(dados[i].nome, 30, stdin);
    dados[i].nome[strcspn(dados[i].nome, "\n")] = '\0';

    printf("sexo:(1-masc/2-fem): ");
    scanf("%d", &dados[i].sexo);

    printf("Quantidade de ligações: ");
    scanf("%d", &dados[i].ligacoes);

    printf("Plano do cliente:\n(1-Dia/2-Noite/3-Fixo/4-Empresarial): ");
    scanf("%d", &dados[i].plano);

    if (dados[i].plano == 1) {
      dados[i].valor = (1.30 * dados[i].ligacoes);
      printf("%.2f",dados[i].valor);
    
    }else if(dados[i].plano == 2){
      dados[i].valor = (1.60 * dados[i].ligacoes);
      printf("%.2f",dados[i].valor);
    
    }else if(dados[i].plano == 3){
      dados[i].valor = (1.25 * dados[i].ligacoes);
      printf("%.2f",dados[i].valor);
    }else{
      dados[i].valor = (1.10 * dados[i].ligacoes);
      printf("%.2f",dados[i].valor);
    }

    printf("\nsair (1 - não, 2 - sim): ");
    scanf("%d", &sair);

    i++;
  
    }

    /*printf("\ncadastro do cliente\n");
  
    printf("\nresults ");
    printf("\n%d",dados[0].codigo);
    
    printf("\n%s",dados[0].nome);

    printf("\n%d",dados[0].sexo);

    printf("\n%d",dados[0].ligacoes);

    printf("\n%d",dados[0].plano);

    printf("\n%.2f",dados[0].valor);*/
    
  for(int a = 0; a < i; a++) {
    printf("\n\nlistagem geral\n\n");
    printf  ("┌───────────┬────────────────────────────────┬──────┬──────────┬───────┬───────────┐");
    printf("\n│ codigo    │ Nome                           │ sexo │ ligações | plano | valor     |");
    printf("\n├───────────┼────────────────────────────────┼──────┼──────────┼───────┼───────────┤");
    printf("\n│ %-9d │ %-30s │ %-4d | %-8d | %-5d | %-9.2f |", dados[a].codigo,dados[a].nome,dados[a].sexo,dados[a].ligacoes,dados[a].plano,dados[a].valor);
  }
  printf("\n└───────────┴────────────────────────────────┴──────┴──────────┴───────┴───────────┘");
}
