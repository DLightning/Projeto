#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_FILMES 100 //tamanho da lista de filmes
#define MAX_CLIENTES 50
#define MAX_ESTOQUE 500

struct filmes{
	int identificador;
	char titulo[50];
	int ano_producao;
	char genero[50];
};
typedef struct filmes Tfilmes;

Tfilmes lista_filmes[MAX_FILMES];
int nfilmes=0;
int encerrar=0;

//inicio de funcoes filmes
void cadastrarfilme(){
  Tfilmes filmes;
printf("\n   Pagina de Cadastro: \n\n");
  printf("Digite o Titulo: ");
   fflush(stdout);
    gets(filmes.titulo);

  printf("Digite o Genero: ");
    fflush(stdout);
    gets(filmes.genero);

  printf("Digite o Ano de Producao: ");
    fflush(stdout);
  scanf("%i", &filmes.ano_producao);

  printf("Digite o Identificador: ");
  fflush(stdout);
  scanf("%i", &filmes.identificador);

  lista_filmes[nfilmes]=filmes;
	nfilmes++;
}
void listarfilmes(){
    printf("\n LISTA DE FILMES: \n");
    for (int i = 0; i < nfilmes; ++i) {
		printf("   %s", lista_filmes[i].titulo );
		printf(" - %s", lista_filmes[i].genero);
		printf(" - %d - ", lista_filmes[i].ano_producao);
		printf("%d   \n", lista_filmes[i].identificador);
    }
}
Tfilmes consultarfilmesTitulo(){
    char title[50];
    Tfilmes filmes;

    filmes.identificador=-1;
    printf("Digite Titulo do Filme: ");
    fflush(stdout);
    gets(title);

    for(int i=0;i<nfilmes;i++){
 if(strcmpi(lista_filmes[i].titulo,title)==0){
    filmes=lista_filmes[i];
        }
    }
    return filmes;
}
void visualizarfilmes(){
    Tfilmes filmes;
		printf("\nTitulo:  %s\n", filmes.titulo);
		printf("Genero: %s\n", filmes.genero);
		printf("Ano de Producao: %i\n", filmes.ano_producao);
	    printf("Identificador: %i\n", filmes.identificador);
	}
Tfilmes consultarfilmes(){
    int identificador;
    int c;
    Tfilmes filmes;
filmes.identificador=-1;
    printf("\nEscreva o Identificador do Filme: ");
    fflush(stdout);
    scanf("%i",&identificador);
    for(int i=0;i<nfilmes;i++){
        if(lista_filmes[i].identificador==identificador){
            filmes=lista_filmes[i];
        }
    }
    while((c= getchar()) != '\n' && c != EOF){}
	return filmes;
}
void atualizarfilmes(){ //nothing here yet

}
void excluirfilmes(){
    Tfilmes filmes;
    printf("Digite o Titulo: ");
    fflush(stdout);
    gets(filmes.titulo);

    lista_filmes[nfilmes]=filmes; //ele retira o ultimo slot. precisa de ajuste
	nfilmes--;

}
//--Final de funcoes filmes---

//inicio da estrutura de clientes
struct clientes{
	char nome[20];
	char cpf[11];
	char email[20];
};
typedef struct clientes Tclientes;

Tclientes lista_clientes[MAX_CLIENTES];
int nclientes=0;
int end=0;

//inicio funcoes clientes
void cadastrarcliente(){
  Tclientes clientes;
printf("\n   Pagina de Cadastro: \n\n");
  printf("Digite o Nome: ");
   fflush(stdout);
    gets(clientes.nome);

  printf("Digite o CPF: ");
    fflush(stdout);
    gets(clientes.cpf);

  printf("Digite o Email: ");
  fflush(stdout);
  gets(clientes.email);

  lista_clientes[nclientes]=clientes;
	nclientes++;
}
void listarclientes(){
    printf("\n LISTA DE CLIENTES: \n");
    for (int i = 0; i < nclientes; ++i) {
		printf("   %s", lista_clientes[i].nome);
		printf(" - %s - ", lista_clientes[i].cpf);
		printf("%s   \n", lista_clientes[i].email);
    }
}
void visualizarclientes(){
    Tclientes clientes;

		printf("\nNome:  %s\n", clientes.nome);
		printf("CPF: %s\n", clientes.cpf);
		printf("Email: %s\n", clientes.email);
	}

Tclientes consultarclientes(){
    char nome;
    int c;
    Tclientes clientes;
    printf("\nEscreva o nome do cliente: ");
    fflush(stdout);
    scanf("%s",&nome);
    for(int i=0;i<nclientes;i++){
        if(lista_clientes[i].nome==nome){
            clientes=lista_clientes[i];
        }
    }
    while((c= getchar()) != '\n' && c != EOF){}
	return clientes;
}
void atualizarclientes(){ //nothing here yet

}
void excluirclientes(){
    Tclientes clientes;
    printf("Digite o Nome: ");
    fflush(stdout);
    gets(clientes.nome);

    lista_clientes[nclientes]=clientes; //ele retira o ultimo slot. precisa de ajuste
	nclientes--;
}
//--final das funcoes clientes---

//struct estoque
struct estoque{
  int identificadorE;
  int identificadorEstoque;
  char dataEntrada[14];

};
typedef struct estoque Testoque;

Testoque lista_estoque[MAX_ESTOQUE];
int nEstoqueFilme=0;
int ended=0;

//fuctions estoque
void cadastrarestoque(){
  Testoque estoque;
printf("\n   Pagina de Cadastro: \n\n");
  printf("Digite o Identificador: ");
   fflush(stdout);
    scanf("%d",&estoque.identificadorE);

  printf("Digite o Identificador do Estoque: ");
    fflush(stdout);
    scanf("%d",&estoque.identificadorEstoque);

  printf("Digite o Data de Entrada: ");
    fflush(stdout);
    scanf("%s",&estoque.dataEntrada);

  lista_estoque[nEstoqueFilme]=estoque;
	nEstoqueFilme++;

}
void listarestoque(){
    printf("\n LISTA DE ESTOQUE: \n");
    for (int i = 0; i < nEstoqueFilme; ++i) {
        printf("   %d", lista_estoque[i].identificadorE);
		printf(" - %d - ", lista_estoque[i].identificadorEstoque);
		printf("%s   \n", lista_estoque[i].dataEntrada);
    }
}
Testoque consultarestoqueTitulo(){
    Tfilmes filmes=consultarfilmesTitulo();

    Testoque estoque;
    estoque.identificadorE=-1;
    for(int i=0;i<nEstoqueFilme;i++){
    if(lista_estoque[i].identificadorEstoque==filmes.identificador){
        (lista_estoque);
        estoque=lista_estoque[i];
        }
    }
    return estoque;
}
void visualizarestoque(){
    Testoque estoque;

		printf("\nID:  %d\n", estoque.identificadorE);
		printf("ID Estoque: %d\n", estoque.identificadorEstoque);
		printf("Data de Entrada: %s\n", estoque.dataEntrada);
	}
Testoque consultarestoque(){
    int identificadorE;
    int c;
    Testoque estoque;
    printf("\nEscreva o ID: ");
    fflush(stdout);
    scanf("%d",&identificadorE);
    for(int i=0;i<nEstoqueFilme;i++){
        if(lista_estoque[i].identificadorE==identificadorE){
            estoque=lista_estoque[i];
        }
    }
    while((c= getchar()) != '\n' && c != EOF){}
	return estoque;
}
//Menus
int menuprincialopcao(){
    int opcao;
    int c;

	printf("\n     MENU INICIAL    \n\n");
	printf("Selecionar [0] para Encerrar\n");
	printf("Selecionar [1] para Menu Filmes\n");
	printf("Selecionar [2] para Menu Clientes\n");
	printf("Selecionar [3] para Menu Estoque\n");
	printf("-Escrever opcao: ");
	scanf("%i",&opcao);
	while((c= getchar()) != '\n' && c != EOF){}
	return opcao;
}
int menueditarfilmeopcao(){
    int opcao;
    int c;
    printf("\n[0] Encerrar ");
    printf("\n[1] Atualizar Filme");
    printf("\n[2] Excluir Filme");
    printf("\n-Escrever opcao: ");
	scanf("%i",&opcao);
	while((c= getchar()) != '\n' && c != EOF){}
	return opcao;
}
int menueditarclienteopcao(){
    int opcao;
    int c;
    printf("\n[0] Encerrar ");
    printf("\n[1] Atualizar Cliente");
    printf("\n[2] Excluir Cliente");
    printf("\n-Escrever opcao: ");
	scanf("%i",&opcao);
	while((c= getchar()) != '\n' && c != EOF){}
	return opcao;
}
int menufilmesopcao(){
    int opcao;
    int c;
	fflush(stdin);
	printf("\n  MENU FILMES  \n ");
	printf("[0] - Encerrar -\n");
	printf(" [1] - Cadastrar Filmes -\n");
	printf(" [2] - Listar Filmes -\n");
	printf(" [3] - Visualizar Filmes -\n");
	printf(" [4] - Consultar Filmes -\n");
    printf(" [5] - Editar Filmes -\n");// Atualizar ou Excluir.
    printf("-Escrever opcao: ");
	fflush(stdout);
	scanf("%i", &opcao);
	while((c= getchar()) != '\n' && c != EOF){}
	return opcao;
}
int menuclientesopcao(){
    int opcao;
    int c;

	fflush(stdin);
	printf("\n  MENU CLIENTES  \n ");
	printf("[0] - Encerrar -\n");
	printf(" [1] - Cadastrar Clientes -\n");
	printf(" [2] - Listar Clientes -\n");
    printf(" [3] - Visualizar Clientes -\n");
	printf(" [4] - Consultar Clientes -\n");
    printf(" [5] - Editar Clientes -\n");// Atualizar ou Excluir.
    printf("-Escrever opcao: ");
	fflush(stdout);
	scanf("%i", &opcao);
	while((c= getchar()) != '\n' && c != EOF){}

	return opcao;
}
int menuestoqueopcao(){
    int opcao;
    int c;

	fflush(stdin);
	printf("\n  MENU ESTOQUE  \n ");
	printf("[0] - Encerrar -\n");
	printf(" [1] - Cadastrar Estoque -\n");
	printf(" [2] - Listar Estoque -\n");
	printf(" [3] - Visualizar Estoque -\n");
	printf(" [4] - Consultar Estoque -\n");
    printf(" [5] - Editar Estoque -\n");// Atualizar ou Excluir.
    printf("-Escrever opcao: ");
	fflush(stdout);
	scanf("%i", &opcao);
	while((c= getchar()) != '\n' && c != EOF){}

	return opcao;
}
void menueditarfilme(){
    int opcao=-1;
    while(encerrar==0){
        opcao=menueditarfilmeopcao();
        if(opcao==0){
            printf("\n----END OF THE PROGRAM----");
            encerrar=0;
            break;
        }
        if(opcao==1){
            atualizarfilmes();
        }else if(opcao==2){
            excluirfilmes();
        }
    }
}
void menueditarcliente(){
    int opcao=-1;
    while(encerrar==0){
        opcao=menueditarclienteopcao();
        if(opcao==0){
            printf("\n----END OF THE PROGRAM----");
            encerrar=0;
            break;
        }
        if(opcao==1){
            atualizarclientes();
        }else if(opcao==2){
            excluirclientes();
        }
    }
}
void menufilmes(){
    int opcao=-1;
    while(encerrar==0){
        opcao=menufilmesopcao();
        if(opcao==0){
            printf("\n----END OF THE PROGRAM----");
            end=0;
            break;
        }
        if(opcao==1){
            cadastrarfilme();
        }else if(opcao==2){
            listarfilmes();
        }else if(opcao==3){
            visualizarfilmes();
        }else if(opcao==4){
            Tfilmes filmes=consultarfilmes();
              if(filmes.identificador==-1){
                printf("\n--404ERROR-MOVIE NOT FOUND--\n");
                }else{
                    visualizarfilmes();
                }

        }else if(opcao==5){
            menueditarfilme();
        }
    }
}
void menuclientes(){
    int opcao=-1;
    while(end==0){
        opcao=menuclientesopcao();
        if(opcao==0){
            printf("\n----END OF THE PROGRAM----");
            encerrar=0;
            break;
        }
        if(opcao==1){
            cadastrarcliente();
        }else if(opcao==2){
            listarclientes();
        }else if(opcao==3){
            visualizarclientes();
        }else if(opcao==4){
            Tclientes clientes=consultarclientes();
              if(clientes.nome==-1){
                printf("\n--CLIENT NOT FOUND--\n");
                }else{
                    visualizarclientes();
                }

        }else if(opcao==5){
            menueditarcliente();

        }
    }
}
void menuestoque(){
    int opcao=-1;
    while(encerrar==0){
        opcao=menuestoqueopcao();
        if(opcao==0){
            printf("\n----END OF THE PROGRAM----");
            encerrar=0;
            break;
        }
        if(opcao==1){
            cadastrarestoque();
        }else if(opcao==2){
            listarestoque();
        }else if(opcao==3){
            visualizarestoque();
        }else if(opcao==4){
            Testoque estoque=consultarestoqueTitulo();
              if(estoque.identificadorE==-1){
                printf("\n--NOT FOUND--\n");
                }else{
                    visualizarestoque();
                }

        }else if(opcao==5){
            //editarestoque();
        }
    }
}
void menuprincipal(){
    int opcao=-1;
    while(encerrar==0){
        opcao=menuprincialopcao();
        if(opcao==0){
            printf("\n----END OF THE PROGRAM----");
            encerrar=0;
            break;
        }
        if(opcao==1){
            menufilmes();
        }else if(opcao==2){
            menuclientes();
        }else if(opcao==3){
            menuestoque();
        }
    }
}
int main (void){
    menuprincipal();
return 0;
}
