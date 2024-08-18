/*17) Faça um programa para o controle do estoque de uma loja. A loja possui 15 produtos
diferentes. O programa deve iniciar lendo o total de itens de cada um destes produtos e seus
nomes, armazenando estes valores em dois arranjos (Nomes e NUMERO). O programa
deve processar um conjunto de atualizações de estoque (inserção e retirada de itens). No
final do processo (determinado pelo usuário do programa), o programa deve fazer uma
análise do estoque que restou na loja, sendo informado: 
a) nome dos produtos que estão com estoque inferior a 10 unidades; 
b) número de produtos que apresentam estoque entre 10 e 20 unidades (inclusive); 
c) Quantidade vendida de cada produto.
Obs.: Não permitir dois produtos com o mesmo nome. */

#include <stdio.h>
#include <string.h>

#define NUM_PRODUTOS 15

typedef struct{
  char nome[50];
  int quantidade;
  int vendido;
} Produto;

int inicializar_produtos(Produto produtos[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite o nome do produto %d: ", i + 1);
        while(scanf("%s", produtos[i].nome) != 1){
            printf("Entrada inválida. Digite o nome do produto %d novamente: ", i + 1);
                setbuf(stdin, NULL);
        }
        printf("Digite a quantidade do produto %d: ", i + 1);
        while(scanf("%d", &produtos[i].quantidade) != 1){
            printf("Entrada inválida. Digite a quantidade do produto %d novamente: ", i + 1);
                setbuf(stdin, NULL);
        }
        produtos[i].vendido = 0;
    }
}

void atualizar_estoque(Produto produtos[], int n){
    char nome[50];
    int quantidade;
    char operacao;

    while(1){
        printf("Digite o nome do produto (ou 'fim' para encerrar): ");
        while(scanf("%s", nome) != 1){
            printf("Entrada inválida. Digite um valor válido: ");
                setbuf(stdin, NULL);
        }

        if (operacao == 'q'){
            break;
        }

        printf("\nNome do produto:");
        while(scanf("%s", nome) != 1){
            printf("Entrada inválida. Digite um nome válido: ");
                setbuf(stdin, NULL);
        }
        printf("\nQuantidade:");
        while(scanf("%d", &quantidade) != 1){
            printf("Entrada inválida. Digite um valor válido: ");
                setbuf(stdin, NULL);
        }

        int encontrado = 0;
        for(int i = 0; i < n; i++){
            if(strcmp(produtos[i].nome, nome) == 0){
                encontrado = 1;
                if(operacao == 'i'){
                    produtos[i].quantidade += quantidade;
                } else if (operacao == 'r'){
                    if(produtos[i].quantidade >= quantidade){
                        produtos[i].quantidade -= quantidade;
                        produtos[i].vendido += quantidade;
                    } else {
                        printf("Quantidade insuficiente em estoque.\n");
                    }
                }
                break;
            }
        }
        if(!encontrado){
            printf("Produto não encontrado.\n");
        }
    }
}

void analiar_estoque(Produto produtos[], int n){
    printf("\nProdutos com estoque inferior a 10 unidades:\n");
    for(int i = 0; i < n; i++){
        if(produtos[i].quantidade < 10){
            printf("%s\n", produtos[i].nome);
        }
    }

    int entre10e29 = 0;
    for (int i = 0; i < n; i++){
        if (produtos[i].quantidade >= 10 && produtos[i].quantidade <= 20){
            entre10e29++;
        }
    }
    printf("\nQuantidade de produtos com estoque entre 10 e 20 unidades: %d\n", entre10e29);

    printf("\nQuantidade vendida de cada produto:\n");
    for(int i = 0; i < n; i++){
        printf("%s: %d unidades\n", produtos[i].nome, produtos[i].vendido);
    }
}

int main(){
    Produto produtos[NUM_PRODUTOS];

    inicializar_produtos(produtos, NUM_PRODUTOS);
    atualizar_estoque(produtos, NUM_PRODUTOS);
    analiar_estoque(produtos, NUM_PRODUTOS);

    return 0;
}
