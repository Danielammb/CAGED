# CAGED
Exercício de AEDS III - leitura de formato de arquivo

O programa proposta lê o arquivo caged.cag que possui os dados de 100 funcionários em uma única linha, dispostos da seguinte forma:
os dois primeiros numeros representam o código da status do funcionário(01 - funcionário admitido; 02 - funcionário demitido; 03 - funcionário em licença médica; 04 - funcionário de férias); os 30 espaços seguintes são preenchidos com o nome do funcionário e se o nome não preencher todos os 30, há então espaços em branco; em seguida, a data em que ocorreu tal situação indicada pelo código.

Na Main do programa, programado em c++, quando compilado é mostrado ao usuário um menu em que ele poderá escolher entre as seguintes opções ao digitar os números:

==========================================
--------------------Menu------------------
 Digite o numero da opcao:        
 1 - funcionarios admitidos;      
 2 - funcionarios demitidos;    
 3 - funcionarios em licenca medica;      
 4 - funcionarios de ferias;     
 5 - Quantitativo de funcionarios;    
==========================================

Ao digitar o número 1, seram impressos na tela os nomes e as datas dos funcionários admitidos. Analogamente, nos casos 2, 3 e 4 serão impressos na tela os nomes e as datas correspondentes aos funcionários nos status deteminadas em cada opção.
Ao digitar a opção 5, seram impressas as quantidades de funcionários que há em cada um dos quatro status.

