# Arquivo: cadastro_cartas.feature

Funcionalidade: Cadastro de Cartas do Super Trunfo
  Como usuário do sistema
  Quero cadastrar informações de duas cartas do Super Trunfo
  Para que eu possa visualizar os dados completos de cada carta de forma organizada

Contexto:
  Dado que o usuário possui o programa de cadastro de cartas do Super Trunfo
  E o programa está pronto para receber informações de duas cartas
  E cada carta deve ter Estado, Código, Nome da Cidade, População, Área, PIB e Número de Pontos Turísticos

Cenário: Cadastro da Carta 1 com estado "Acre"
  Quando o usuário informa:
    | Estado       | Acre      |
    | NomeCidade   | Rio Branco|
    | População    | 400000    |
    | Área         | 5645.0    |
    | PIB          | 12.5      |
    | PontosTurísticos | 10     |
  Então o sistema deve gerar automaticamente o código da carta como "A01"
  E exibir todas as informações da carta 1 corretamente na tela

Cenário: Cadastro da Carta 2 com estado "Bahia"
  Quando o usuário informa:
    | Estado       | Bahia     |
    | NomeCidade   | Salvador  |
    | População    | 2900000   |
    | Área         | 693.0     |
    | PIB          | 45.0      |
    | PontosTurísticos | 20     |
  Então o sistema deve gerar automaticamente o código da carta como "B02"
  E exibir todas as informações da carta 2 corretamente na tela

Cenário: Cadastro da Carta 1 com estado "Acre" e Carta 2 com estado "Amazonas"
  Quando o usuário informa:
    | Carta | Estado      | NomeCidade | População | Área   | PIB  | PontosTurísticos |
    | 1     | Acre        | Aparecida  | 400000    | 5645.0 | 12.5 | 10               |
    | 2     | Amazonas    | Amaturá    | 300000    | 12345.0| 20.0 | 8                |
  Então o sistema deve gerar automaticamente os códigos "A01" para a Carta 1 e "A02" para a Carta 2
  E exibir todas as informações das duas cartas corretamente na tela
