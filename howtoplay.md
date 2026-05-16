# 👑 Super Trunfo: Pop Divas Edition

Bem-vindo ao **Super Trunfo: Pop Divas Edition**, um jogo de cartas interativo baseado em texto feito inteiramente em C/C++. Aqui, você pode cadastrar suas divas da música favoritas, comparar seus marcos históricos de carreira e descobrir quem realmente domina a indústria.

---

##🕹️ Como Jogar

O funcionamento do jogo é simples e dividido em três etapas principais:

### 1. O Cadastro das Divas

O jogo solicitará os dados de duas artistas distintas para preencher as "cartas" do confronto. Você precisará informar:

* **Nome** da artista.
* **Álbum de estreia** (*Debut album*).
* **Vendas estimadas** em milhões (ex: digite `300m`).
* **Quantidade de Grammys** vencidos.
* **Total de Streams no Spotify** em milhões (ex: digite `40m`).
* **Ano de nascimento**.

> 💡 **Nota técnica:** Ao digitar as vendas e os streams, você pode incluir a letra **m** no final (como `300m` ou `45m`). O sistema foi projetado para capturar essa letra de forma inteligente e limpar o buffer do teclado automaticamente, evitando falhas na leitura dos próximos dados.

### 2. A Escolha do Atributo

Após o cadastro, um menu interativo será exibido na tela. Você deve escolher qual estatística deseja usar para o confronto atual:

1. **Estimated Sales** (Vendas Estimadas)
2. **Grammys** (Grammys Vencidos)
3. **Total of Streams on Spotify** (Total de Streams)
4. **Success** (Índice de Sucesso)

### 3. O Resultado do Confronto

O programa processará os dados das duas cartas e exibirá o placar comparativo:

* Para as opções **1, 2 e 3**, o maior valor vence a rodada.
* Se os valores forem idênticos, o jogo declarará um **empate**.

---

## 📊 O Atributo Especial: Índice de Sucesso (*Success*)

O grande diferencial estratégico deste Super Trunfo é o atributo **Success**. Ele é calculado automaticamente pela fórmula:

$$Success = \frac{\text{Vendas Estimadas}}{\text{Streams no Spotify}}$$

### Critério Único de Vitória:

Diferente dos outros atributos, no caso do *Success*, **o menor valor vence**.

Isso acontece porque um valor menor indica que a artista possui um volume massivo de streams digitais em proporção às suas vendas físicas/estimadas, representando a força da transição e dominância da artista na era do streaming moderno. É o critério perfeito para desempatar disputas acirradas!

---

## 🛠️ Como Executar o Projeto

Para compilar e rodar o jogo na sua máquina local, você precisará de um compilador de C/C++ (como o GCC) instalado.

1. Clone este repositório no seu terminal:

```bash
git clone https://github.com/seu-usuario/nome-do-repositorio.git

```

2. Navegue até a pasta do projeto:

```bash
cd nome-do-repositorio

```

3. Compile o arquivo principal:

```bash
g++ main.cpp -o super_trunfo

```

4. Execute o jogo:

```bash
./super_trunfo

```
#OU abrir o seguinte link no seu navegador e apagar o codigo base contendo "hello world" e colar o código feito por mim!
https://www.mycompiler.io/pt/new/cpp
