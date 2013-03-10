#include <stdio.h>
#include "tests.h"
#include "asserts.h"

extern int assertCount;
extern int successCount;
extern int failureCount;

#define TEST(name) printf(#name"\n"); \
	setUp(); \
	name(); \
	tearDown()

void print_results(void) {

	if (successCount == assertCount) {
		printf("\e[1;32mPASSED ");
	} else {
		printf("\e[1;31mFAILED ");
	}
	printf("(asserts: %d, success: %d, failures: %d)\e[0m\n", assertCount, successCount, failureCount);
}

int main( int argc, char *argv[] ) {

	// Playback
	TEST(testShouldBeContructed);
	TEST(testShouldReturnZeroOnNoteIsNULL);
	TEST(testShouldReturn10000OnNoteNotNULL);
	TEST(testShouldReturnNullWhenSevenEightDone);
	TEST(testShouldSwitchNoteWhenDone);
	TEST(testShouldReturnZeroOnDone);
	TEST(testShouldAge);
	TEST(testShouldPlaySquare);
	TEST(testFourthShouldBeLessFrequent);
	TEST(testEightShouldBeLesserFrequent);
	TEST(testShouldPlayTwoSimultainiousTones);


	print_results();
	return 0;
}
