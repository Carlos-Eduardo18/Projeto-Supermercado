#include <stdio.h>
#include <string.h>

// Função para limpar o buffer do teclado
void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para exibir o menu e processar as compras
void exibirMenu() {
    int opcao = 0;
    char produto[50];
    float preco, total = 0.0;

    while (opcao != 9) {
        printf("\n--- Menu do Supermercado ---\n");
        printf("1. Padaria\n");
        printf("2. Açougue\n");
        printf("3. Frios\n");
        printf("4. Peixes\n");
        printf("5. Frutas\n");
        printf("6. Legumes e Verduras\n");
        printf("7. Carrinho de Compras\n");
        printf("8. Caixa\n");
        printf("9. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        limpaBuffer();

        switch (opcao) {
            case 1:
                printf("Você escolheu Padaria.\n");
                printf("Digite o nome do produto: ");
                fgets(produto, 50, stdin);
                produto[strcspn(produto, "\n")] = 0;
                printf("Digite o preço do produto: ");
                scanf("%f", &preco);
                limpaBuffer();
                total += preco;
                printf("%s adicionado ao carrinho. Preço: R$%.2f\n", produto, preco);
                break;
            case 2:
                printf("Você escolheu Açougue.\n");
                printf("Digite o nome do produto: ");
                fgets(produto, 50, stdin);
                produto[strcspn(produto, "\n")] = 0;
                printf("Digite o preço do produto: ");
                scanf("%f", &preco);
                limpaBuffer();
                total += preco;
                printf("%s adicionado ao carrinho. Preço: R$%.2f\n", produto, preco);
                break;
            case 3:
                printf("Você escolheu Frios.\n");
                printf("Digite o nome do produto: ");
                fgets(produto, 50, stdin);
                produto[strcspn(produto, "\n")] = 0;
                printf("Digite o preço do produto: ");
                scanf("%f", &preco);
                limpaBuffer();
                total += preco;
                printf("%s adicionado ao carrinho. Preço: R$%.2f\n", produto, preco);
                break;
            case 4:
                printf("Você escolheu Peixes.\n");
                printf("Digite o nome do produto: ");
                fgets(produto, 50, stdin);
                produto[strcspn(produto, "\n")] = 0;
                printf("Digite o preço do produto: ");
                scanf("%f", &preco);
                limpaBuffer();
                total += preco;
                printf("%s adicionado ao carrinho. Preço: R$%.2f\n", produto, preco);
                break;
            case 5:
                printf("Você escolheu Frutas.\n");
                printf("Digite o nome do produto: ");
                fgets(produto, 50, stdin);
                produto[strcspn(produto, "\n")] = 0;
                printf("Digite o preço do produto: ");
                scanf("%f", &preco);
                limpaBuffer();
                total += preco;
                printf("%s adicionado ao carrinho. Preço: R$%.2f\n", produto, preco);
                break;
            case 6:
                printf("Você escolheu Legumes e Verduras.\n");
                printf("Digite o nome do produto: ");
                fgets(produto, 50, stdin);
                produto[strcspn(produto, "\n")] = 0;
                printf("Digite o preço do produto: ");
                scanf("%f", &preco);
                limpaBuffer();
                total += preco;
                printf("%s adicionado ao carrinho. Preço: R$%.2f\n", produto, preco);
                break;
            case 7:
                printf("Você escolheu Carrinho de Compras.\n");
                printf("Total atual do carrinho: R$%.2f\n", total);
                break;
            case 8:
                printf("Você escolheu Caixa.\n");
                printf("Total de suas compras: R$%.2f\n", total);
                printf("Como você deseja pagar?\n");
                printf("1. PIX\n");
                printf("2. Dinheiro\n");
                printf("3. Cartão\n");
                printf("Escolha uma opção: ");
                int pagamento;
                scanf("%d", &pagamento);
                limpaBuffer();
                switch (pagamento) {
                    case 1:
                        printf("Pagamento com PIX selecionado.\n");
                        break;
                    case 2:
                        printf("Pagamento com Dinheiro selecionado.\n");
                        break;
                    case 3:
                        printf("Pagamento com Cartão selecionado.\n");
                        break;
                    default:
                        printf("Opção de pagamento inválida.\n");
                        break;
                }
                printf("Obrigado por suas compras!\n");
                opcao = 9;  // Sair após o pagamento
                break;
            case 9:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}

int main() {
    char usuarioCorreto[] = "carlos";
    char senhaCorreta[] = "1234";
    char usuario[50];
    char senha[50];

    printf("Digite o usuário: ");
    fgets(usuario, 50, stdin);
    // Remove o '\n' no final da string
    usuario[strcspn(usuario, "\n")] = 0;

    printf("Digite a senha: ");
    fgets(senha, 50, stdin);
    // Remove o '\n' no final da string
    senha[strcspn(senha, "\n")] = 0;

    if (strcmp(usuario, usuarioCorreto) == 0 && strcmp(senha, senhaCorreta) == 0) {
        printf("Login bem-sucedido!\n");
        exibirMenu();
    } else if (strcmp(usuario, usuarioCorreto) != 0 && strcmp(senha, senhaCorreta) == 0) {
        printf("Usuário incorreto!\n");
    } else if (strcmp(usuario, usuarioCorreto) == 0 && strcmp(senha, senhaCorreta) != 0) {
        printf("Senha incorreta!\n");
    } else {
        printf("Usuário e senha incorretos!\n");
    }

    return 0;
}
