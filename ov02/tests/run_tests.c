#include "tests.h"
#include "asserts.h"

extern int assertCount;
extern int successCount;
extern int failureCount;

#define TEST(name) printf(#name"\n"); \
	name()

int main( int argc, char *argv[] ) {


	TEST(testShouldReturnZeroOnNoteIsNULL);

	TEST(testShouldReturn10000OnNoteNotNULL);

	TEST(testShouldReturnNullWhenSevenEightDone);

	TEST(testShouldSwitchNoteWhenDone);

	if (successCount == assertCount) {
		printf("PASSED ");
	} else {
		printf("FAILED ");
	}
	printf("(asserts: %d, success: %d, failures: %d)\n", assertCount, successCount, failureCount);

	return 0;
}