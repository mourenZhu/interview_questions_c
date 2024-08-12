#include <stdio.h>

void bubble_sort(int list[], int len)
{
    int tmp;
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (list[j] > list[j+1]) {
                tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
//    int list[] = {1, 4, 2, 5, 8, 0 ,9, 3, 6, 7};
    int list[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = sizeof(list) / sizeof(list[0]);
    bubble_sort(list, len);
    for (int i = 0; i < len; ++i) {
        printf("%d\t", list[i]);
    }
    printf("\n");


    return 0;
}