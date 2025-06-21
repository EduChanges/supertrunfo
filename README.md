# Supertrunfo
Adicione dados a duas cartas nesse prototipo de super trunfo estados e cidade
## Versão 0.2
O que mudou? 
- agora é permitido escolher estados reais ou ficticios com mais de um caracter
- é possivel escrever com espaços sem dar bug de pular seleções de entrada de dados devido ao espaçamento entre "scanf("_%", variavel); (aspas e "%") no código
- não acumula mais "lixo" no buffer de entrada se executado corretamente

Esta é uma das versões iniciais (v0.2) e tem como objetivo adicionar os dados básicos nas 2 cartas do jogo de Supertrunfo.
jogo inicialmente programado apenas em "C"
---

## 📄 Descrição
- Inclusão das cartas com atributos básicos em C.
- Estrutura inicial pronta para manipulação de dados.
- Arquivos principais:
  - `supertrunfo.c`: lógica do jogo
  - `dados.txt`: base de dados
  - Outros arquivos de configuração e testes

---

## 💻 Como abrir o projeto
Abra a pasta do projeto com sua IDE de preferência (Ambiente de Desenvolvimento Integrado), como:
- **Visual Studio Code** (recomendado, com extensão C/C++)
- **Code::Blocks**
- Ou qualquer outra que suporte C/C++

---

## 🛠️ Instruções Rápidas
```bash
# Compilar (se a IDE não fizer automágicamente)
gcc src/supertrunfo.c -o supertrunfo.exe

# Executar
1- abra o prompt
2- cd supertrunfo\src
3- ./supertrunfo.exe
