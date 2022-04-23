#include <stdio.h>

int main(void)

{

	char namee[25];
	int agee;


	printf("What's your name?\n");
	fgets(namee, 25, stdin);    
	printf("My name is %s\n", namee);

   
	printf("How old are you %s?\n", namee);
	scanf("%d", &agee);
	printf("I am %d years old\n", agee);



	int pers;

        printf("\nHow old are you?");
        scanf("%d", &pers);

        if(pers >= 18){
        printf("You have passed the age check\n");
        }
    
	else if(pers <5 ){
        printf("You really should'nt be here\n");
	}
    
	else{
        printf("You have failed the age check\n");
	}
	return (0);
}
