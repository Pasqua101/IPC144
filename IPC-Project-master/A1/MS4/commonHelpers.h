#pragma once
//Safe guard (Your identification information commented header goes here)

#ifndef COMMON_HELPERS_H_
#define COMMON_HELPERS_H_

//Milestone 1
int currentYear(void);
void clearStandardInputBuffer(void);

//Function protoypes to be made
int getInteger(void);

int getPositiveInteger(void);

double getDouble(void);

double getPositiveDouble(void);

int getIntFromRange(int min, int max);

char getCharOption(const char* alpha);

void getCString(char* str, int min, int max);

// Header file code goes above #endif

#endif // !COMMON_HELPERS_H_
