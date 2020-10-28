#include <stdio.h>
/*Ex.1 Elabore um programa, fluxograma e algoritmo com português estruturado para entrar com o nome do funcionário e o salário atual. Ao final, exiba uma mensagem contendo o novo salário do funcionário contendo o reajuste anual. Seu ajuste anual depende do valor do salário atual: caso o valor seja menor ou igual a 1 salário mínimo, aumente 40%; se o salário ficar entre 1 a 2 salários mínimos, aumente 38%; senão aumente 35% o seu salário. Determine que 1 salário é R$ 1045,00. 
*/
int main(void) {
  char nomeFuncionario[30];
  float salarioAtual;
  printf("Digite o nome do funcionario\n");
  scanf("%c",nomeFuncionario);
  printf("Digite o salario atual do funcionario\n");
  scanf("%f",&salarioAtual);
  if (salarioAtual<=1045){
    salarioAtual=salarioAtual+salarioAtual*0.4;
    printf("Seu salario atual e:%f\n",salarioAtual);
  }
  else if   (salarioAtual>=1045&&salarioAtual<=2090){
    salarioAtual=salarioAtual+salarioAtual*0.38;
    printf("Seu salario atual e:%f\n",salarioAtual);
  }
  else{
    salarioAtual=salarioAtual+salarioAtual*0.35; 
    printf("Seu salario atual e:%f\n",salarioAtual);
  }
  
  return 0;
}