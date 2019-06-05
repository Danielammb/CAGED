#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct funcionario
{
    char codigo;
    string nome;
    string data;

};

void salvaArquivo(char vetor[])
{
    int code, ano, mes, dia;
    string nome[30];
    for(int i = 0; i < 40; i++)
    {

    }
}

int contaFuncionarios()
{
    string line;
    ifstream txtFile;
    txtFile.open("caged.cag");
    int contagem = 0;
    int i = 0;
    while(getline(txtFile, line))
    {
        //cout << "contagem"<<contagem << endl;
        for(char& c : line)
        {
            if (i == 39)
            {
                i = 0;
                contagem++;
            }
            else
            {
                i++;
            }
        }
        i++;
    }
    txtFile.close();
    return contagem;
}



int main()
{
    funcionario func[100];

    string line;
    ifstream txtFile;
    txtFile.open("caged.cag");
    int i = 0;
    char cod;
    string nm = "";
    int idFunc=0;
    string dt="";
    int a = contaFuncionarios();
    cout << "a"<<a << endl;
    int somaA=0;
    int somaD=0;
    int somaF=0;
    int somaLM=0;
    while (getline(txtFile, line))
    {

        for(int z = 0; z<40*a; z++)
        {
            //cout<<line[z]<<endl;

            if((z>=2+(40*idFunc))&&(z<=29+(40*idFunc)))
            {

                nm = nm + line[z];
                //pega o nome do funcionario
            }
            if(z==(30+(40*idFunc)))
            {
                func[idFunc].nome=nm;
                //cout<<func[idFunc].nome<<endl;
                nm="";
            }
            if(z%40==0)
            {

                func[idFunc].codigo=line[z+1];
                //cout<<func[idFunc].codigo<<endl;             //pega o codigo do funcionario

            }

            if((z>=31+(idFunc*40))&&(z<=39+(idFunc*40)))
            {
                dt = dt + line[z];
            }
            if(z==39+(idFunc*40))
            {
                func[idFunc].data=dt;
                //cout<<func[idFunc].data<<endl;
                dt="";
                idFunc++;
            }

        }





    }
    txtFile.close();


    int op;



    do
    {

        cout<<"==========================================="<<endl;
        cout<<"--------------------Menu-------------------"<<endl;
        cout<<" Digite o numero da opcao:        "<<endl;
        cout<<" 1 - funcionarios admitidos;      "<<endl;
        cout<<" 2 - funcionarios demitidos;      "<<endl;
        cout<<" 3 - funcionarios em licenca medica;      "<<endl;
        cout<<" 4 - funcionarios de ferias;      "<<endl;
        cout<<" 5 - Quantitativo de funcionarios;      "<<endl;
        cout<<" 6 - Fechar programa;      "<<endl;
        cout<<"==========================================="<<endl;
        cin>>op;

        switch(op)
        {
        case 1:
            cout<<"Funcionarios Admitidos: "<<endl;
            for(int d=0; d<100; d++)
            {
                if(func[d].codigo=='1')
                {

                    cout<<"Nome: "<<func[d].nome<<" Data: "<<func[d].data<<endl;
                }
            }
            cout<<endl;
            cout<<endl;
            break;
        case 2:
            cout<<"Funcionarios Demitidos: "<<endl;
            for(int d=0; d<100; d++)
            {
                if(func[d].codigo=='2')
                {

                    cout<<"Nome: "<<func[d].nome<<" Data: "<<func[d].data<<endl;
                }
            }
            cout<<endl;
            cout<<endl;
            break;
        case 3:
            cout<<"Funcionarios em Licença Medica: "<<endl;
            for(int d=0; d<100; d++)
            {
                if(func[d].codigo=='3')
                {

                    cout<<"Nome: "<<func[d].nome<<" Data: "<<func[d].data<<endl;
                }
            }
            cout<<endl;
            cout<<endl;
            break;
        case 4:
            cout<<"Funcionarios de Ferias: "<<endl;
            for(int d=0; d<100; d++)
            {
                if(func[d].codigo=='4')
                {

                    cout<<"Nome: "<<func[d].nome<<" Data: "<<func[d].data<<endl;
                }
            }
            cout<<endl;
            cout<<endl;
            break;
        case 5:

            for(int d=0; d<100; d++){
                if(func[d].codigo=='1')
                {
                    somaA++;
                }
                else if(func[d].codigo=='2')
                {
                    somaD++;
                }
                else if(func[d].codigo=='3')
                {
                    somaLM++;
                }
                else if(func[d].codigo=='4')
                {
                    somaF++;
                }


            }
            cout<<"Quantitativo de Funcionarios: "<<endl;
            cout<<"Funcionarios admitidos: "<<somaA<<endl;
            cout<<"Funcionarios demitidos: "<<somaD<<endl;
            cout<<"Funcionarios em licença medica: "<<somaLM<<endl;
            cout<<"Funcionarios de ferias: "<<somaF<<endl;
            cout<<endl;

            break;
        case 6:
             cout<<"Fechando programinha..."<<endl;
            break;
        default:
            cout<<"Opção inválida!"<<endl;
            cout<<endl;
            break;
        }


    }
    while(op!=6);




    return 0;
}
