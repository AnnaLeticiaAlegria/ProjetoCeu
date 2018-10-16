# **Semana 28/05/2018 - 03/06/2018**

###   - Planejamentos:
        - reescrever o código de contagem de tempo do relogio
        - permitir mudar o horário atual do relógio
        
###   - Realizados:
        - reescrever o código de contagem de tempo do relogio - O código desta parte já foi reescrito mas ainda não consegui exibir no display de 7 segmentos por conta de erros nos parâmetros passados na função shiftOut
        - permitir mudar o horário atual do relógio - LED piscando indicando mudança de horário já implementado, ver como será feito o reconhecimento dos botões e reescrever o código
        
        
# **Semana 04/06/2018 - 10/06/2018**

###   - Planejamentos:
        - corrigir erros do código da contagem de tempo do relógio
        - reescrever o código de mudança de horário
        - reescrever o código de ligar e desligar o alarme
        
###   - Realizados:
        - relógio está mostrando contando o tempo de forma correta (quando ligado, começa em 00:00)
        - reescrever o código de mudança de horário - feito mas separar em partes para debugar qual é o problema
        - reescrever o código de ligar e desligar o alarme - feito mas não testado
        
# **Semana 11/06/2018 - 17/06/2018**

###   - Planejamentos:
        - separar em partes o código de mudança de horário e corrigir o erro
        - reescrever o código de setar o alarme
        
###   - Realizados:
        - separar em partes o código de mudança de horário e corrigir o erro - os erros ainda ocorrem
        - reescrito o código de setar o alarme - feito mas gera erro

# **Semanas 18/06/2018 - 01/07/2018**
    
###   - Planejamentos:
        - separar em partes o código de mudança de horário e corrigir o erro
        - ver porque o 1segundo de await está demorando mais do que 1 segundo
        
###   - Realizados: 
        - versão do céu mudada
        - 1 segundo do await está certo agora
        
# **Semana 02/07/2018 - 08/07/2018**

###   - Planejamentos:
        - ter o ajuste de horário funcionando
        - ter o botão de ligar/desligar alarme funcionando
        
###   - Realizados:
        - ter o ajuste de horário funcionando
        - ter o botão de ligar/desligar alarme funcionando
        
# **Semana 09/07/2018 - 15/07/2018**

###   - Planejamentos:
        - ajuste do horário do alarme funcionando
        - alarme tocar
    
###   - Realizados:
        - ajuste do horário do alarme funcionando
        - alarme toca
        - modo soneca implementado
        - começo da implementação de um código mais organizado

# **Semana 16/07/2018 - 22/07/2018**

###   - Planejamentos:
        - corrigir os bugs da versão organizada do código
        - ajustar o modo soneca				

###   - Realizados:
        - bug de ligar/desligar alarme corrigido
        - bug de mostrar as horas corrigido
        - modo soneca corrigido

# **Semana 23/07/2018 - 29/07/2018**

###   - Planejamentos:
        - corrigir bug da função do relógio
        - fazer a comunicação serial entre o programa em Lua e o programa em ceu
    
###   - Realizados:
        - nova função de segurar o botão
        - testes em pico-ceu para o jogo GuitarHero
        
# **Semana 30/07/2018 - 05/08/2018**

###   - Planejamentos:
        - começar o jogo GuitarHero:
          - colocar as imagens em bmp
          - fazer a música tocar no momento certo
          - fazer as notas caírem no tempo certo
        
###   - Realizados:
        - barra de progresso do jogo pronta
        - notas caindo mas ainda não estão no tempo certo --> tem que carregar os tempos das notas no programa
        - música não está tocando --> checar se o problema é ela ser mp3
        - protótipo quase pronto
        - código organizado em funções e loop principal mais claro

# **Semana 13/08/2018 - 19/08/2018**

###   - Planejamentos:
        - colocar as imagens em bmp
        - fazer a música tocar
        - fazer as notas caírem no tempo certo
        
###   - Realizados: 
        - barras de progresso e de pontos consertadas
        - notas estão caindo no tempo certo
        - implementação do usuário apertar a tecla da nota --> falta acrescentar a diferença de pontuação

# **Semana 20/08/2018 - 26/08/2018**

###   - Planejamentos:
        - colocar as imagens em bmp
        - fazer a música tocar
        - ajustar tempo das notas
        - fazer a diferença de pontuação
        - consertar as barras
        
###   - Realizados: 
        - barras consertadas
        - diferença de pontuação
        - mensagem de acordo com a pontuação sendo exibida no final do jogo
        - tempo das notas ajustado

# **Semana 27/08/2018 - 02/09/2018**

###   - Planejamentos:
        - colocar as imagens em bmp
        - fazer a música tocar
        - fazer os comandos serem dados pelos botões do arduino

###   - Realizados: 
        - imagens em bmp colocadas
        - começo da implementação do jogo reiniciar
        
# **Semana 03/09/2018 - 09/09/2018**

###   - Planejamentos:
        - fazer a música tocar
        - fazer os comandos serem dados pelos botões do arduino
        - implementar reinicio de jogo
        - testar criar notas a partir de um arquivo MIDI

###   - Realizados: 
        - reinicio de jogo implementado
        - barras de progresso e de pontos mais largas e podendo variar o tamanho

# **Semana 10/09/2018 - 16/09/2018**

###   - Planejamentos:
        - fazer a música tocar
        - fazer os comandos serem dados pelos botões do arduino
        
###   - Realizados: 
        - reinicio de jogo implementado
        - parte de aparecer mensagem de Restart consertada
        - modificações para organizar o código
        - jogo fechando quando o usuário não deseja jogar novamente

# **Semana 17/09/2018 - 30/09/2018**

###   - Planejamentos:
        - pesquisar projetos opensource que utilizem NRF24L01+
        
###   - Realizados: 
        - resultados da pesquisa no arquivo Projetos_NRF24701.txt
        
# **Semana 01/10/2018 - 07/10/2018**

###   - Planejamentos:
        - reescrever código do carrinho em ceu
        - reescrever cõdigo do controle do carrinho em ceu
        
###   - Realizados: 
        - criado driver pcint2.ceu
        - código do controle reescrito e funcionando

# **Semana 08/10/2018 - 14/10/2018**

###   - Planejamentos:
        - reescrever código do carrinho em ceu
        - medir diferenças energéticas entre os códigos
        
###   - Realizados: 
        - código do carrinho reescrito e funcionando --> falta testar no carrinho com os motores
        - diferenças energéticas medidas --> remedir após consertar mal contato dos fios
 
# **Semana 15/10/2018 - 21/10/2018**

###   - Planejamentos:
        - fazer o carrinho funcionar de forma completa
        - corrigir o código para não enviar sempre os dados
        
###   - Realizados: 


    

