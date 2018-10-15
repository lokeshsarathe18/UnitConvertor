void currencyConversion(){
    int flag=1, choice;
    float value;
    do{
        system("cls");
        printf("\t\t----- Currency Conversion -----\n");
        printf("1. INR to USD\n");
        printf("2. INR to EUR\n");
        printf("3. USD to INR\n");
        printf("4. EUR to INR\n");
        printf("5. USD to EUR\n");
        printf("6. EUR to USD\n");
        printf("0. Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\t\t----- INR to USD -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f INR is equal to %.2f USD\n\n",value,.014*value);
            system("pause");
            break;
        case 2:
            printf("\t\t----- INR to EUR -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f INR is equal to %.2f EUR\n\n",value,.012*value);
            system("pause");
            break;
        case 3:
            printf("\t\t----- USD to INR -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f USD is equal to %.2f INR\n\n",value,73.69*value);
            system("pause");
            break;
        case 4:
            printf("\t\t----- EUR to INR -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f EUR is equal to %.2f INR\n\n",value,85.30*value);
            system("pause");
            break;
        case 5:
            printf("\t\t----- USD to EUR -----\n");printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f USD is equal to %.2f EUR\n\n",value,.8648*value);
            system("pause");
            break;
        case 6:
            printf("\t\t----- EUR to USD -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f EUR is equal to %.2f USD\n\n",value,1.16*value);
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