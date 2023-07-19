#include <stdio.h> // biblioteca de comunica�a�o com o usu�rio
#include <stdlib.h> // bblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> // biblioteca de aloca��es de textos por regi�es
#include <string.h> //  biblioteca responsa�l por cuidar das string
#include <iostream>

using namespace std; 

   int Registro() // fun��o responsavel por cadastrar os usu�rios no sistema
   
   
    {
    printf("Voc� escolheu registro de nomes!\n\n"); // informa��es na tela do sistemav
   
    // inicio da cria��o de vari�veis\string
    
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	// final da cria��o de vari�veis\string
	
	setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
	 
	printf("Digite o cpf a ser cadastrado:\n\n"); // coletando informa��o do usu�rio 
    scanf("%s", cpf); // %s refere a string
	 
	strcpy(arquivo, cpf); // Responsael por copiar os valores da string
	 
	 
    FILE *file; // Chamar arquivo
	file=fopen(arquivo, "w"); // Abrir arquivo
	fprintf(file, cpf); // Salvo o valor da variv�el
    fclose(file); // fecha arquivo
	
	file=fopen(arquivo, "a"); // Abrir arquivo
    fprintf(file, ","); // salvo o valor da variv�el
	fclose(file);// fechar arquivo
	
	
	 
	printf("\n\n Digite o nome a ser cadastrado:\n\n ");  // coletando informa��o do usu�rio 
	scanf("%s", nome); // %s refere a string
	 
	file=fopen(arquivo, "a"); // Abrir arquivo
	fprintf(file, nome); // salvo na vari�vel
	fclose(file); // fechar arquivo
	 
	file=fopen(arquivo, "a"); // Abrir arquivo
	fprintf(file, ","); // salvar na vari�vel
	fclose(file); // fechar arquivo
	 
	printf("\n\n Digite o sobrenome a ser cadastrado:\n\n "); // coletando informa��o do usu�rio
	scanf("%s", sobrenome ); // %s refere a string
	 
	file=fopen(arquivo, "a"); // Abrir arquivo
	fprintf(file, sobrenome); // salvar na vari�vel
	fclose(file); // fechar arquivo
	 
	file=fopen(arquivo, "a"); // Abrir arquivo
	fprintf(file, ","); // salvar na vari�vel
	fclose(file); // fechar arquivo
	 
	printf("\n\n Digite o cargo a ser cadastrado:\n\n"); // coletando informa��o do usu�rio
    scanf("%s", cargo); // %s refere a string
	 
	file=fopen(arquivo, "a"); // Abrir arquivo
	fprintf(file, cargo); // salvar na vari�vel
	fclose(file); // fechar arquivo
	 
	file=fopen(arquivo, "a"); // Abrir arquivo
	fprintf(file, ","); // salvar na vari�vel
	fclose(file); // fechar arquivo	
	
	system("pause"); // pausar para o usu�rio no sistema
	
	
	}
    
    int Comsulta()// fum��o responsavel por consultar usu�rio no sistema
    {
    printf("Voc� escolheu consultar nomes!\n\n"); // informa��es na tela do sistemav
    
    // inicio da cria��o das vari�veis\string
    
    char cpf[40];
	char conteudo[200];
	
	 // final da  cria��o das vari�veis\string
	
	setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
	
	{
	  printf("Digite o cpf a ser consultado:\n\n "); // coletar informa��o do usu�rio
	  scanf("%s", cpf); // %s refere a string
	}
	
	FILE *file; // chamar arquivo
	file=fopen(cpf,"r"); //abrir arquivo
	
	if(file==NULL) // compara��o
	
	{
		printf("N�o foi possivel abrir o arquivo, arquivo n�o encontrado!\n\n "); // informa��es na tela do sistema
		
	}
	
	
	while(fgets(conteudo,200,file)!=NULL)
		
	{
		printf("\n Essas s�o as informa��es do usu�rio!\n\n "); // informa��es na tela do sistema
		printf("%s", conteudo); // %s refere a string
		printf("\n\n"); // quebra linhas 2x
	}
	
	system("pause"); // pausar pro usu�rio no sistema
	
	
	}
	
	int Deletar() // fun��o responsavel por deletar usu�rio do sistema
    {
    	// inicio da vari�veis\string
    	
       char cpf[40];
       
       // final da vari�vel\string
		
	   setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
		
	   printf("Voc� escolheu deletar nomes!\n\n"); // informa��es na tela do sistema
	   
	   printf("Digite o CPF do usu�rio a ser deletado! \n\n"); // coletando dados do usu�rio
	   scanf("%s",cpf); // %s refere a string
	   
	   remove(cpf); // remove dados do usu�rio
	   
	   
	   
	   FILE *file; // chamar arquivo
	   file=fopen(cpf,"r"); // abrir arquivo
	   
	   system("cls"); // comando para apagar tela pro usu�rio no sistema
	   
	   printf("Cpf deletado com sucesso!\n\n ");// informa��es na tela do sistema
	   system("pause"); // responsavel por pausar a tela pro usu�rio no sistema
	   
	    if(file==NULL) // compara��o
	   
	   {
	   	printf("\n\nO usu�rio n�o se encontra no sistema!.\n\n");// // informa��es na tela do sistema
	   	system("pause"); // responsavel por pausar a tela pro usu�rio no sistema
	   }
	
	}
   
   
   
   
    int main()
    
    {   
    int opcao=0; // definindo vari�veis
    
	int laco=1; // vari�vel
	
	for(laco=1;laco=1;) // la�o de repeti��o
     {
	
 	system("cls"); // comando para limpar tela
	
     setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
    
     printf("### Cart�rio da EBAC ###\n\n"); // Inicio do menu
     printf("Escolha a op��o desejada do menu:\n\n");
     printf("\t1 - Registrar nomes\n");
     printf("\t2 - Consultar nomes\n");
     printf("\t3 - Deletar nomes\n\n"); 
	 printf("op��o: ");// fim do menu
    
	 scanf("%d", &opcao);// armazenando a escolha do usu�rio
	
	 system("cls"); // comando para limpar tela
	
	 switch(opcao) // inicio da sele��o de menu
	 
	 {
	    case 1:
	    Registro();	// chamada de fun��es
	    break;
		
		case 2:
	    Comsulta(); // chamada de fun��es
	    break;
	    
	    case 3:
	    Deletar(); // chamada de fun��es
		break;
		
		default:
		printf("Essa op��o n�o est� dispon�vel!\n"); // 
		system("pause"); // responsalvel por pausar a tela pro usu�rio no sistema
		break;
	    	
	    
	}
	
	}
} // fim da sele�ao
