#ifndef TESTS_H
#define TESTS_H

void setUp();
void tearDown();

// Playback
void testShouldBeContructed();
void testShouldReturnZeroOnNoteIsNULL();
void testShouldReturn10000OnNoteNotNULL();
void testShouldReturnNullWhenSevenEightDone();
void testShouldSwitchNoteWhenDone();
void testShouldReturnZeroOnDone();
void testShouldAge();
void testShouldPlaySquare();
void testShouldPlayTwoSimultainiousTones();
void testFourthShouldBeLessFrequent();
void testEightShouldBeLesserFrequent();

#endif // TESTS_H
