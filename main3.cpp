#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

/**
 * Classe que abstrai um Aluno.
 */
class Aluno {
private:
int id;
    string nome;
    int fase;
    string curso;

public:


    //Implementação do Construtor sem parâmetro
    Aluno() : Aluno(0, "", 0, "") {
    }

    /**
     * Implementação do Construtor com parâmetros
     * @param nome Nome do aluno
     * @param fase Fase que o aluno se encontra.
     * @param curso Curso que o aluno realiza.
     */
    Aluno(int id, string nome, int fase, string curso) {
        setId(id);
setNome(nome);
        setFase(fase);
        setCurso(curso);

    }
    //Get´s e Set´s

int getId() {
        return id;
    }

void setId(int id) {
        this->id = id;
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
     * @param nome Um valor string a ser atribuído para o nome do aluno.
     */
    void setNome(string nome) {
        this->nome = nome;
    }

    /**
     * Recuperador de Fase
     * @return Um inteiro com a fase do aluno.
     */
    int getFase() {
        return fase;
    }

    /**
     * Modificador de Fase
     * @param fase Um valor inteiro a ser atribuído para a fase do aluno.
     */
    void setFase(int fase) {
        this->fase = fase;
    }

    /**
     * Recuperador de Curso
     * @return Uma string com o curso.
     */
    string getCurso() {
        return curso;
    }

    /**
     * Modificador de Curso
     * @param curso Um valor string a ser atribuído para o curso do aluno.
     */
    void setCurso(string curso) {
        this->curso = curso;
    }
};

/**
 * Classe que abstrai uma Universidade.
 */
class Universidade {
private:
   Aluno* lista[100];
  int quantidade;
 
public:
Universidade(){
setQuantidade(0); //inicia a universidade com zeros alunos
}

void setQuantidade (int quantidade){
this->quantidade = quantidade;
}

int getQuantidade(){
return quantidade;
}

void incluir(Aluno* aluno){
lista[getQuantidade()] = aluno;
setQuantidade(getQuantidade() + 1);

}

void listarAlunos(){
cout << "Listagem de alunos " << endl;
for(int i = 0; i < getQuantidade();i++){
cout << " ID:" << lista [i]->getId() << " ALUNO:" << lista[i]->getNome() << "   FASE:" << lista[i]->getFase() << "   CURSO:" << lista[i]->getCurso()<< endl;
}
}

//NAO ESTA FUNCIONANDO
void consultarAlunos(){ //Criado por jaime
cout << "DIGITE O ID " << endl;
//cin>> id;
for (int i = 0; i < getQuantidade(); i++){
cout << "ID: "<< lista [i]->getId()<< " ALUNO:" << lista[i]->getNome();

}

{




}





}


};

int main(int argc, char *argv[]) {

//system("Color 1A");
system("Color 03");

setlocale(LC_ALL, "Portuguese");

    Universidade* unisul = new Universidade();

    //Variável que define as opções do menu
   
int opcao = -1;
    while (opcao != 9) {
        //Escreve o menu de opções
        cout << endl << ">>>>  MENU UNIVERSIDADE  <<<<" << endl
                << endl << " 1  - INCLUIR "
                << endl << " 2  - EXCLUIR "
<< endl << " 3  - ALTERAR "
<< endl << " 4  - CONSULTAR "
<< endl << " 5  - LISTAR"
                //<< endl << " 3 - Contar Alunos"
                //<< endl << " 4 - Contar Alunos Fase"
                << endl << " 99 - SAIR" << endl
                << endl << " DIGITE UMA OPÇÃO:";
        //Lê a opção de entrada
        cin >> opcao;
        switch (opcao) {
            case 1:
            {
                //Aluno* aluno = new Aluno();
                string nome, curso;
                int id, fase;
                cout << endl << "DIGITE O ID DO ALUNO: ";
cin>> id;
cout << endl << "DIGITE O NOME DO ALUNO: ";
                cin.ignore();
                getline(cin, nome);
                cout << endl <<"DIGITE A FASE DO ALUNO: ";
                cin >> fase;
                cout <<endl << "DIGITE O CURSO DO ALUNO: ";
                cin.ignore();
                getline(cin, curso);
               
//Preenche o objeto
                Aluno* aluno = new Aluno(id, nome, fase, curso);

//Incluir o aluno na universidade
                unisul->incluir(aluno);
                break;
            }
            case 2: //Excluir
            {
            //unisul->listarAlunos();
           
                break;
            }
            case 3://Alterar
            {
            //unisul->listarAlunos();
           
                break;
            }
            case 4://Consultar
            {
            unisul->consultarAlunos();
            //unisul->listarAlunos();
           
                break;
            }
            case 5:
            {
            unisul->listarAlunos();
           
                break;
            }
            case 99:
                cout << endl << "SAINDO DO SISTEMA";
                return EXIT_SUCCESS;
                break;
            default:
                cout << endl << "OPÇÃO INÁLIDA";
        }
    }
    return EXIT_SUCCESS;
}
