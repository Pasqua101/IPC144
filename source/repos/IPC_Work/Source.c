//#define _CRT_SECURE_NO_WARNINGS_
//#include <stdio.h>
//#include <string.h>
//
//int occurences(char*, char*);
//
//int main() {
//	int i;
//
//	i = occurences("BB", "BBBXCBBb");
//	printf("%d\n", i);
//
//	return 0;
//
//}
//
//int occurences(char* key, char* string) {
//
//	int count = 0;
//	int keyLen = strlen(key);
//	while (*string != '\0') {
//		if (strncmp(key, string, keyLen)) {
//			string++;
//			//continue;
//		}
//		else {
//			count++;
//			string++;
//		}
//	}
//
//	return count;
//}