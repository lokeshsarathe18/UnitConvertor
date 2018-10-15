void lengthConversion(){
    int flag=1, choice;
    float value;
    do{
        system("cls");
        printf("\t\t----- Length Conversion -----\n");
        printf("1. meter to miles\n");
        printf("2. meter to feet\n");
        printf("3. meter to yards\n");
        printf("4. miles to meters\n");
        printf("5. feet to meters\n");
        printf("6. yards to meters\n");
        printf("0. Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\t\t----- meter to miles -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f meters is equal to %.2f miles\n\n",value,.000621*value);
            system("pause");
            break;
        case 2:
            printf("\t\t----- meter to feet -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f meters is equal to %.2f feet\n\n",value,3.28084*value);
            system("pause");
            break;
        case 3:
            printf("\t\t----- meter to yards -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f meters is equal to %.2f yards\n\n",value,1.094*value);
            system("pause");
            break;
        case 4:
            printf("\t\t----- miles to meters -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f miles is equal to %.2f meters\n\n",value,1609.344*value);
            system("pause");
            break;
        case 5:
            printf("\t\t----- feet to meters -----\n");printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f feet is equal to %.2f meters\n\n",value,.3048*value);
            system("pause");
            break;
        case 6:
            printf("\t\t----- yards to meters -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f yards is equal to %.2f meters\n\n",value,.9144*value);
            system("pause");
            break;
        case 0:
            flag=0;
            break;
        default:
            printf("Select valid option....\n");
        }
    }while(flag>0);
}