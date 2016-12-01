#include <iostream>
#include "Final.h"


int main(int argc, const char * argv[]){
	Customer p = Customer("c", "d", "4", 4756, 56.345, 6);
	p.getBalance();
	p.makeWithdrawal(100);
	p.getBalance();
	return 0;
}