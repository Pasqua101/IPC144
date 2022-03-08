//#include<stdio.h>
//#define SZ 5
//
//int main(void)
//{
//    int arg1[SZ] = { 3, 4, 7, 2, 9 };
//    double arg2[SZ] = { 2.1, 3.2, 5.3, 7.2, 8.1 };
//    char operand[SZ] = { 'm', 'd', 'r', 'm', 'r' };
//    int i;
//    for (i = 0; i < SZ; i++)
//    {
//        switch (operand[i])
//        {
//        case 'm':
//            printf("%.2lf  ", arg1[i] * arg2[i]);
//            break;
//        case 'd':
//            printf("%.2lf  ", (double)arg1[i] / arg2[i]);
//            break;
//        case 'r':
//            printf("%d  ", arg1[i] % (int) arg2[i]);
//            break;
//        default:
//            break;
//        }
//    }
//    printf("\n");
//    return 0;
//}