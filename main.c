#include <stdio.h>
//平、閏年判定https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30753
int main(){
    int year;
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("Bissextile Year\n");
    }
    else if (year % 100 == 0) {
        printf("Common Year\n");
    }
    else if (year % 4 == 0) {
        printf("Bissextile Year\n");
    }
    else {
        printf("Common Year\n");
    }
    return 0;
}
