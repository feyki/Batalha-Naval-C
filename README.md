# ⚓ Batalha Naval - Matrizes e Habilidades Especiais (C)

Este projeto é um simulador avançado de posicionamento em Batalha Naval desenvolvido em **Linguagem C**. Além do posicionamento tradicional de navios, o código implementa um sistema de "habilidades" que desenha padrões geométricos no tabuleiro através de funções modulares.

---

## 🚀 Funcionalidades

O simulador destaca-se pelas seguintes implementações técnicas:

* **Renderização Dinâmica**: Função dedicada para exibir o estado atual do tabuleiro no console.
* **Habilidades Especiais**: Sistema que mapeia matrizes menores (5x5) dentro do tabuleiro principal (10x10), permitindo criar ataques em formatos específicos:
    * **Cone**: Representado pelo número 7.
    * **Cruz**: Representado pelo número 1.
    * **Octaedro**: Representado pelo número 4.
* **Segurança de Memória**: O algoritmo de desenho de habilidades verifica os limites do tabuleiro (`if x >= 0 && x < TAMANHO_TABULEIRO...`) para evitar erros de acesso à memória ou travamentos.
* **Representação de Navios**: Posicionamento de navios nas orientações horizontal e vertical utilizando constantes para facilitar a manutenção.

---

## 🛠️ Tecnologias e Conceitos Aplicados

* **Matrizes Multidimensionais**: Uso intenso de matrizes para o tabuleiro e para os padrões de habilidades.
* **Funções com Passagem de Parâmetros**: Modularização para desenho de habilidades e exibição do jogo.
* **Diretivas de Pré-processamento**: Uso de `#define` para gerenciar o tamanho do tabuleiro e constantes de representação.
* **Lógica de Coordenadas**: Cálculo de deslocamento (offset) para posicionar formas 5x5 em qualquer coordenada do tabuleiro.

---

## 💻 Como Compilar e Executar

1.  Certifique-se de ter um compilador C (como o GCC) instalado.
2.  Compile o código:
    ```bash
    gcc batalha_naval -o batalha_naval
    ```
3.  Execute o programa:
    ```bash
    ./batalha_naval
    ```

---

## 📂 Estrutura do Código

| Função | Responsabilidade |
| :--- | :--- |
| `montagemTabuleiro` | Percorre e imprime a matriz 10x10 no console. |
| `desenharHabilidade` | Mapeia uma matriz de habilidade sobre o tabuleiro principal em coordenadas específicas. |
| `main` | Orquestra a inicialização do tabuleiro, define os navios e dispara as habilidades. |

---

## 👩‍💻 Autor
Desenvolvido como um projeto de portfólio para demonstrar lógica avançada em C e manipulação de estruturas de dados.
