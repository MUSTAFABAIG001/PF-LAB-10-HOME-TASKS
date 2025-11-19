#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char email[100];
	printf("Enter email\n");
	fgets(email,sizeof(email),stdin);
	char* arr = strpbrk(email,"@");
	int index = arr-email;
	printf("\n");
	if ( !strpbrk(email,"@") )
	{
		printf("\nInvalid Email");
	}
	else
	for(i=index+1; email[i] != '\0'; i++)
	{
		printf("%c",email[i]);
	}	
	return 0;
}
