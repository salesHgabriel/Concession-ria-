/*
1 - criar dois menus
primeiro irá cadastrar as informações do carro
e depois irá cadastrar as pessoas

*/



#include <stdio.h>

#include <string.h>
#include <stdlib.h>

 typedef struct lista{

    char nome [40];
    int  rg   [15];
    char sexo [10];
    int  cpf  [10];
    int  datanascimento[6];
    char nacionalidade [15];
    char naturalidade  [15];
    char endereco [30];
    int  numero   [5];
    char complemento [30];
    char municipio   [15];
    char bairro [15];
    int  cep[7];
    int  telefone [12];
    int  celular  [12];
    char email    [30];
     unsigned long int codigo;
     struct lista* prox;
   }Lista;


   typedef struct Lista_carro{
   char marca[10];
   char modelo[10];
   char placa[10];
   char cor[10];
   char ano[10];
   int renavam[10];

   }Lista_carro;

   //Declaração de funções.
   Lista* inserir_cliente(Lista* primeiro);
   void listar_cliente(Lista* primeiro);

   Lista* inserir_carro(Lista* primeiro);
   void listar_carro(Lista* primeiro);

int main()
{
   //Declaração de variáveis
   Lista *primeiro= NULL;
   char opcao;

   //Artifício para repetir o programa.
   while(opcao!='s')
   {
     //Menu de opcoes
      printf(" ----------------------------------------------------------------------------\n");
      printf(" | ");printf("\t\t\t     CADASTRAR CLIENTE");printf("\t\t\t      |\n");
      printf(" ----------------------------------------------------------------------------\n");
      printf("\n --------\t\t\t ------------------------");
      printf("\t\t\t               |   MENU             ");printf("|\t\t\t\t      \n");
      printf("   ------------------------------------ \n");
      printf("   | <A>  Novo cadastro                |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <B>  Listar                       |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <S>  Sair                         |\n");
      printf("   ------------------------------------");
      printf("\n\n\n\n");




      //Lendo a opcao do menu
      fflush(stdin);
      opcao= getch();

      /*
      printf(" ----------------------------------------------------------------------------\n");
      printf(" | ");printf("\t\t\t     CADASTRAR CARRO");printf("\t\t\t      |\n");
      printf(" ----------------------------------------------------------------------------\n");
      printf("\t       ----------\t\t\t\t       ");
      printf("\t\t\t               |   MENU   ");printf("|\t\t\t\t      \n");
      printf("   ------------------------------------ \n");
      printf("   | <A>  Novo cadastro                |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <B>  Listar                       |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <S>  Sair                         |\n");
      printf("   ------------------------------------");
      printf("\n\n\n\n");

*/


      //Lendo a opcao do menu
      fflush(stdin);
      opcao= getch();

      //Menu de opcoes
      switch(opcao)
      {
         case 'A':
         case 'a':
              //Inserindo os clientes
              fflush(stdin);
              system("cls");
              printf(" ----------------------------------------------------------------------------\n");
              printf(" | ");printf("\t\t\t          NOVO CADASTRO     ");printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------------\n");
              primeiro= inserir_cliente(primeiro);
         getch();
         system("cls");
         break;

         case 'B':
         case 'b':
              //Listando os clientes.
              system ("cls");
              printf(" ----------------------------------------------------------------------------\n");
              printf(" | ");printf("\t\t\t     CLIENTES CADASTRADOS");printf("\t\t\t      |\n");
              printf(" ----------------------------------------------------------------------------\n");
              listar_cliente(primeiro);
         getch();
         system("cls");
         break;

         case 'S':
         case 's':
              //Artifício para sair do programa.
              opcao='s';
         break;

         default:
              //Artifício que previne a situação de um usuário qualquer, digitar uma opcão inexistente no menu.
              system("cls");
         break;
      }
   }
}

Lista* inserir_cliente (Lista *primeiro){
     Lista cliente;
     Lista *atual= primeiro;
     char identificador= 'F';

     //Lendo as informações do cliente.


     printf("  Nome Completo: ");
     fflush (stdin);
     fgets(cliente.nome,40, stdin);
     printf ("\n");

     printf("  Sexo: ");
     fflush (stdin);
     fgets(cliente.sexo,10, stdin);
     printf ("\n");

     printf("  RG: ");
     fflush (stdin);
     fgets(cliente.rg, 15, stdin);
     printf ("\n");

     printf("  CPF: ");
     fflush (stdin);
     fgets(cliente.cpf,10, stdin);
     printf ("\n");

     printf("  Data de Nascimento: ");
     fflush (stdin);
     fgets(cliente.datanascimento,6, stdin);
     printf ("\n");

     printf("  Nacionalidade: ");
     fflush (stdin);
     fgets(cliente.nacionalidade,15, stdin);
     printf ("\n");

     printf("  Naturalidade: ");
     fflush (stdin);
     fgets(cliente.naturalidade,15, stdin);
     printf ("\n");

     printf("  Endereco: ");
     fflush (stdin);
     fgets(cliente.endereco,30, stdin);
     printf ("\n");

     printf("  Numero: ");
     fflush (stdin);
     fgets(cliente.numero,5, stdin);
     printf ("\n");

     printf("  Complemento: ");
     fflush (stdin);
     fgets(cliente.complemento,30, stdin);
     printf ("\n");

     printf("  Municipio: ");
     fflush (stdin);
     fgets(cliente.municipio,15, stdin);
     printf ("\n");

     printf("  Bairro: ");
     fflush (stdin);
     fgets(cliente.bairro,15, stdin);
     printf ("\n");

     printf("  CEP: ");
     fflush (stdin);
     fgets(cliente.cep,7, stdin);
     printf ("\n");

     printf("  Telefone: ");
     fflush (stdin);
     fgets(cliente.telefone,12, stdin);
     printf ("\n");

     printf("  Celular: ");
     fflush (stdin);
     fgets(cliente.celular,12, stdin);
     printf ("\n");

     printf("  Email: ");
     fflush (stdin);
     fgets(cliente.email,30, stdin);
     printf ("\n");

     printf("  Codigo: ");
     scanf("%u",&cliente.codigo);
     printf ("\n");

     //Verificando se o cadastro já existe.
     for(atual=primeiro; atual!=NULL; atual=atual->prox){
        if(atual->codigo==cliente.codigo){
            identificador= 'V';
            break;
        }
     }


     if(identificador!='V' && (strlen(carro.marca)!=1 && strlen(carro.renavam)!=1)){
         //Alocando os espaços e guardando as informações do cliente.
         Lista* NovoCliente=(Lista*) malloc (sizeof(Lista));
         strcpy(NovoCliente->marca, carro.marca);
         strcpy(NovoCliente->modelo, carro.modelo);
         strcpy(NovoCliente->placa, carro.placa);
         strcpy(NovoCliente->cor, carro.cor);
         strcpy(NovoCliente->ano, carro.ano);
         strcpy(NovoCliente->renavam, carro.renavam);



         NovoCliente->codigo= cliente.codigo;
         NovoCliente->prox= primeiro;
         printf("  Cadastro realizado com sucesso.");
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return NovoCliente;
     }else{
         printf("  Cadastro invalido.");
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return primeiro;
     }
}

Lista* inserir_carro (Lista *primeiro){
     Lista carro;
     Lista *atual= primeiro;
     char identificador= 'F';

     //Lendo as informações do cliente.


     printf("  Marca do carro: ");
     fflush (stdin);
     fgets(cliente.marca,10, stdin);
     printf ("\n");

     printf("  modelo: ");
     fflush (stdin);
     fgets(cliente.modelo,10, stdin);
     printf ("\n");

     printf("  Placa: ");
     fflush (stdin);
     fgets(cliente.placa, 10, stdin);
     printf ("\n");

     printf("  Cor: ");
     fflush (stdin);
     fgets(cliente.cor,10, stdin);
     printf ("\n");

     printf("  Ano: ");
     fflush (stdin);
     fgets(cliente.ano,10, stdin);
     printf ("\n");

     printf("  Renavam: ");
     fflush (stdin);
     fgets(cliente.renavam,10, stdin);
     printf ("\n");



     //Verificando se o cadastro já existe.
     for(atual=primeiro; atual!=NULL; atual=atual->prox){
        if(atual->codigo==cliente.codigo){
            identificador= 'V';
            break;
        }
     }


     if(identificador!='V' && (strlen(cliente.nome)!=1 && strlen(cliente.endereco)!=1)){
         //Alocando os espaços e guardando as informações do cliente.
         Lista* NovoCliente=(Lista*) malloc (sizeof(Lista));
         strcpy(NovoCliente->nome, cliente.nome);
         strcpy(NovoCliente->sexo, cliente.sexo);
         strcpy(NovoCliente->rg, cliente.rg);
         strcpy(NovoCliente->cpf, cliente.cpf);
         strcpy(NovoCliente->datanascimento, cliente.datanascimento);
         strcpy(NovoCliente->nacionalidade, cliente.nacionalidade);



         NovoCliente->codigo= cliente.codigo;
         NovoCliente->prox= primeiro;
         printf("  Cadastro realizado com sucesso.");
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return NovoCliente;
     }else{
         printf("  Cadastro invalido.");
         printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
         return primeiro;
     }
}


void listar_cliente (Lista* primeiro){
     Lista* atual;//Ponteiro para percorrer a lista sem perder a referência do primeiro elemento da lista.

     //Imprimindo os clientes da lista, e suas repectivas informações.

     for(atual= primeiro ; atual!= NULL; atual= atual->prox){
        printf("\n  Nome: ");
        printf("%s", atual->nome);
        printf("\n  Sexo: ");
        printf("%s", atual->sexo);
        printf("\n  RG: ");
        printf("%s", atual->rg);
        printf("\n  CPF: ");
        printf("%s", atual->cpf);
        printf("\n  Nascimento: ");
        printf("%s", atual->datanascimento);
        printf("\n  Nascionalidade: ");
        printf("%s", atual->nacionalidade);
        printf("\n  Naturalidade: ");
        printf("%s", atual->naturalidade);
        printf("\n  Endereco: ");
        printf("%s", atual->endereco);
        printf("\n  Numero: ");
        printf("%s", atual->numero);
        printf("\n  Complemento: ");
        printf("%u", atual->complemento);
        printf("\n  Municipio: ");
        printf("%u", atual->municipio);
        printf("\n  Bairro: ");
        printf("%u", atual->bairro);
        printf("\n  CEP: ");
        printf("%u", atual->cep);
        printf("\n  Telefone: ");
        printf("%u", atual->telefone);
        printf("\n  Celular: ");
        printf("%u", atual->celular);
        printf("\n  Email: ");
        printf("%u", atual->email);
        printf("\n\n");
     }
     if(primeiro==NULL){
        printf("  Nenhum cliente cadastrado.");
     printf("\n\n  PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL.");
}
return primeiro;

      return primeiro;
}
