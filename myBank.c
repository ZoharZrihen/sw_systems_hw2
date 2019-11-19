/*
 * myBank.c
 *
 *  Created on: 18 Nov 2019
 *      Author: zohar
 */
#include <stdio.h>
#include "myBank.h"

double accounts[M][N]={0};

double castDouble(double num)
{
    double i;
	num=num*100;
	num=(int)num;
	num=num/100;
	i=num;
	return i;
}
void open(double accounts[][N],double amount)
{
	int i=0;
	amount=castDouble(amount);
	if (amount<0){
		printf("error: cannot deposit negative amount");
		return;
	}
	while(accounts[0][i]!=0 && i<N){
		i++;
	}
	if (i>=N) {
		printf("error: no account space available");
		return;
	}
	accounts[0][i]=1;
	accounts[1][i]=amount;
	printf("your account number is: %d \n",(901+i));
}
void checkMoney(double accounts[][N],int i){
	if (i<951 && i>900)
		if(accounts[0][i-901]!=0)
			printf("amount of money in the account is: %0.2lf\n",accounts[1][i-901]);
		else printf ("error: account is closed\n");
	else printf ("error: illegal account number\n");
}
void deposit(double accounts[][N],int i,double amount){
	amount=castDouble(amount);

	if (i<951 && i>900)
		if(accounts[0][i-901]!=0){
			accounts[1][i-901]+=amount;
			printf("amount of money in the account is: %0.2lf\n",accounts[1][i-901]);
		}
		else printf("error: account is closed\n");
	else printf("error: illegal account number\n");
}
void withdraw(double accounts[][N],int i,double amount){
	amount=castDouble(amount);
	if (i<951 && i>900)
		if(accounts[0][i-901]!=0){
			if(amount<0 || amount>accounts[1][i-901]){
				printf("illegal amount or money or you don't have enough money in your account\n");
			}
			else {
				accounts[1][i-901]-=amount;
				accounts[1][i-901]=castDouble(accounts[1][i-901]);
				printf("amount of money in the account is: %0.2lf\n",accounts[1][i-901]);
			}
		}
		else printf("error: account is closed\n");
	else printf("error: illegal account number\n");
}
void close(double accounts[][N],int i){
	if (i<951 && i>900)
		if(accounts[0][i-901]!=0){
			accounts[0][i-901]=0;
			accounts[1][i-901]=0;
		}
		else printf("error: account is already closed\n");
	else printf("error: illegal account number\n");
}
void interest(double accounts[][N],double in){
	int i;
	in=(in/100)+1;
	for(i=0;i<N;i++)
		{accounts[1][i]=accounts[1][i]*in;
		accounts[1][i]=castDouble(accounts[1][i]);
		}
}

void print(double accounts[][N]){
	int i;
	for(i=0;i<N;i++){
		if(accounts[0][i]==1){
			printf("account number: %d",i+901);
			printf(" amount of money: %0.2lf\n", accounts[1][i]);
		}
	}
}
void clear(double account[][N]){
	int i=0;
	for(i=0;i<N;i++){
		accounts[0][i]=0;
		accounts[1][i]=0;
	}
}
