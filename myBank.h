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
void open(double accounts[][N]);
void checkMoney(double accounts[][N]);
void deposit(double accounts[][N]);
void withdraw(double accounts[][N]);
void close(double accounts[][N]);
void interest(double accounts[][N]);
void print(double accounts[][N]);
void clear(double accounts[][N]);
#endif /* MYBANK_H_ */
