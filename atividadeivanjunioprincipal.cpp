#include <stdio.h> // biblioteca de comunicaçaão com o usuário
#include <stdlib.h> // bblioteca de alocação de espaço de memória
#include <locale.h> // biblioteca de alocações de textos por regiões
#include <string.h> //  biblioteca responsaél por cuidar das string
#include <iostream>

using namespace std; 

   int Registro() // função responsavel por cadastrar os usuários no sistema
   
   
    {
    printf("Você escolheu registro de nomes!\n\n"); // informações na tela do sistemav
   
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
	
	
	}
    
    int Comsulta()// fumção responsavel por consultar usuário no sistema
    {
    printf("Você escolheu consultar nomes!\n\n"); // informações na tela do sistemav
    
    // inicio da criação das variáveis\string
    
    char cpf[40];
	char conteudo[200];
	
	 // final da  criação das variáveis\string
	
	setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
	
	{
	  printf("Digite o cpf a ser consultado:\n\n "); // coletar informação do usuário
	  scanf("%s", cpf); // %s refere a string
	}
	
	FILE *file; // chamar arquivo
	file=fopen(cpf,"r"); //abrir arquivo
	
	if(file==NULL) // comparação
	
	{
		printf("Não foi possivel abrir o arquivo, arquivo não encontrado!\n\n "); // informações na tela do sistema
		
	}
	
	
	while(fgets(conteudo,200,file)!=NULL)
		
	{
		printf("\n Essas são as informações do usuário!\n\n "); // informações na tela do sistema
		printf("%s", conteudo); // %s refere a string
		printf("\n\n"); // quebra linhas 2x
	}
	
	system("pause"); // pausar pro usuário no sistema
	
	
	}
	
	int Deletar() // função responsavel por deletar usuário do sistema
    {
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
	
	}
   
   
   
   
    int main()
    
    {   
    int opcao=0; // definindo variáveis
    
	int laco=1; // variável
	
	for(laco=1;laco=1;) // laço de repetição
     {
	
 	system("cls"); // comando para limpar tela
	
     setlocale(LC_ALL,"portuguese"); // Definindo a linguagem
    
     printf("### Cartório da EBAC ###\n\n"); // Inicio do menu
     printf("Escolha a opção desejada do menu:\n\n");
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
		
		default:
		printf("Essa opção não está disponível!\n"); // 
		system("pause"); // responsalvel por pausar a tela pro usuário no sistema
		break;
	    	
	    
	}
	
	}
} // fim da seleçao
