# Utilização do Ultrassom


  Ultrassom

  Sensor responsável por emitir ondas sonoras para controlar a distância do objeto.


  Biblioteca Ultrassom.h

  A biblioteca Ultrassom.h é ultilizada juntamente com a ServoMotor.h, onde seu principal papel é criar uma classe também denominada Ultrassom que contém uma função void setup, responsável por inicializar os comandos, e define duas outras funções do tipo long, denominadas: tempo e dist. 

  A função temp controla o tempo em que o carrinho irá funcionar, enquanto dist pré-estabelece uma certa distância.
  
  Cada uma dessas funções são chamadas de forma separada, e dentro delas temos os seguintes comandos:
  
  #Funções Utilizadas:

    -Função Tempo: Define um delay medido em microsegundos para a execução dos movimentos entre o pino de baixo e de cima. No escopo da função ultrassom, uma variável timeOut é declarada como um tempo de saída ou ponto de partida do movimento.
    
    "digitalWrite(trigPin, LOW)": garante que o pino de trigger esteja baixo (0v).
    "delayMicroseconds(2)": tempo de espera para então ligarmos o tigger em microsegundos.
    "digitalWrite(trigPin, HIGH)": garante que o pino de trigger esteja alto (5v).
    "duration = pulseIn(echoPin, HIGH, timeOut)": esta função retornar quantos microsegundos passaram, desde a emissão do pulso até o retorno do sinal.
    
    -Função Setup: Chama o sensor de ultrassom, que é definido por dois pinos, sendo eles o Trig(responsável por receber um pulso para iniciar uma nova leitura), enquanto o Echo receberá 5v quando a onda de ultrassom retornar.
    
    "pinMode(trigPin, OUTPUT)": porta responsável por emitir as ondas.
    "pinMode(echoPin, INPUT)": porta responsável por receber as ondas.
    
    -Função Dist: Chama a função tempo e executa seus comandos, logo após atribui-se uma relação aritmética envolvendo a variável duration, onde o valor foi calculado em "Tempo". Um novo valor é armazenado em uma variável chamada distanceCm. Então retornamos o valor da variável e o carrinho executa a distância calculada.

    "tempo()".
