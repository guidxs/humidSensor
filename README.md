# Sistema de Irrigação Inteligente

Este é um projeto de um sistema de irrigação inteligente usando um Arduino. O sistema monitora a umidade do solo e controla uma bomba de água para manter as plantas adequadamente irrigadas.

## Funcionalidade

O sistema utiliza um sensor de umidade do solo para medir a umidade presente no solo. Com base nessa leitura, o sistema determina se é necessário ligar a bomba de água para irrigar as plantas.

O sistema é implementado utilizando um Arduino UNO e os seguintes componentes:
- Sensor de umidade do solo
- LED (representando a bomba de água)
- Buzzer (para emitir um aviso sonoro em caso de erro)

O código do Arduino faz a leitura do sensor de umidade e determina o estado de irrigação com base em níveis pré-definidos de umidade. Quando a umidade está abaixo do limite mínimo, o LED acende na cor laranja, indicando que a bomba de água deve ser ligada para irrigar as plantas. Em caso de erro, quando a umidade ultrapassa o limite máximo, o LED fica vermelho e o buzzer emite um aviso sonoro.

## Simulação no Tinkercad

Devido às limitações do Tinkercad, não é possível simular diretamente a bomba de água. Nesta simulação, utilizamos um LED para representar a bomba de água. Quando o LED está aceso na cor laranja, indica que a bomba de água seria ligada para soltar água. Se o LED ficar vermelho, representa um erro e, nesse caso, o buzzer seria acionado junto com a liberação de água.

## Como usar

1. Monte o circuito de acordo com o esquema fornecido no arquivo .ino.
2. Carregue o código do Arduino no Arduino UNO.
3. Conecte o sensor de umidade do solo ao solo em que deseja monitorar a umidade.
4. Alimente o Arduino com a fonte de energia adequada.
5. Observe o comportamento do LED e do buzzer com base na leitura do sensor de umidade.

Certifique-se de ajustar os níveis de umidade (variáveis `umidadeMin` e `umidadeMax`) no código para atender às necessidades das suas plantas e do sensor de umidade que você está usando.

## Licença

Este projeto é licenciado sob a [MIT License](LICENSE).
