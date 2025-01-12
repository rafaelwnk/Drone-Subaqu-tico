### Submarino Controlado via Bluetooth

Este repositório contém o projeto de um submarino desenvolvido para a disciplina de Fenômenos de Transporte. O objetivo do projeto foi construir um modelo funcional de submarino controlado via Bluetooth, utilizando componentes eletrônicos e hidráulicos simples.

---

### Materiais Utilizados

- **Cano PVC** - Estrutura principal do submarino.
- **Arduino Uno** - Microcontrolador responsável pela lógica de controle.
- **Driver Motor Ponte H Dupla L298N** - Para controlar as bombas d'água.
- **Módulo Bluetooth HC-06** - Comunicação sem fio.
- **Protoboard** - Montagem do circuito.
- **2 Mini Bombas d'Água** - Para controlar a entrada e saída de água.

---

### Funcionamento

O submarino opera com controle remoto via Bluetooth, permitindo a manipulação da entrada e saída de água para controlar sua flutuação. O funcionamento é baseado nos seguintes comandos:

- **Comando 'w'**: Aciona uma mini bomba d'água que transfere água da piscina para uma garrafa PET dentro do submarino, aumentando o peso e fazendo-o afundar.
- **Comando 's'**: Aciona outra mini bomba que remove a água da garrafa PET, reduzindo o peso e fazendo o submarino voltar à superfície.

---

### Como Usar

1. **Montagem do Circuito**:
   - Conecte os componentes seguindo o diagrama (fornecido no repositório).
   - Certifique-se de fixar as bombas d'água e o Arduino na estrutura do submarino.

2. **Código do Arduino**:
   - Faça upload do código `submarino.ino` para o Arduino Uno.

3. **Conexão Bluetooth**:
   - Emparelhe o módulo Bluetooth HC-06 com o seu dispositivo móvel ou computador.
   - Utilize um aplicativo ou software serial para enviar os comandos.

4. **Testes**:
   - Envie o comando 'w' para fazer o submarino afundar.
   - Envie o comando 's' para fazê-lo emergir.

---

### Aplicações

Este projeto demonstra conceitos de:
- Controle de flutuação e densidade.
- Integração de sistemas eletrônicos e hidráulicos.
- Comunicação via Bluetooth para sistemas embarcados.