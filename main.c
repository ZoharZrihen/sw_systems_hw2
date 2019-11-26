/*
 * main.c
 *
 *  Created on: 18 Nov 2019
 *      Author: zohar
 */
#include <stdio.h>
#include "myBank.h"
int main(){
	char c=0;
	double amount=0;
	int accountNumber=0;
	printf("Welcome to the bank\n");
	printf("Please insert transaction type: ");
	while (scanf(" %c",&c)!=1)
		printf("Please insert transaction type: ");
	while (c!='E')
	{
	switch (c){
	case 'O':
		printf("Please insert amount to deposit: ");
		if (scanf("%lf",&amount)==1)
			open(accounts,amount);
		else printf("err: bad input\n");
		break;
	case 'B':
		printf("Please enter account number: ");
		if (scanf("%d",&accountNumber)==1)
			checkMoney(accounts,accountNumber);
		else printf("err: bad input\n");
		break;
	case 'D':
		printf("Please enter account number: ");
		if (scanf("%d",&accountNumber)==1)
		{
			printf("Please insert amount of money to deposit: ");
			if (scanf("%lf",&amount)==1)
				deposit(accounts,accountNumber,amount);
			else printf("err: bad input\n");
		}
		else printf("err: bad input\n");
		break;
	case 'W':
		printf("Please enter account number: ");
		if (scanf("%d",&accountNumber)==1)
		{
			printf("Please insert amount of money to withdraw: ");
			if(scanf("%lf",&amount)==1)
				withdraw(accounts,accountNumber,amount);
			else printf("err: bad input\n");
		}
		else printf("err: bad input\n");
		break;
	case 'C':
		printf("Please enter account number to close: ");
		if (scanf("%d",&accountNumber)==1)
			close(accounts,accountNumber);
		else printf("err: bad input\n");
		break;
	case 'I':
		printf("Please insert the interest rate percentage : ");
		if(scanf("%lf",&amount)==1)
			interest(accounts,amount);
		else printf("err: bad input\n");
		break;
	case 'P':
		print(accounts);
		break;
	default:
		printf("Error: wrong transaction input.\n");
		}
	printf("Please insert transaction type: ");
	while (scanf(" %c",&c)!=1)
		printf("Please insert transaction type: ");
	}
	clear(accounts);
	printf("Exiting: Bye bye.");
	return 0;
}
