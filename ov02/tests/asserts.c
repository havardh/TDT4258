#include "asserts.h"

int assertCount = 0;
int successCount = 0;
int failureCount = 0;

void assertIntEqual(int16_t expected, int16_t actual) {
	assertCount++;
	if (actual != expected) {
		failureCount++;
		printf("\e[1;31mExpected %d to be %d\e[0m\n", actual, expected);
	} else {
		successCount++;
	}

}


void assertPtrEqual(void* expected, void* actual) {

	assertCount++;
	if (actual != expected) {
		failureCount++;
		printf("\e[1;31mExpected %p to be %p\e[0m\n", actual, expected);
	} else {
		successCount++;
	}

}
