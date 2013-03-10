#include <stdio.h>
#include "tests.h"
#include "asserts.h"

extern int assertCount;
extern int successCount;
extern int failureCount;

#define TEST(name) printf(#name"\n"); \
	name()

void print_results(void) {

	if (successCount == assertCount) {
		printf("PASSED ");
	} else {
		printf("FAILED ");
	}
	printf("(asserts: %d, success: %d, failures: %d)\n", assertCount, successCount, failureCount);
}

int main( int argc, char *argv[] ) {

	// Playback
	TEST(testShouldReturnZeroOnNoteIsNULL);
	TEST(testShouldReturn10000OnNoteNotNULL);
	TEST(testShouldReturnNullWhenSevenEightDone);
	TEST(testShouldSwitchNoteWhenDone);
	TEST(testShouldReturnZeroOnDone);
	TEST(testShouldAge);
	TEST(testShouldPlaySquare);

	print_results();
	return 0;
}
