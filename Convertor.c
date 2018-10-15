#include<stdio.h>
#include<stdlib.h>

#include "lengthConversion.h"
#include "weigthConversion.h"
#include "currencyConversion.h"
#include "temperatureConversion.h"
#include "areaConversion.h"
#include "speedConversion.h"

int main(){
    int flag=1, choice;
    do{
        system("cls");
        printf("\t\t----- Main Menu -----\n");
        printf("1. Length Conversion\n");
        printf("2. Weight Conversion\n");
        printf("3. Currency Conversion\n");
        printf("4. Temperature Conversion\n");
        printf("5. Area Conversion\n");
        printf("6. Speed Conversion\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            lengthConversion();
            break;
        case 2:
            weigthConversion();
            break;
        case 3:
            currencyConversion();
            break;
        case 4:
            temperatureConversion();
            break;
        case 5:
            areaConversion();
            break;
        case 6:
            speedConversion();
            break;
        case 0:
            flag=0;
            break;
        default:
            printf("Select valid option....\n");
        }
    }while(flag>0);
    return 0;
}