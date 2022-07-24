#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define END 0
#define CONTINUE 1

void lowerCase(char *str);

int main(int argc, char const *argv[])
{	
	char *name;
	char *lastname;
	char *domain;
	int decision;

	while(1)
	{
		name = (char *)malloc(20*sizeof(char));
		lastname = (char *)malloc(20*sizeof(char));
		domain = (char *)malloc(20*sizeof(char));
		
		printf("Name: ");
		scanf("%s", name);
		printf("Lastname: ");
		scanf("%s", lastname);
		printf("Domain: ");
		scanf("%s", domain);

		lowerCase(name);
		lowerCase(lastname);
		lowerCase(domain);

 		printf("%s.%s@%s\n", name, lastname, domain);
		printf("%c.%s@%s\n", name[0], lastname, domain);
		printf("%s.%c@%s\n", name, lastname[0], domain);
		printf("%s%s@%s\n", name, lastname, domain);

		free(name);
		free(lastname);
		free(domain);

		printf("continue? ");
		scanf("%d", &decision);

		if(decision == CONTINUE)
			continue;
		else if(decision == END)
			break;

	}

	printf("Program ended!");

	return END;
}

void lowerCase(char *str)
{	
	int i = 0;
	char c;

	while (str[i])
  	{
    	c=str[i];
    	str[i] = tolower(c);
    	i++;
  	}
}