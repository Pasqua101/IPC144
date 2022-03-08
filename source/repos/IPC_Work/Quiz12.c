////Week 12 quiz
//#include <stdio.h>
//
//#define WORD_LEN 16 //Changed WORD_LEN to be 16 instead of 15, since the length of the string in title and artist is 16 characters long and not 15
//#define VOCAL_LEN 100
//
//struct Vocal //Moved Vocal to be above the Song struct, so this way the Song struct can find Vocal when it is calling it in
//{
//    char word[WORD_LEN + 1];
//    // How long to hold the note (in seconds)
//    int sustainTime;
//};
//
//struct Song
//{
//    char title[WORD_LEN + 1];
//    char artist[WORD_LEN + 1];
//    struct Vocal lyrics[VOCAL_LEN];
//    int words;
//};
//
//
//
//int karaoke(const struct Song* song)
//{
//    int i, tSeconds = 0;
//    struct Vocal* word;
//
//    printf("\"%s\" (by:%s)\n\n", song->title, song->artist);
//
//    for (i = 0; i < song->words; i++)
//    {
//        word = &song->lyrics[i];
//
//        printf("%s ", word->word);
//        tSeconds += word->sustainTime;
//
//        if (word->sustainTime == 4) //Moved the location of the if statment to be after a word is printed, instead of before. This was causing ... to be printed out before the last word on the line could be displayed
//        {
//            puts("...");
//        }
//    }
//
//    return tSeconds;
//}
//
//void convertMinSec(const int seconds, int* min, int* sec) //Had to declare the ints for min and sec to be pointers
//{
//    //Changed the equation forumla that was being done for min and sec. Instead of min doing seconds % 60, I changed it to seconds / 60 and changed sec to seconds % 60
//    *min = seconds / 60;
//    *sec = seconds % 60;
//}
//
//int main(void)
//{
//    // !!! DO NOT MODIFY THE INITIALIZATION OF THE "chorus" VARIABLE !!!
//    struct Song chorus = { "We Are The World", "Various Artists", {
//        {"We", 1}, {"are", 1}, {"the", 1}, {"world", 4}, {"We", 1}, {"are", 1}, {"the", 1}, {"children", 4},
//        {"We", 1}, {"are", 1}, {"the", 1}, {"ones", 1}, {"who", 1}, {"make", 1}, {"a", 1}, {"brighter", 2},
//        {"day", 2}, {"so", 1},{"lets", 1}, {"start", 1}, {"giving", 4} }, 21 };
//
//    int minutes, seconds, totalSeconds = karaoke(&chorus); //Had to place a & behind chorus for the Song struct, since it is calling in an array
//    convertMinSec(totalSeconds, &minutes, &seconds); //Place a & in front of the minutes and seconds variables, since the it was saying they were unitialized. So I had it look for the address of the variables
//
//    printf("Duration: %02d:%02d\n\n", minutes, seconds);
//
//    return 0;
//}
//
//// ###### [EXPECTED OUTPUT] ######
//
//// We Are The World (by:Various Artists)
//// 
//// We are the world ...
//// We are the children ...
//// We are the ones who make a brighter day so lets start giving ...
//// Duration: 00:32