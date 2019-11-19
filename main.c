/*
 * main.c
 *
 *  Created on: 18 Nov 2019
 *      Author: zohar
 */
#include <stdio.h>
#include "myBank.h"
int main(){
	char c;
	printf("Welcome to the bank\n");
	printf("please insert transaction type: ");
	scanf("%c",&c);
	while (c!='E'){
		if(c=='O')
			open(accounts);
		if (c == 'B')
			checkMoney(accounts);
		if(c=='D')
			deposit(accounts);
		if(c=='W')
			withdraw(accounts);
		if(c=='C')
			close(accounts);
		if(c=='I')
			interest(accounts);
		if(c=='P')
			print(accounts);
		printf("please insert transaction type: ");
		scanf("\n%c",&c);
	}
	return 0;
}

