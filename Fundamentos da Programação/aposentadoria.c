#include <stdio.h>

int main() {
    int n, i, codigo, ano_nasc, ano_ingresso, ano_atual;
    int idade, tempo_servico;
    int cod_mais_velho, cod_mais_tempo;
    int maior_idade = -1, maior_tempo = -1;

    printf("DIGITE O ANO ATUAL: ");
    scanf("%d", &ano_atual);
    printf("DIGITE A QUANTIDADE DE EMPREGADOS (N): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\n--- DADOS DO EMPREGADO %d ---\n", i);
        printf("CODIGO: ");
        scanf("%d", &codigo);
        printf("ANO DE NASCIMENTO: ");
        scanf("%d", &ano_nasc);
        printf("ANO DE INGRESSO NA EMPRESA: ");
        scanf("%d", &ano_ingresso);

        idade = ano_atual - ano_nasc;
        tempo_servico = ano_atual - ano_ingresso;

        printf("IDADE: %d ANOS\n", idade);
        printf("TEMPO DE TRABALHO: %d ANOS\n", tempo_servico);

        if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
            printf("SITUACAO: Requerer aposentadoria\n");
        } else {
            printf("SITUACAO: Nao requerer\n");
        }

        if (idade > maior_idade) {
            maior_idade = idade;
            cod_mais_velho = codigo;
        }
        if (tempo_servico > maior_tempo) {
            maior_tempo = tempo_servico;
            cod_mais_tempo = codigo;
        }
    }

    if (n > 0) {
        printf("\nMAIS VELHO: CODIGO %d COM %d ANOS\n", cod_mais_velho, maior_idade);
        printf("MAIS TEMPO DE TRABALHO: CODIGO %d COM %d ANOS\n", cod_mais_tempo, maior_tempo);
    }

    return 0;
}
