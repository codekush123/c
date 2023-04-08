#include <stdio.h>
#include <string.h>


void intCompare(int n1, int n2){
    if(n1 == n2){
        printf("Numbers are equal. \n", n1, n2);
    }else if(n1 > n2){
        printf("Number %d is bigger and %d is smaller. \n", n1, n2);
    }else{
        printf("Number %d is bigger and %d is smaller. \n", n2, n1);
    }
}
void floatCompare(float n1, float n2){
    if(n1 == n2){
        printf("Numbers are equal. \n", n1, n2);
    }else if(n1 > n2){
        printf("Number %5.2f is bigger and %5.2f is smaller. \n", n1, n2);
    }else{
        printf("Number %5.2f is bigger and %5.2f is smaller. \n", n2, n1);
    }
}
void strCompare(char str1[100], char str2[100]){
    int result = strcmp(str1, str2);
    if(result == 0) {
        printf("Strings are the same.\n");
    } else if(result > 0) {
        printf("As a string, '%s' is bigger and '%s' is smaller.\n", str1, str2);
    } else {
        printf("As a string, '%s' is bigger and '%s' is smaller.\n", str2, str1);
    }
}


int main(){
    int choice;
    do{
        printf("Select from the options below\n");
        printf("1) Compare Integers\n");
        printf("2) Compare Decimals\n");
        printf("3) Compare Strings\n");
        printf("0) Exit\n");
        printf("Enter your selection: \n");
        scanf("%d\n", &choice);
        switch (choice){
        case 1:{
            int n1,n2;
            printf("Enter two integers: \n");
            scanf("%d %d", &n1, &n2);
            intCompare(n1, n2);
            break;
        }
        case 2:{
            float n1, n2;
            printf("Enter two decimal numbers: \n");
            scanf("%f %f", &n1, &n2);
            floatCompare(n1, n2);
            break;
        }
        case 3:{
            char str1[100], str2[100];
            printf("Enter two strings: \n");
            scanf("%s %s", str1, str2);
            strCompare(str1, str2);
            break;
        }
        case 0:{
            break;
        }
        default:{
            break;
        }
        }
    }
    while (choice != 0);
    return 0;
      
}
