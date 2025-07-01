# 🏧 Projeto Caixa Eletrônico Simulado 💰

O projeto tem o objetivo de simular um caixa eletrônico de forma simplificada, utilizando float, do while, if, else, switch, while e etc.

## O que o usuário consegue fazer: 🛠

O usuário interage com o sistema digitando números inteiros para escolher as opções do menu e números racionais (como 100,50) ao depositar ou sacar valores. (Obs: ao digitar valores decimais, é recomendado utilizar (,) em vez de (.), pois o programa pode não reconhecer o ponto como separador decimal e acabar considerando uma entrada inválida).

---

## Como o sistema funciona: 🖨

O sistema inicia com um saldo já definido (pode ser alterado no código, atualmente está em R$ 2500.90). A partir disso, ele exibe um menu com 4 opções principais:

1 - Ver saldo
2 - Depositar
3 - Sacar
4 - Sair

O programa utiliza um laço do...while que mantém o menu em execução até que o usuário escolha a opção 4 - Sair. Mesmo assim, devido à estrutura do loop, o menu pode reiniciar se a lógica estiver configurada para isso (por exemplo, se opcao = 4 ao invés de opcao != 4 no while). Além disso, o sistema conta com proteções para:

- Entradas inválidas, como letras ou símbolos (ex: @, abc) — nesses casos, o programa mostra uma mensagem de erro e volta ao menu;

- Saque de valores maiores do que o saldo disponível, impedindo a operação;

- Depósitos e saques com valores negativos ou zerados, que também são rejeitados.

- O terminal é limpo a cada interação para deixar a interface mais limpa, e há pequenas pausas com Sleep() para dar uma sensação de "processamento" (como em caixas eletrônicos reais).

---

<img 
    src="https://media.tenor.com/k4XkWkVAOoUAAAAi/machinespicks.gif"
    alt="Gif Caixa Eletrônico"
    width="140px"
/>
