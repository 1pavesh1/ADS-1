// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
using namespace std;
bool checkPrime(uint64_t value) {
 for (int i = 2; i*i <= value; i++) {
  if (value % i == 0)
  {
	return false;
  }
 }
 return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0;
  for (uint64_t i = 2; count <= n; ++i) {
	if (checkPrime(i)) {
		count += 1;
	}
	if (count == n) {
	  return i;
	}
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
	value += 1;
	if (checkPrime(value)) {
		return value;
	}
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int i = 0; i < hbound; i++) {
   if (checkPrime(i))
   {
	 sum += i;
   }
  }
  return sum;
}
