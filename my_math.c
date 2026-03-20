#include <stdio.h>
#include <stdlib.h>

#include "my_math.h"

int findGCD(int nummer, int GCD) {
	if (GCD == 0) {
		return nummer;
	}
	else {
		return findGCD(GCD, nummer % GCD);		//최대공약수
	}
}

int findLCM(int nummer, int demoni) {

	return ((nummer * demoni) / findGCD(nummer, demoni));	//최소공배수
}