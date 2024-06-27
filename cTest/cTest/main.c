//
//  main.c
//  cTest
//
//  Created by Suck Lee on 2024/06/28.
//

#include <stdio.h>

int main(int argc, const char* argv[]) {
    int intArray[] = {
        1, 2, 4, 8, 16, 32, 64, 128, 256
    };
    
    int* test = &intArray[1];
    
    printf("%d %d %d \n", *test, *(test + 1), *(test + 2)); // 2 4 8
    
    test = &intArray[3];    // 8
    
    for (size_t i = 0; i < 5; i++) {
        printf("%d ", *(test + i)); // 8 ~ 128
    }
    puts("");
    puts("");
    
    test = intArray;
    
    printf("%d and.. [ %d ] \n",
           test[sizeof(intArray)/sizeof(int) - 1],
           test[sizeof(intArray)/sizeof(int)]);
    
    return 0;
}

//int main(int argc, const char** argv) {
//    int num = 13;
//    int* ptr = &num;
//
//    printf("%p \n", ptr);
//    printf("%p \n", ptr + 1);
//    printf("%lu \n", (size_t)ptr);
//    printf("%lu \n", (size_t)(ptr + 1));
//    printf("%lu \n", (size_t)(ptr + 2));
//
//    puts("---");
//
//    size_t big = 17;
//    size_t* btr = &big;
//
//    printf("%p \n", btr);
//    printf("%p \n", btr + 1);
//    printf("%lu \n", (size_t)btr);
//    printf("%lu \n", (size_t)(btr + 1));
//
//    return 0;
//}

//int evenOrOdd(int num) {
//    if (num & 1) return 1;
//    return 0;
//}
//
//void putsEvenOrOdd(int num) {
//    switch (evenOrOdd(num)) {
//        case 1:
//            puts("홀수!!!");
//            break;
//        case 0:
//            puts("짝수!!!");
//    }
//}
//
//int main(int argc, const char * argv[]) {
//
//    int num;
//
//    for (size_t i = 0; i < 5; i++) {
//        printf("input num: ");
//        scanf("%d", &num);
//        putsEvenOrOdd(num);
//    }
//
//    return 0;
//}
