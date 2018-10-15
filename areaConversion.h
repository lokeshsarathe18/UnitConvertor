void areaConversion(){
    int flag=1, choice;
    float value;
    do{
        system("cls");
        printf("\t\t----- Volume Conversion -----\n");
        printf("1. meter sq to acre\n");
        printf("2. meter sq to hectare\n");
        printf("3. acre to meter sq\n");
        printf("4. acre to hectare\n");
        printf("5. hectare to meter sq\n");
        printf("6. hectare to acre\n");
        printf("0. Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\t\t----- meter sq to acre -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f meter sq is equal to %.2f acre\n\n",value,.000247*value);
            system("pause");
            break;
        case 2:
            printf("\t\t----- meter sq to hectare -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f meter sq is equal to %.2f hectare\n\n",value,.0001*value);
            system("pause");
            break;
        case 3:
            printf("\t\t----- acre to meter sq -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f acre is equal to %.2f meter sq\n\n",value,4045.856*value);
            system("pause");
            break;
        case 4:
            printf("\t\t----- acre to hectare -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f acre is equal to %.2f hectare\n\n",value,.405*value);
            system("pause");
            break;
        case 5:
            printf("\t\t----- hectare to meter sq -----\n");printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f hectare is equal to %.2f meter sq\n\n",value,10000*value);
            system("pause");
            break;
        case 6:
            printf("\t\t----- hectare to acre -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f hectare is equal to %.2f acre\n\n",value,2.471*value);
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