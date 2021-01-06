#include <stdio.h>

int main () {

        char characters[7];
        char *ptr=characters;

        printf("Enter 7 characters: ");
		for(int i=0;i<7;i++){
		scanf("%s", ptr+i);
		}
		printf("The characters you entered is %s\n", characters);
        return 0;
}
