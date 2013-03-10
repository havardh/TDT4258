#include "asserts.h"

int assertCount = 0;
int successCount = 0;
int failureCount = 0;

void assertIntEqual(int16_t expected, int16_t actual) {
	assertCount++;
	if (actual != expected) {
		failureCount++;
		printf("Expected %d to be %d\n", actual, expected);
	} else {
		successCount++;
	}

}


void assertPtrEqual(void* expected, void* actual) {

	assertCount++;
	if (actual != expected) {
		failureCount++;
		printf("Expected %p to be %p\n", actual, expected);
	} else {
		successCount++;
	}

}
