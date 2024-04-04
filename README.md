# Estagio Target - 2024

Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);

**Resposta = 91**

[Código primeira questão](https://github.com/VictorHTenorio/target/blob/main/soma.c)

***

Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

[Código questão](https://github.com/VictorHTenorio/target/blob/main/fibonacci.c)

***
Descubra a lógica e complete o próximo elemento:



a) 1, 3, 5, 7, ___<br>
**Resposta = 9**

b) 2, 4, 8, 16, 32, 64, ____<br>
**Resposta = 128**

c) 0, 1, 4, 9, 16, 25, 36, ____<br>
**Resposta = 49**

d) 4, 16, 36, 64, ____<br>
**Resposta = 100**

e) 1, 1, 2, 3, 5, 8, ____<br>
**Resposta = 13**

f) 2,10, 12, 16, 17, 18, 19, ____<br>
**Resposta = 200**

***

Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em uma sala diferente. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada.

Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?

**Resposta:**  
**Acionar o primeiro interruptor e deixá-lo ligado por um tempo suficiente para que, se a lâmpada correspondente estiver de fato conectada a ele, ela tenha tempo para esquentar.**  
**Desligar o primeiro interruptor e ligar imediatamente o segundo interruptor.**  
**Ir até a sala das lâmpadas pela primeira vez:**  
**1. Se a lâmpada estiver acesa indica que ela é controlada pelo segundo interruptor.**  
**2. Se a lâmpada fria e apagada é controlada pelo terceiro interruptor.**  
**3. Se a lâmpada apagada, mas quente indica que ela é controlada pelo primeiro interruptor.**  
**Dessa forma tem-se uma próxima ida para mapear, por exemplo:**  
**A outra condição vai matar a charada.**  
**Por exemplo, se fosse descobrido que a sala visitada estava com a lâmpada quente e apagada, o interruptor 1 corresponderia ao primeiro interruptor.**  
**Era agora ir em outra sala, se estivesse aceso, o interruptor 2 corresponderia a essa sala e obviamente o 3 seria da sala que não foi visitada.**

***

Escreva um programa que inverta os caracteres de um string.


IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;

[Código questão](https://github.com/VictorHTenorio/target/blob/main/iverterstring.c)





