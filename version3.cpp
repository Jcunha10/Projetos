#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

/**
 * Classe que abstrai um Sensor.
 */
class Sensor {    
private:
int identificador;
    string nome;
    int temp;      
    int umidade;
    string data;    

public:

    /**
     * Implementação do Construtor sem parâmetro
     */
    Sensor() : Sensor(0, "", 0, 0, "") {
    }

   
    Sensor(int identificador, string nome, int temp, int umidade, string data) {
        setIdentificador(identificador);
setNome(nome);
setTemp(temp);
setUmidade(umidade);
        setData(data);

    }
    //Get´s e Set´s

int getIdentificador() {
        return identificador;
    }

    
    void setIdentificador(int identificador) {
        this->identificador = identificador;
    }







    /**
     * Recuperador de Nome
     * @return Uma string com o nome.
     */
    string getNome() {
        return nome;
    }

    /**
     * Modificador de Nome
     * @param nome Um valor string a ser atribuído para o nome do responsáveo pelo registro
     */
    void setNome(string nome) {
        this->nome = nome;
    }

    /**
     * Recuperador de Temepratura
     */
    int getTemp() {
        return temp;
    }

   
    void setTemp(int temp) {
        this->temp = temp;
    }


int getUmidade() {
        return umidade;
    }

    /**
     * Modificador de Umidade
     */
    void setUmidade(int umidade) {
        this->umidade = umidade;
    }




    string getData() {
        return data;
    }

  
    void setData(string data) {
        this->data = data;
    }
};


class Dados {    
private:
    Sensor* registros[100];
    int valor;
public:

    /**
     * Implementação do Construtor sem parâmetro
     */
    Dados() {
        setValor(0);    
    }


    int getValor() {
        return valor;
    }

   
    void setValor(int valor) {
        this->valor = valor;
    }

   
   
    Sensor* getRegistros(int i) {
        if (i < getValor()) {
       // if (i < getvalor()) {
       
            return registros[i];
        } else {
            return NULL;
        }
    }



      void setSensor(Sensor* registro) {
        //Coloca o registro no vetor
        registros[getValor()] = registro;
        //Incrementa
        setValor(getValor() + 1);
    }


};


void menuExcluir() { //Submenu da case 2 - Excluir por Chave ou Descrição

int opcao2 = -1;
    while (opcao2 != 9) {

        //Escreve o menu de opções do nível 2
        cout << endl << ">> Exclusão de Registros <<"
             << endl << " 1 - Opção Excluir por ID "
             << endl << " 2 - Opção Excluir por chave"
             << endl << " 9 - Voltar ao nível anterior"
             << endl << " Digite uma opção:";

        //Lê a opção de entrada do nível 2
        cin >> opcao2;
        switch (opcao2) {
            case 1:
                cout << endl << "Executando opção 1.1";
                break;
            case 2:
                cout << endl << "Executando opção 1.2";
                break;

                //Outras opções vão aqui

            case 9:
                cout << endl << "Voltando ao nível 0";
                system("cls");
break;
            default:
                cout << endl << "Opção inválida";
        }
    }
}

void menuAlterar() {  //Submenu da função case 3 -  Alterar por Chave ou Descrição
    //Variável que define as opções do menu nível 2
    int opcao2 = -1;
    while (opcao2 != 9) {
        //Escreve o menu de opções do nível 2
        cout << endl << ">> Alteração de Registros <<"
             << endl << " 1 - Alterar registro por Chave"
             << endl << " 2 - Alterar registro por Descrição"
             << endl << " 9 - Voltar ao nível 0"
             << endl << " Digite uma opção:";

        //Lê a opção de entrada do nível 2
        cin >> opcao2;
        switch (opcao2) {
            case 1:
               cout << endl << "Executando opção 2.1";
                break;
            case 2:
                cout << endl << "Executando opção 2.2";
                break;

                //Outras opções vão aqui

            case 9:
                cout << endl << "Voltando ao nível 0";
                system("cls");
break;

            default:
                cout << endl << "Opção inválida";
        }
    }
}

void menuConsultar() {          //case 4: //Consultar (4.1 Chave - 4.2 Descritivo)
    //Variável que define as opções do menu nível 2
    int opcao3 = -1;
    while (opcao3 != 9) {
        //Escreve o menu de opções do nível 2
        cout << endl << ">> Consulta de Registros <<"
             << endl << " 1 - Consultar Registro por Chave"
             << endl << " 2 - Consultar o Registro por Descirção"
             << endl << " 9 - Voltar ao nível 0"
             << endl << " Digite uma opção:";

        //Lê a opção de entrada do nível 2
        cin >> opcao3;
        switch (opcao3) {
            case 1:
                cout << endl << "Executando opção 2.1";
               
                {
               

}

                break;
            case 2:
                cout << endl << "Executando opção 2.2";
                break;

                //Outras opções vão aqui

            case 9:
                cout << endl << "Voltando ao nível 0";
                system("cls");
                break;
            default:
                cout << endl << "Opção inválida";
        }
    }
}





int main(int argc, char *argv[]) {

setlocale(LC_ALL, "Portuguese");

Dados* dados = new Dados();

    //Variável que define as opções do menu
    int opcao1 = -1;
    while (opcao1 != 9) {
        //Escreve o menu de opções
        cout << endl << ">> REGISTRO DE TEMPERATURA E UMIDADE <<" << endl
                << endl << " 1 - Incluir Registro de temperatura e umidade"
                << endl << " 2 - Exluir Registros"
                << endl << " 3 - Alterar Registros"
                << endl << " 4 - Consultar Registros"
                << endl << " 5 - Listar Registros"
                << endl << " 99 - Sair"
                << endl << " Digite uma opção:";
        //Lê a opção de entrada
        cin >> opcao1;
        switch (opcao1) {
            case 1://Adicionar Novos Registros
            {
                Sensor* registro = new Sensor();
                string nome, data;
                int identificador, temp, umidade;
               
                cout << endl << "Digite o número de identificação do registro: ";
              //  cin.ignore();
               
              cin >> identificador;  
             //   getline(cin, identificador);
               

cout << endl << "Digite o nome do responsável pelo registro: ";
               // cin.ignore();
               cin >> nome;
                //getline(cin, nome);
               
                cout << "Digite o valor da temperatura: ";
                cin >> temp;
               
                  cout << "Digite o valor da umidade: ";
                cin >> umidade;
               
               
                cout << "Digite a data atual: ";
               // cin.ignore();
               
				cin >> data;
				//getline(cin, data);
               
               
                //Preenche o objeto
                registro->setIdentificador(identificador);  //Criado Jaime
                registro->setNome(nome);
                registro->setTemp(temp);
                registro->setUmidade(umidade);
                registro->setData(data);
                //Seta o registro no Sensor
                dados->setSensor(registro);
               
                system("cls");
               
                cout << "Registro incluído com sucesso!!!! "<< endl << endl;
               
                break;
            }
            case 2: //Exluir REgistros
            {
           
            menuExcluir();
                break;
               
            }
            case 3:      //Alterar (3.1 Chave - 3.2 Descritivo)

            {
               
menuAlterar();
break;


//cout << endl << "Quantidade de alunos: " << dados->getValor() << endl;
               // break;
           }
 
   case 4: //Consultar (4.1 Chave - 4.2 Descritivo)

            {
                     
            menuConsultar();
            break;
           
         /*       int fase = 0;
                cout << "Digite a fase do aluno: ";
                cin >> fase;
                cout << endl << "Quantidade de alunos da fase " << fase << " : " << universidade->getQuantidadeAlunoFase(fase) << endl;
          */      break;
         }  
         
         
         case 5: // é para listar Listar, mas na verdade está contando quantos registros tem.

          {
           if (dados->getValor() != 0) {
                    cout << endl << "Consulta:" << endl;
                    int posicao, identificador;
                    cout << "Digite a posição do aluno: ";
                    //cin >> posicao;
                    cin >> identificador;
                    if (identificador > 0 && identificador < dados->getValor()) {
//if (posicao > 0 && posicao < dados->getValor()) {
                        Sensor* registro = dados->getRegistros(posicao);
                        cout << "O ID é   " << registro->getIdentificador() << endl;
                        cout << "O responsável é " << registro->getNome() << endl;
                        cout << "O valor de temperatura é: " << registro->getTemp() << endl;
cout << "O valor de umidade é: " << registro->getUmidade() << endl;
                        cout << "Data do registro é " << registro->getData() << endl;
                    }
                } else {
                    cout << endl << "Não existe registros" << endl;
                }
                break;
         }            
               
            case 99:
                cout << endl << "Saindo do sistema";
                //break;
                return EXIT_SUCCESS;
            default:
                cout << endl << "Opção inválida";
        }
    }
    return EXIT_SUCCESS;
}
