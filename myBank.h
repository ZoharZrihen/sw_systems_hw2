/*
 * myBank.h
 *
 *  Created on: 18 Nov 2019
 *      Author: zohar
 */

#ifndef MYBANK_H_
#define MYBANK_H_
#define N 50
#define M 3
double accounts[M][N];
double castDouble(double);
void open(double accounts[][N],double);
void checkMoney(double accounts[][N],int);
void deposit(double accounts[][N],int,double);
void withdraw(double accounts[][N],int,double);
void close(double accounts[][N],int);
void interest(double accounts[][N],double);
void print(double accounts[][N]);
void clear(double accounts[][N]);
#endif /* MYBANK_H_ */
