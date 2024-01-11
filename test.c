// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     FILE *fp;
//     fp=fopen("Board.txt","r");

//     printf("printf(\"HELLO\"));");
// }



#include<stdio.h>

int main()

{

FILE *fptr;

char name[40], name1[40];

fptr = fopen("record.txt", "w");
fprintf(fptr,"LOLOLZ");
return 0;

if(fptr == NULL)

{

printf("File not exist");

exit(1);

}

printf("Enter your name: ");

gets(name);

fputs(name, fptr);

rewind(fptr);

fgets(name1, 40, fptr);

printf("Name: %s", name1);

fclose(fptr);

return 0;

}