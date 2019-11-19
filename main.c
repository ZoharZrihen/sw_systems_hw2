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
	double amount=0;
	int accountNumber=0;
	printf("Welcome to the bank\n");
	printf("please insert transaction type: ");
	if (scanf("%c",&c)==1)
		while (c!='E')
	{
	switch (c){
	case 'O':
		printf("Please insert amount to deposit: ");
		if (scanf("%lf",&amount)==1)
			open(accounts,amount);
		break;
	case 'B':
		printf("please enter account number: ");
		if (scanf("%d",&accountNumber)==1)
			checkMoney(accounts,accountNumber);
		break;
	case 'D':
		printf("please enter account number: ");
		if (scanf("%d",&accountNumber)==1)
		{
			printf("Please insert amount of money to deposit: ");
			if (scanf("%lf",&amount)==1)
				deposit(accounts,accountNumber,amount);
		}
		break;
	case 'W':
		printf("please enter account number: ");
		if (scanf("%d",&accountNumber)==1)
		{
			printf("Please insert amount of money to withdraw: ");
			if(scanf("%lf",&amount)==1)
				withdraw(accounts,accountNumber,amount);
		}
		break;
	case 'C':
		printf("please enter account number to close: ");
		if (scanf("%d",&accountNumber)==1)
			close(accounts,accountNumber);
		break;
	case 'I':
		printf("Please insert the interest rate percentage : ");
		if(scanf("%lf",&amount)==1)
			interest(accounts,amount);
		break;
	case 'P':
		print(accounts);
		break;
	default:
		printf("Error: wrong transaction input.\n");

		}
	printf("please insert transaction type: ");
	while (scanf("\n%c",&c)!=1)
	{
		printf("please insert transaction type: ");
	}
	}
	clear(accounts);
	printf("Exiting: Bye bye.");
	return 0;
}
	/**while (c!='E'){
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
		if(c!='B' && c!='O' && c!='D'&& c!='W' && c!='C' && c!='I' && c!='P')
					printf("Error: wrong transaction input.\n");**/




