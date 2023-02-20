// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
	uint64_t count = 0;
	for (int i = 1; i <= 997; i++) {
		if (value % i == 0) 
			count++;
	}
	if (count == 2)
		return true;
	else
		return false;
}

uint64_t nPrime(uint64_t n) {
	uint64_t count1 = 0, count2 = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j >= 1; j--) {
			if (i % j == 0)
				count1++;
		}
		if (count1 == 2) {
			count2++;
			count1 = 0;
		}
		else {
			count1 = 0;
		}
	}
	return count2;
}

uint64_t nextPrime(uint64_t value) {
	uint64_t count1 = 0;
	for (int i = value + 1; i <= 997; i++) {
		for (int j = i; j >= 1; j--) {
			if (i % j == 0)
				count1++;
		}
		if (count1 == 2) {
			return i;
			count1 = 0;
		}
		else {
			count1 = 0;
		}
	}
}

uint64_t sumPrime(uint64_t hbound) {
	uint64_t count1 = 0, sum = 0;
	for (int i = 1; i < hbound; i++) {
		for (int j = i; j >= 1; j--) {
			if (i % j == 0)
				count1++;
		}
		if (count1 == 2) {
			sum += i;
			count1 = 0;
		}
		else {
			count1 = 0;
		}
	}
	return sum;
}
