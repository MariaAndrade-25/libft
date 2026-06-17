# Libft - @42SP 💙

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success.svg" alt="Norminette" />
  <img src="https://img.shields.io/badge/License-MIT-yellow.svg" alt="License" />
</p>

---

## 📚 Índice
- [Sobre o Projeto](#-sobre-o-projeto)
- [Funções Implementadas](#-funções-implementadas)
- [Como Compilar e Usar](#-como-compilar-e-usar)
- [Como Incluir no seu Projeto](#-como-incluir-no-seu-projeto)
- [Exemplos de Uso](#-exemplos-de-uso)
- [Testes](#-testes)
- [Autor](#-autor)

---

## 📝 Sobre o Projeto

O **Libft** é o primeiro projeto oficial da grade curricular da 42. O objetivo é recriar diversas funções da biblioteca padrão do C (`libc`), além de desenvolver funções utilitárias adicionais que serão essenciais para projetos futuros da escola.

Este projeto é fundamental para aprofundar conhecimentos em:
- **Manipulação de memória** em C
- **Operações com strings** e caracteres
- **Boas práticas** de programação
- **Compilação** e gerenciamento de bibliotecas estáticas

> ⚠️ **Aviso:** Todo o código foi escrito seguindo piamente as regras estritas de formatação e boas práticas da **Norminette**.

---

## 🛠️ Funções Implementadas

### Funções da Libc (Replicadas)
* `ft_isalpha` - Verifica se o caractere é alfabético.
* `ft_isdigit` - Verifica se o caractere é um dígito numérico.
* `ft_isalnum` - Verifica se o caractere é alfanumérico.
* `ft_isascii` - Verifica se o caractere pertence à tabela ASCII.
* `ft_isprint` - Verifica se o caractere é imprimível.
* `ft_strlen` - Calcula o comprimento de uma string.
* `ft_memset` - Preenche a memória com um byte constante.
* `ft_bzero` - Zera uma estrutura de dados na memória.
* `ft_memcpy` - Copia uma área de memória.
* `ft_memmove` - Move uma área de memória (seguro contra sobreposição).
* `ft_strlcpy` - Copia uma string com limite de tamanho.
* `ft_strlcat` - Concatena uma string com limite de tamanho.
* `ft_toupper` - Converte um caractere para maiúsculo.
* `ft_tolower` - Converte um caractere para minúsculo.
* `ft_strchr` - Localiza a primeira ocorrência de um caractere em uma string.
* `ft_strrchr` - Localiza a última ocorrência de um caractere em uma string.
* `ft_strncmp` - Compara duas strings até um limite de caracteres.
* `ft_memchr` - Localiza um caractere em um bloco de memória.
* `ft_memcmp` - Compara dois blocos de memória.
* `ft_strnstr` - Localiza uma sub-string dentro de uma string com limite de tamanho.
* `ft_atoi` - Converte uma string de caracteres em um número inteiro (tratando espaços, sinais e dígitos).

### Funções Utilitárias Adicionais
* `ft_calloc` - Aloca memória e a inicializa com zeros.
* `ft_strdup` - Duplica uma string.
* `ft_substr` - Extrai uma substring de uma string.
* `ft_strjoin` - Concatena duas strings em uma nova.
* `ft_strtrim` - Remove caracteres especificados do início e fim de uma string.
* `ft_split` - Divide uma string por um delimitador.
* `ft_itoa` - Converte um inteiro para string.
* `ft_strmapi` - Aplica uma função a cada caractere de uma string.
* `ft_striteri` - Itera sobre cada caractere de uma string com índice.
* `ft_putchar_fd` - Escreve um caractere em um file descriptor.
* `ft_putstr_fd` - Escreve uma string em um file descriptor.
* `ft_putendl_fd` - Escreve uma string seguida de quebra de linha em um file descriptor.
* `ft_putnbr_fd` - Escreve um número em um file descriptor.

---

## 🚀 Como Compilar e Usar

O projeto possui um **Makefile** que gerencia a compilação automatizada da biblioteca gerando o arquivo estático `libft.a`.

### Pré-requisitos
- GCC (ou Clang)
- Make
- Conhecimento básico de C

### Comandos Disponíveis:

| Comando | Descrição |
| :--- | :--- |
| `make` | Compila os arquivos `.c` e gera a biblioteca `libft.a`. |
| `make clean` | Remove todos os arquivos objeto (`.o`) gerados. |
| `make fclean` | Remove os arquivos objeto e o arquivo da biblioteca `libft.a`. |
| `make re` | Executa o `fclean` e o `make` novamente (reinicia a compilação). |

### Compilando o Projeto

```bash
# Clonar o repositório
git clone https://github.com/MariaAndrade-25/libft.git
cd libft

# Compilar a biblioteca
make

# A biblioteca será gerada como libft.a
```

---

## 📦 Como Incluir no seu Projeto

Para usar esta biblioteca em qualquer outro projeto em C:

1. **Copie os arquivos** `libft.a` e `libft.h` para seu projeto
2. **Inclua o cabeçalho** no seu código:

```c
#include "libft.h"
```

3. **Compile linkando a biblioteca:**

```bash
gcc -o seu_programa seu_programa.c -L. -lft
```

---

## 💡 Exemplos de Uso

### Exemplo 1: Verificando caracteres
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("É 'a' alfabético? %d\n", ft_isalpha('a'));      // 1 (true)
    printf("É '5' um dígito? %d\n", ft_isdigit('5'));        // 1 (true)
    printf("É '!' imprimível? %d\n", ft_isprint('!'));       // 1 (true)
    return (0);
}
```

### Exemplo 2: Manipulando strings
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello";
    
    printf("Tamanho: %zu\n", ft_strlen(str));                // 5
    printf("Maiúscula: %c\n", ft_toupper('a'));              // A
    printf("Minúscula: %c\n", ft_tolower('B'));              // b
    return (0);
}
```

### Exemplo 3: Procurando caracteres
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";
    char *result;
    
    result = ft_strchr(str, 'W');
    if (result)
        printf("Encontrado: %s\n", result);                   // World
    return (0);
}
```

### Exemplo 4: Dividindo uma string (bonus)
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char **words = ft_split("Hello World Test", ' ');
    int i = 0;
    
    while (words[i])
    {
        printf("%s\n", words[i]);                            // Hello
        i++;                                                  // World
    }                                                         // Test
    return (0);
}
```

---

## 🧪 Testes

O código foi testado manualmente contra a biblioteca `libc` padrão para garantir comportamento idêntico. Você pode testar a biblioteca usando:

```bash
# Comparar comportamento com libc
gcc -o test test.c -L. -lft

# Verificar vazamento de memória (se valgrind estiver instalado)
valgrind ./test
```

---

## 📄 Informações Técnicas

- **Linguagem:** C (C89/C90)
- **Padrão de Código:** Norminette 42
- **Tipo de Biblioteca:** Estática (.a)
- **Sem dependências externas:** Apenas libc padrão

---

## 👤 Autor

**Maria Andrade**
- 42 São Paulo
- GitHub: [@MariaAndrade-25](https://github.com/MariaAndrade-25)

---

## 📜 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

---

**Última atualização:** 2026
