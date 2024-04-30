# Conversor de Bases Numéricas

Este é um programa simples em C++ que converte números de uma base para outra. Ele suporta bases numéricas de 2 a 36, utilizando os dígitos 0-9 e A-Z para representar os valores maiores que 9.

## Como Compilar

Para compilar o programa, você pode usar um compilador C++ como o g++. Execute o seguinte comando no terminal:

``` bash
g++ -o conversor conversor.cpp
```

Isso irá compilar o código e gerar um executável chamado `conversor`.

## Como Usar

Após compilar o programa, você pode executá-lo da seguinte forma:

``` bash
./conversor
```

O programa solicitará que você insira um número e suas respectivas bases. Ele então converterá o número da primeira base para a segunda base e exibirá o resultado.

### Observações

- Todos os números utilizados devem ser positivos.
- A base de entrada (base1) e a base de saída (base2) devem estar no intervalo de 2 a 36, inclusive.
- Os dígitos permitidos para entrada são 0-9 e A-Z.
- O programa continuará executando até que você decida encerrá-lo.