////Debugging Question  Fall 2021 
//#include <stdio.h>
//
//#include <string.h>
//
//#define MAX_POSITIONS 20
//
//int findStr(const char str[], const char s[])
//{
//   int i, j, found = 0, matched = 0, posn = -1;
//   int len = strlen(s); //Finds the length of the word the
//
//    for (i = 0; str[i] != '\0' && !found; i++) //For loop looks through the string until the end 
//    {
//        if (str[i] == s[0])
//        {
//            matched = 2;
//            for (j = 0; str[i + j] != '\0' && s[j] != '\0'; j++)
//            {
//                if (str[i] == s[j])
//                {
//                    matched++;
//                    printf("Value of matched %d", matched);
//                }
//            }
//            if (matched == len) //matched is never going to equal 3 is matched is set to equal 1 in the for loop
//            {
//                printf("\nmatch does equal len");
//                
//                found = 1;
//
//                posn = j;
//                
//                printf("\n found = %d", found);
//                printf("\n posn = %d", posn);
//            }
//        }
//    }
//    printf("\nNum found in findstr %d\n", found);
//    return found; //Will always be returning 1
//}
//
//
//
//int findAll(const char str[], const char s[], int positions[]) //str isthe sentence, s is the word the, and positionsis 0 20 times
//{
//    int numFound = 0, lastPosn = 0, offset = 0;
//
//    do
//    {
//        offset += lastPosn;
//        numFound = findStr(&str[lastPosn], s); //Brings in 0 from offset and s[]
//        printf("Value in numfound %d\n", numFound);
//        if (lastPosn >= 0)
//        {
//            positions[numFound] = offset + lastPosn;
//            offset += strlen(s);
//        }
//    } while (lastPosn >= 0 && offset < strlen(str));
//    printf("Value in numFound %d\n", numFound);
//    return numFound;//Will aways return 0 if using numFound
//}
//
//
//
//int main(void)
//{
//    char string1[] = { "the cat ran the race" };
//    char lookFor[] = { "the" };
//    int foundIn[MAX_POSITIONS] = { 0 };
//    int numberFound = 0, i;
//    
//    //numberFound equals 0 when returned, look at findall
//    numberFound = findAll(string1, lookFor, foundIn); //Passes the sentence and then the word the and 0
//    printf("Num found %d\n", numberFound);
//    printf("%s found in positions: ", lookFor);
//    for (i = 0; i < numberFound; i++)
//    {
//        printf("%d%s", foundIn[i], (i == (numberFound - 1) ? "\n" : ", "));
//    }
//    return 0;
//
//}
