# Implementação de Matrizes Esparsas (Sparse Matrix) 🧮

Este projeto implementa um sistema para manipulação de **Matrizes Esparsas** utilizando **Listas Encadeadas** em C++. O software permite ler matrizes de arquivos, armazená-las em memória de forma eficiente (economizando espaço ao ignorar zeros) e realizar operações matemáticas entre elas através de uma interface de linha de comando (CLI).

Desenvolvido como trabalho da disciplina de **Estrutura de Dados** do curso de Ciência da Computação da **Universidade Federal do Ceará (UFC) - Campus Quixadá**.

## 👥 Autores

* **Calebe Mesquita da Silva**
* **Francisco Emilson Santos Souza Filho** 

## 🚀 Tecnologias e Conceitos

* **Linguagem:** C++
* **Estrutura de Dados:** Listas Encadeadas (para representação eficiente da matriz esparsa).
* **Padrão de Projeto:** Command Pattern (utilizado para estruturar e desacoplar os comandos da CLI).
* **Build System:** Makefile.

## ⚙️ Funcionalidades

O sistema opera via terminal com os seguintes comandos:

* `read`: Lê uma matriz a partir de um arquivo `.txt` e a carrega no sistema.
* `print`: Exibe uma matriz carregada formatada no terminal.
* `sum`: Realiza a soma de duas matrizes carregadas.
* `multiply`: Realiza a multiplicação de duas matrizes.
* `get`: Consulta o valor de um elemento específico (linha, coluna) de uma matriz.
* `show`: Lista todas as matrizes atualmente carregadas na memória.
* `help`: Exibe a lista de comandos disponíveis.
* `exit`: Encerra a aplicação e libera a memória.

## 📦 Como Compilar e Rodar

O projeto conta com um `Makefile` para facilitar a compilação.

### Pré-requisitos
* Compilador G++ (com suporte a C++17 ou superior recomendado).
* Make.

### Passos
1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/emilsonfilho/sparsematrix.git
    cd sparsematrix
    ```

2.  **Compile o projeto:**
    ```bash
    make
    ```
    *Isso irá compilar os arquivos fonte e gerar o executável `app`.*

3.  **Execute:**
    O comando `make` já executa o programa automaticamente após a compilação. Para rodar manualmente depois:
    ```bash
    ./app
    ```

4.  **Limpeza (Opcional):**
    Para remover os arquivos objetos (`.o`) e o executável gerado:
    ```bash
    make clean
    ```

## 📂 Estrutura de Arquivos

A organização do código segue boas práticas de separação de responsabilidades:

* `Src/`: Código fonte da implementação (.cpp).
* `Includes/`: Cabeçalhos (.hpp).
    * `Classes/SparseMatrix`: Lógica principal da estrutura de dados.
    * `CommandPattern/`: Implementação dos comandos (Invoker, ConcreteCommands).
* `Defs/`: Definições globais e validadores.
* `Files/`: Diretório destinado aos arquivos de texto contendo as matrizes para leitura.

---
**Professor:** Atílio Gomes  
**Universidade Federal do Ceará (UFC)**
