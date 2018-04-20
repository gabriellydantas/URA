# Utilização do Ultrassom
A biblioteca Ultrassom.h é ultilizada juntamente com a ServoMotor.h, onde seu principal papel é criar uma classe também denominada Ultrassom que contém uma função void setup, responsável por inicializar os comandos, e define duas outras funções do tipo long, denominadas: tempo e dist.

  A função temp controla o tempo em que o carrinho irá funcionar, enquanto dist pré-estabelece uma certa distância.
  
  Cada uma dessas funções são chamadas de forma separada, e dentro delas temos os seguintes comandos:
  
  -Função Tempo: Define um delay medido em microsegundos para a execução dos movimentos entre o pino de baixo e de cima. No escopo da função ultrassom, uma variável timeOut é declarada como um tempo de saída ou ponto de partida do movimento.
   -Função Setup: Contém
   
   -Função Dist: Chama a função tempo e executa seus comandos, logo após atribui-se uma relação aritmética envolvendo a variável duration, onde o valor foi calculado em "Tempo". Um novo valor é armazenado em uma variável chamada distanceCm. Então retornamos o valor da variável e o carrinho executa a distância calculada.
   
