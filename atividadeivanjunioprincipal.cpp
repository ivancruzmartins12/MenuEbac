#include <stdio.h> // biblioteca de comunicaçaão com o usuário
#include <stdlib.h> // bblioteca de alocação de espaço de memória
#include <locale.h> // biblioteca de alocações de textos por regiões
#include <string.h> //  biblioteca responsaél por cuidar das string
#include <iostream> // executa operações de leitura

     using namespace std; // utilizado para que não se repita o std em todos os comandos padrões de linguagem

     int Registro() // função responsavel por cadastrar os usuários no sistema
   
     {
			
     printf("Você escolheu registro de nomes!\n\n"); // informações na tela do sistemav
   
     int opcao2; // variavél tipo inteiro
    
     // inicio da criação de variáveis\string
	 char arquivo[40];
	 char cpf[40];
	 char nome[40];
	 char sobrenome[40];
	 char cargo[40];
	
	 // final da criação de variáveis\string
	
	 setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
	 
   	 printf("Digite o cpf a ser cadastrado:\n\n"); // coletando informação do usuário 
     scanf("%s", cpf); // %s refere a string
	 
	 strcpy(arquivo, cpf); // Responsael por copiar os valores da string
	 
	 
     FILE *file; // Chamar arquivo
     file=fopen(arquivo, "w"); // Abrir arquivo
 	 fprintf(file, cpf); // Salvo o valor da variváel
     fclose(file); // fecha arquivo
	
	 file=fopen(arquivo, "a"); // Abrir arquivo
     fprintf(file, ","); // salvo o valor da variváel
	 fclose(file);// fechar arquivo
	
	 
  	 printf("\n\n Digite o nome a ser cadastrado:\n\n ");  // coletando informação do usuário 
	 scanf("%s", nome); // %s refere a string
	 
	 file=fopen(arquivo, "a"); // Abrir arquivo
 	 fprintf(file, nome); // salvo na variável
	 fclose(file); // fechar arquivo
	 
 	 file=fopen(arquivo, "a"); // Abrir arquivo
	 fprintf(file, ","); // salvar na variável
	 fclose(file); // fechar arquivo
	 
	 printf("\n\n Digite o sobrenome a ser cadastrado:\n\n "); // coletando informação do usuário
   	 scanf("%s", sobrenome ); // %s refere a string
	 
	 file=fopen(arquivo, "a"); // Abrir arquivo
	 fprintf(file, sobrenome); // salvar na variável
 	 fclose(file); // fechar arquivo
	 
	 file=fopen(arquivo, "a"); // Abrir arquivo
	 fprintf(file, ","); // salvar na variável
	 fclose(file); // fechar arquivo
	 
	 printf("\n\n Digite o cargo a ser cadastrado:\n\n"); // coletando informação do usuário
     scanf("%s", cargo); // %s refere a string
	 
 	 file=fopen(arquivo, "a"); // Abrir arquivo
 	 fprintf(file, cargo); // salvar na variável
	 fclose(file); // fechar arquivo
	 
	 file=fopen(arquivo, "a"); // Abrir arquivo
 	 fprintf(file, ","); // salvar na variável
 	 fclose(file); // fechar arquivo	
	
 	 system("pause"); // pausar para o usuário no sistema
    
     system("cls");
    
     printf("Pressione 0 para voltar ao menu incial ou 1 para registrar novo usuario \n\n"); // coletando informações d0 usuario
     scanf("%",&opcao2); // armazenando escolha do usuário
     system("cls"); // comando para apagar a tela 
    
     switch(opcao2) // início da seleção
    
     {
     case 0:
     int menu ();   // chamando funções
     break;          
    
     case 1:
     int Registro(); // chamando funções
     break;
    
       
     }
	 system("cls"); // comando para apagar a tela
	 }

     int Comsulta()// fumção responsavel por consultar usuário no sistema]
    
    
     {
	 int opcao3;  // variáveis do tipo inteiro
	
     printf("Você escolheu consultar nomes!\n\n"); // informações na tela do sistemav
    
     // inicio da criação das variáveis\string
    
     char cpf[40];
	 char conteudo[200];
	
	 // final da  criação das variáveis\string
	
	 setlocale(LC_ALL,"pt_BR_utf8"); // Definindo a linguagem
	
	 {
	  printf("Digite o cpf a ser consultado:\n\n "); // coletar informação do usuário
	  scanf("%s", cpf); // %s refere a string
	 }
	
	 FILE *file; // chamar arquivo
	 file=fopen(cpf,"r"); //abrir arquivo
	
	 if(file==NULL) // comparação
	
	 {
	  
	  printf("\n\n Não foi possivel abrir o arquivo, arquivo não encontrado!\n\n "); // informações na tela do sistema
		
	 }

	
	 while(fgets(conteudo,200,file)!=NULL)
		
	 {
		printf("\n Essas são as informações do usuário!\n\n "); // informações na tela do sistema
		printf("%s", conteudo); // %s refere a string
		printf("\n\n"); // quebra linhas 2x
	 }
	
	 system("pause"); // pausar pro usuário no sistema
	 system("cls"); // comando para apagar a terla
	
     printf("pressione 0 para voltar ao menu e 2 para consultar novo usuário\n\n "); // informações na tela do sisema
	 scanf("%",&opcao3); // armazenando a escolha do usário 
	   
	 switch(opcao3) // início da seleção
	
	 {
     case 0:
     int menu (); // chamando funções
     break;
    
     case 2:
     int consulta(); // chamando funções
     break;
           
     }	
	
 	 }
	
	 int Deletar() // função responsavel por deletar usuário do sistema
    
 	 {
		
     int opcao4 ; // variáveis do tipo inteiro
    
    	// inicio da variáveis\string
    	
       char cpf[40];
       
       // final da variável\string
		
	   setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
		
	   printf("Você escolheu deletar nomes!\n\n"); // informações na tela do sistema
	   
	   printf("Digite o CPF do usuário a ser deletado! \n\n"); // coletando dados do usuário
	   scanf("%s",cpf); // %s refere a string
	   
	   remove(cpf); // remove dados do usuário
	   
	   
	   
	   FILE *file; // chamar arquivo
	   file=fopen(cpf,"r"); // abrir arquivo
	   
	   system("cls"); // comando para apagar tela pro usuário no sistema
	   
	   printf("Cpf deletado com sucesso!\n\n ");// informações na tela do sistema
	   system("pause"); // responsavel por pausar a tela pro usuário no sistema
	   
	    if(file==NULL) // comparação
	   
	   {
	   	printf("\n\nO usuário não se encontra no sistema!.\n\n");// // informações na tela do sistema
	   	system("pause"); // responsavel por pausar a tela pro usuário no sistema
	   }
	   
	   system("cls"); // comando para apagar a tela
	   
	   printf("pressione 0 para voltar ao menu e 3 para deletar usuário\n\n"); // informações na tela do sistema
	   scanf("%",&opcao4);
	   
	   
	   
	   switch (opcao4) // início de seleção
	    
	    {
       case 0:
       int menu (); // chamando funções
       break;
    
       case 3:
       int Deletar(); // chamando funções
       break;
    
       
        }
	    
	     
        } 
   
   
     int main() 
     
     {  

	 int menu (); // função do menu principal
	
	 {

     int opcao=0; // definindo variáveis
    
	 int laco=1; // variável
	
	 for(laco=1;laco=1;) // laço de repetição
     {
	
 	system("cls"); // comando para limpar tela
	
     setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
    
     printf("### Cartório da EBAC ###\n\n"); // Inicio do menu
     printf("Escolha a opção desejada do menu: \n\n");
     printf("\t1 - Registrar nomes\n");
     printf("\t2 - Consultar nomes\n");
     printf("\t3 - Deletar nomes\n\n"); 
	 printf("opção: ");// fim do menu
    
	 scanf("%d", &opcao);// armazenando a escolha do usuário
	
	 system("cls"); // comando para limpar tela
	
	 switch(opcao) // inicio da seleção de menu
	 
	 {
	    case 1:
	    Registro();	// chamada de funções
	    break;
		
		case 2:
	    Comsulta(); // chamada de funções
	    break;
	    
	    case 3:
	    Deletar(); // chamada de funções
		break;
		
		case 0: 
		int menu(); // chamada de funções
		break;
		
		default:
		printf("Essa opção não está disponível!\n"); // 
		system("pause"); // responsalvel por pausar a tela pro usuário no sistema
		break;
	
	 }
     }
	 }
     } // fim da seleçao
