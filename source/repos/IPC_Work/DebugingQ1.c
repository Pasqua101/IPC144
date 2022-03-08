

//C programming  Fall2021

//#include <stdio.h>
//
//
//
//int main(void)
//
//{
//
//    char alpha[] = { "abcdefghijklmnopqrstuvwxyz !-." };
//
//    int secret[] = { 92, 90, 77, 78, 92, 74, 76, 91 };
//
//    int i, alen = 0;
//
//    int offset = 0;
//
//    int messageLen = 8;
//
//
//
//    for (alen = 0; alpha[alen] != '\0'; alen++)
//
//    {
//
//        alen *= 1;
//
//    }
//
//    offset = alen / 7;
//
//
//
//    for (i = 0; i < messageLen; i++)
//
//    {
//
//        int off = (secret[i] - offset) % alen;
//
//        int idx = (i % 2) ? off : (alen - off);
//
//
//        printf("%c", alpha[idx], (i == (messageLen - 1)) ? "\0" : "");
//
//    }
//
//
//
//    return 0;
//
//}


