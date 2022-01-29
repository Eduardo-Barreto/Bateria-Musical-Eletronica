<p align="center">
    <img src="Images/Bateria.png" height="200" alt="Bateria"/>
</p>
<h1 align="center">Bateria Musical Eletrônica</h1>
<p align="center">Uma bateria musical funcional feita do zero com diversos elementos da Cultura Maker</p>

<h3 align="center">🚧 Em construção 🚧</h3>


<p align="center">
 <a href="#-ideia">Ideia</a> • 
 <a href="#-escolha-dos-materiais">Escolha dos materiais</a> • 
 <a href="#-contribuindo">Contribuindo</a>
</p>


# 💡 Ideia
Durante o desenvolvimento do ano de 2021, decidimos desenvolver um projeto com **robótica**, mas sempre buscamos relações e inspirações em outras áreas para desenvolver o que queremos. Dessa vez não foi diferente, resolvemos juntar isso com outras duas coisas que gostamos muito: a **música** e os **jogos**.

A maioria das pessoas da nossa geração já jogou algum jogo relacionado a música, os mais conhecidos são o **Piano Tiles** (aquele joguinho de celular que você tem que apertar as teclas no momento certo) e o precursor e inspirador dele: o **Guitar Hero**, mais conhecido e um pouco mais complexo, envolvendo até instrumentos da vida real sendo adaptados como controles desse jogo, como guitarras, microfones e nesse caso, baterias.

<p align="center">
    <img src="Images/Concepcao/PianoTiles.gif" alt="Piano Tiles" width="19%"></img>
    <img src="Images/Concepcao/GuitarHero.gif" alt="Guitar Hero" width="70%"></img> 
</p>


Foi pensando nisso que decidimos fazer a nossa própria **bateria do zero**.

# 📦 Escolha dos materiais
## Estrutura
Para começar a definir os materiais e componentes que precisaríamos, sempre tentando deixar tudo o mais simples e barato possível, desenhamos a estrutura no [Fusion 360](https://www.autodesk.com/products/fusion-360/overview), um software de modelagem 3D que ja tínhamos experiência.

Ela começou como uma bateria inteira, com a parte inferior de sustentação e a estrutura superior que segura os tons e os pratos.

![Desenho Inicial](Images/EscolhaMateriais/DesenhoInicial.png)

Com os desenhos prontos, a tarefa de definir os materiais ficou bem mais simples. Definimos o seguinte:

- Estrutura principal de sustentação: Canos de PVC
- Tons e pratos: MDF
- Encaixes especiais: Impressão 3D

Quando analisamos nossos prazos e orçamentos, decidimos retirar o apoio inferior com os canos de PVC, diminuindo muito o custo e o tempo pra montar a versão final, se transformando numa espécie de bateria de mesa.

![Desenho Final](Images/EscolhaMateriais/DesenhoFinal.png)

## Eletrônica
Ainda faltava decidir como seria a parte **eletrônica** da bateria, responsável por entender onde o jogador está batendo e enviar os sinais para o computador.

Para a bateria sentir onde foi a batida, decidimos usar **cápsulas piezoelétricas**, que são placas de quartzo que podem funcionar como uma espécie de **sensor de vibração**. Quando batemos num prato, por exemplo, o prato vibra e essa vibração chega no sensor, que gera um sinal elétrico.

<p align="center">
    <img src="Images/EscolhaMateriais/Piezo.png" alt="Cápsula Piezoelétrica" width="50%"> <img src="Images/EscolhaMateriais/Piezo.gif" alt=" Gif Cápsula Piezoelétrica" width="40%">
</p>

Para gerenciar esses sinais, escolhemos um **microcontrolador** chamado **Arduino Pro Mini**, por ele ser bem compacto e ter uma semelhança intressante com o Arduino Leonardo, que é outra versão dessa família de microcontroladores: Eles conseguem **simular o pressionamento de uma tecla**, como se fosse um teclado conectado ao computador, assim conseguimos jogar qualquer jogo que dependa disso, desde o jogo da cobrinha, o dinossauro do Google e até o Guitar Hero, que é o nosso objetivo.

![Arduino Pro Mini](Images/EscolhaMateriais/ArduinoProMini.png)

## 📫 Contribuindo
Se quiser contribuir com este projeto basta seguir essas etapas:

1. Faça um Fork desse repositório
2. Crie um branch: `git checkout -b <nome_branch>`.
3. Faça suas alterações, adicione e confirme: `git add .` e `git commit -m "<mensagem_commit>"` (em português, por favor)
4. Envie para a branch original: `git push origin master`
5. Crie o pull request.

Você também pode ver na documentação do GitHub [como criar um pull request](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request).

> Stars são sempre bem vindas :)
