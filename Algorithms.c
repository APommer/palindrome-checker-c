/*
 ============================================================================
 Name        : Algorithms.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkPalindrome(char s[]);

int main(void) {
	 char palavra[15] = "arara";

	 checkPalindrome(palavra);


	return EXIT_SUCCESS;
}

int checkPalindrome(char word[]){
	int esq = 0;
	int dir = strlen(word) - 1;

	while(esq < dir){
		if(word[esq] != word[dir]){
			printf("%s", "não palindromo");
            return 0;
		}
		esq++;
		dir--;
	}
	printf("Eh palindromo");
	return 1;
}


