# Estudando e aprendendo lógica com C++ e C#

![c++_c#](https://assets-global.website-files.com/5ec7dad2e6f6295a9e2a23dd/5efd52ba4c7fe235eae87806_Which%20Language%20is%20Right%20for%20Your%20Software%20Project.png)

## Como executar o código

run: `g++ index.cpp -o main`
* onde está o `index.cpp` você irá colocar o caminho para o arquivo que deseja executar
* Onde está o `main` será a saida do executavel, criando um arquivo que seu compilador poderá ler

run: `./main`
* Ele irá mostrar o retorno do seu código
____

## Criando meu primeiro Hello World

```cpp

  #include <iostream>

  int main(){
    std::cout << "Hello Word!\n";
  }

```
`<iostream>`: Entrada e saida de um programa C++

## Criando a Calculadora

Criamos um arquivo `Calculator.h`que é um arquivo de cabeçalho ou variáveis e juntos um `Calculator.cpp` que é o arquivo de origem

onde criamos uma classe e uma variavel publica que recebe parametros x, oper, y

`#pragma once
class Calculator {
  public:
    double Calculate(double x, char oper, double y);
};`

E no arquivo Calculator.cpp puxamos essa váriavel publica e verificamos o `oper` com Switch
