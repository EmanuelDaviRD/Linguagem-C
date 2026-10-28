# 💻 Repositório de C: Fundamentos & Estrutura de Dados

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![IFCE](https://img.shields.io/badge/IFCE-Acopiara-green?style=for-the-badge)

> Repositório acadêmico contendo a coleção completa de exercícios, algoritmos, desafios do Beecrowd, estruturas de dados dinâmicas e projetos de análise de algoritmos desenvolvidos em **C puro**.

---

## Destaque Especial: Projeto Radix Sort & Análise de Desempenho

> **Pasta:** `Estrutura de Dados / Classificação por radix /`

Este módulo consiste em um estudo aprofundado sobre o algoritmo de ordenação não-comparativo **Radix Sort** e sua dependência do **Counting Sort estável**.

| Arquivo / Documento | Descrição e Foco Técnico |
| :--- | :--- |
| 📄 `Radix_Sort_Emanuel_Davi.pdf` | **Relatório Acadêmico Completo (9 Páginas)** cobrindo a fundamentação teórica do algoritmo, cálculo analítico de complexidade $O(d \cdot (n + k))$, análise de estabilidade e gráficos comparativos de tempo de execução. |
| 🧪 `radix_sort_demonstracao.c` | Implementação didática com exibição do vetor original e ordenado passo a passo a cada dígito processado. |
| ⏱️ `radix_sort_medicao.c` | Script de benchmark dinâmico medindo o tempo de CPU com `clock()` para entradas variando de **100 até 100.000 elementos**. |

---

## Estrutura de Dados

###Bibliotecas Modulares (`Estrutura de Dados / Bibliotecas /`)
* `agenda_modular/`: Implementação modularizada da agenda telefônica (`agenda.h`, `agenda.c`, `main.c`).
* `conversoes/`: Funções para conversão de unidades térmicas (`Celsius` / `Fahrenheit`).
* `financeiro/`: Cálculo de juros simples e compostos (`powf`).
* `matematica/`: Operações matemáticas fundamentais encapsuladas em biblioteca.
* `meusutilitarios/`: Biblioteca integrada combinando matemática, strings e conversões com menu interativo.
* `stringutils/`: Funções personalizadas para contagem de vogais e inversão de strings.
* `utilidades/`: Funções utilitárias de comparação de maior e menor valor.

### Listas Encadeadas (`Estrutura de Dados / ListasEncadeadas / CRUD /`)
* `aluno.h`, `aluno.c`, `main.c`: Sistema completo de CRUD (Inserção no início/fim, busca por matrícula e nome, alteração, remoção, contagem e filtragem de aprovados) utilizando ponteiros e listas encadeadas dinâmicas.

### Exercícios de Estrutura de Dados (Raiz da Pasta)
| Arquivo | Tópico Principal |
| :--- | :--- |
| `agenda_telefones.c` | Sistema de agenda em memória com busca alfabética e por data |
| `analise_alturas.c` / `analise_vetor.c` | Processamento dinâmico de vetores e métricas estáticas |
| `busca_vetor_dinamico.c` | Busca linear em vetor alocado com `malloc` |
| `cadastro_alunos_realloc.c` | Vetor dinâmico expansível com estratégia de dobra de memória |
| `cadastro_produtos_dinamico.c` | Controle de estoque com cálculo de valor total e ponteiros |
| `comparando_buscas.c` | Benchmark: Busca Sequencial $O(n)$ vs Busca Binária $O(\log n)$ |
| `comparando_ordenacoes.c` | Benchmark: Bubble Sort $O(n^2)$ vs QuickSort/MergeSort $O(n \log n)$ |
| `comparar_matriz_x.c` | Contagem de elementos maiores, menores e iguais em matriz |
| `comparar_ponteiros_string.c` | Comparação de memória vs conteúdo com `strcmp` |
| `contando_operacoes.c` | Medição de tempo $O(n)$ com `clock()` |
| `correcao_prova.c` | Correção automatizada de gabaritos com alocação dinâmica |
| `desafio_sudoku_simplificado.c` | Validador de linhas e colunas para Sudoku 9x9 |
| `distancia_cidades.c` | Cálculo de rotas em matriz de distâncias $6 \times 6$ |
| `eh_primo.c` | Função booleana para verificação de números primos |
| `eliminar_repetidos.c` | Filtragem de valores distintos com redimensionamento por `realloc` |
| `evento_data.c` / `aluno_endereco.c` | Estruturas de dados aninhadas (`struct` dentro de `struct`) |
| `experimento_complexidade.c` | Comprovação empírica do crescimento quadrático $O(n^2)$ |
| `fatorial_recursivo.c` / `fibonacci_recursivo.c` | Algoritmos clássicos resolvidos por recursão |
| `fibonacci_iterativo.c` | Geração de termos de Fibonacci via laço |
| `incremento_idade.c` | Passagem por referência para modificação de `struct` |
| `inverter_string.c` / `inverter_string_dinamica.c` | Manipulação e inversão de strings (estática e dinâmica) |
| `letras_repetidas.c` | Análise e filtragem de caracteres duplicados em textos |
| `livro_antigo.c` / `livro_dinamico.c` | Cadastro e comparação de datas de edição de livros |
| `maiores_elementos_matrizes.c` | Matriz resultante por comparação ponto a ponto |
| `matriz_aleatoria.c` / `matriz_multiplicacao_indices.c` | Geração de matrizes dinâmicas ($i \times j$ e `rand()`) |
| `matriz_simetrica.c` / `matriz_transposta.c` | Verificação de simetria e cálculo de transposta $2 \times 3$ |
| `matriz_vetor_linear.c` | Mapeamento $2D \rightarrow 1D$ em vetor linear (`i * colunas + j`) |
| `media_vetor_dinamico.c` / `notas_calloc.c` | Média aritmética e filtragem de notas zeradas com `calloc` |
| `palindromo.c` | Verificação de palíndromos com alocação dinâmica |
| `pares_soma_par.c` | Comparação: Algoritmo ingênuo $O(n^2)$ vs Otimizado $O(n)$ |
| `produto_ponteiro.c` / `aluno_basico.c` | Acesso aos campos via operador seta (`->`) |
| `realloc_matriz_linhas.c` | Redimensionamento dinâmico de linhas em matrizes |
| `sequencia_realloc.c` | Entrada contínua de dados com expansão dinâmica de memória |
| `sistema_alunos_disciplinas.c` | Relatório completo com vetor interno dinâmico de disciplinas |
| `soma_naturais_recursiva.c` / `soma_vetor_recursiva.c` | Somatórios recursivos |
| `soma_vetores_dinamicos.c` | Soma elemento a elemento de dois vetores dinâmicos |
| `somatorio_linhas_matriz.c` | Preenchimento de coluna com somatórios acumulados |
| `troca_ponteiros.c` | Troca de valores de variáveis usando ponteiros (`swap`) |

---

## Fundamentos da Programação

###  Resolução de Exercícios do Beecrowd (`beecrowd_*.c`)
Soluções aceitas cobrindo problemas do **Beecrowd / URI Judge**:
`1071` (Soma de Impares Consecutivos), `1094` (Experiências), `1134` (Tipo de Combustível), `1142` (PUM), `1151` (Fibonacci Fácil), `1173` (Preenchimento de Vetor I), `1175` (Troca em Vetor I), `1179` (Preenchimento de Vetor IV), `1180` (Menor e Posição), `1183` (Acima da Diagonal Principal), `1185` (Acima da Diagonal Secundária), `1187` (Área Superior), `1234` (Sentença Dançante), `1435` (Matriz Quadrada I), `1478` (Matriz Quadrada II), `2727` (Código Morse), `2756` (Saída 10), `2757` (Entrada e Saída de Inteiros), `2763` (Entrada e Saída CPF), `2764` (Entrada e Saída de Data), `2766` (Entrada e Saída Lendo Nomes), `2866` (Criptotexto).

### 📖 Programação Básica, Vetores, Matrizes e Strings
| Arquivo | Descrição |
| :--- | :--- |
| `aceita_cadastro.c` / `validar_dados.c` | Validação e consistência de entradas de dados |
| `agenda_alfabetica.c` | Cadastro e ordenação de nomes |
| `alunos_notas_matriz.c` / `desempenho_alunos.c` | Controle de boletins e notas com matrizes |
| `analise_salarial.c` / `credito_funcionario.c` | Cálculos financeiros e concessão de crédito |
| `analise_string.c` / `estatisticas_string.c` | Métricas de contagem de caracteres e palavras |
| `ano_bissexto.c` | Verificação de anos bissextos |
| `bases_numericas.c` | Conversão de bases numéricas em C |
| `busca_matriz.c` / `busca_vetor.c` / `busca_aleatoria.c` | Algoritmos de busca em estruturas estáticas |
| `caca_palavras_c.c` | Validador de matriz de caracteres / Caça-palavras |
| `cadastro_pessoa.c` / `catalogo_carros.c` | Registros simples (`struct`) em memória estática |
| `cartela_bingo.c` | Geração de matrizes sem elementos repetidos |
| `codigo_cesar.c` | Cifra de César para criptografia de texto |
| `comparar_strings.c` / `comprimento_string.c` | Manipulação manual de cadeias de caracteres |
| `contar_palavras.c` / `contar_vogais.c` / `contar_uns.c` | Processamento de texto e vetores binários |
| `controle_saldo.c` / `investimento_juros.c` | Simulações financeiras |
| `conversao_tempo.c` / `conversos_metros.c` | Conversões de medidas e unidades temporais |
| `coordenadas_ponto.c` | Identificação de quadrantes no plano cartesiano |
| `diagonal_principal.c` / `media_diagonal_principal.c` | Operações em matrizes quadradas |
| `distancia_euclidiana.c` | Cálculo da distância entre dois pontos no espaço |
| `divisao_inteiros.c` / `dobro.c` / `eh_par.c` | Exercícios aritméticos introdutórios |
| `eleicao.c` | Contagem e apuração de votos em eleições |
| `escada_primos.c` | Identificação de primos em padrão estruturado |
| `Fahrenheit_Celsius.c` | Conversão simples de temperatura |
| `fibonacci.c` | Geração de termos da sequência de Fibonacci |
| `funcoes_trigonometricas.c` | Aplicação da biblioteca `<math.h>` (`sin`, `cos`, `tan`) |
| `horas_extras.c` | Cálculo trabalhista de horas adicionais |
| `imprime_matriz.c` / `imprime_vetor.c` | Funções utilitárias de exibição |
| `indice_poluicao.c` | Classificação de índices ambientais e alertas |
| `inverte_string.c` / `remover_vogais.c` | Processamento de buffers de texto |
| `jogo_adivinhacao.c` | Jogo interativo com números aleatórios |
| `maior_elemento_matriz.c` / `maior_elemento_vetor.c` | Encontro de extremismos em arrays |
| `media_notas.c` / `media_ponderada.c` | Métricas de notas acadêmicas |
| `menu_calculadora.c` | Calculadora interativa via console com `switch-case` |
| `numero_perfeito.c` | Validação de números perfeitos |
| `ordenacao_bancaria.c` | Ordenação de contas e saldos bancários |
| `partida_futebol.c` | Processamento de estatísticas esportivas |
| `progressao_aritmetica.c` / `progressao_geometrica.c` | Cálculo de termos de PA e PG |
| `raiz_potenciacao.c` | Operações de radiciação e potenciação |
| `renovacao_emplacamento.c` | Consulta de rodízio/emplacamento por final de placa |
| `reserva_mesas.c` | Sistema de controle de reservas em restaurante |
| `supermercado.c` / `valor_produto.c` | Automação de caixa e controle de compras |
| `tipo_triangulo.c` | Classificação geométrica (Equilátero, Isósceles, Escaleno) |

---

## Como Compilar e Executar

### 1. Compilar um arquivo individual simples:
```bash
gcc -o programa nome_do_arquivo.c
./programa
