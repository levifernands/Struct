//ABAIXO É UM TIPO DE STRUCTURE

/* #include <stdio.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
  } book;
  
int main(void) {
  book.book_id = 123;
  printf("Hello World\n");
  return 0;
} */


//ABAIXO É OUTRO TIPO DE STRUCTURE
/* #include <stdio.h>

struct cadastro {
  int codigo;
  char nome[80];
  char telefone[20];
};

int main() {
struct cadastro aluno;
printf("Informe o código do aluno:");
scanf("%d, &aluno.codigo");
printf("Informe o nome:");
fflush(stdin); fgets(aluno.nome, 80, stdin);
return 0;
} */

//OUTRO STRUCTURE(3)


/* #include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book1, Book2;
 
int main() {
 
   //book 1 specification 
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   // book 2 specification
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   // print Book1 info 
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   // print Book2 info
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

   return 0;
} */

#include <stdio.h>


int main(){
  
  struct ficha_de_aluno
  {
    char nome[50];
    char matricula[30];
    char curso[30];
  };

  struct ficha_de_aluno aluno;
  
  printf("\n---------- Cadastro de aluno -----------\n\n\n");
  
  printf("Nome do aluno ......: ");
  fflush(stdin);
  
  fgets(aluno.nome, 40, stdin);
  
  printf("Numero de matricula ......: ");
  fflush(stdin);
  fgets(aluno.matricula, 40, stdin);
  
  printf("Informe o Curso ..: ");
  fflush(stdin);

  fgets(aluno.curso, 40, stdin);
  
  
  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome do aluno ...........: %s", aluno.nome);
  printf("Numero de Matricula .....: %s", aluno.matricula);
  printf("Curso ...................: %s\n" , aluno.curso);
  
  return(0);
}