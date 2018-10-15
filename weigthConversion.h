void weigthConversion(){
    int flag=1, choice;
    float value;
    do{
        system("cls");
        printf("\t\t----- Weight Conversion -----\n");
        printf("1. kg to pound\n");
        printf("2. kg to ounce\n");
        printf("3. pound to kg\n");
        printf("4. pound to ounce\n");
        printf("5. ounce to kg\n");
        printf("6. ounce to pound\n");
        printf("0. Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\t\t----- kg to pound -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f kg is equal to %.2f pound\n\n",value,2.204623*value);
            system("pause");
            break;
        case 2:
            printf("\t\t----- kg to ounce -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f kg is equal to %.2f ounce\n\n",value,35.273962*value);
            system("pause");
            break;
        case 3:
            printf("\t\t----- pound to kg -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f pound is equal to %.2f kg\n\n",value,.453592*value);
            system("pause");
            break;
        case 4:
            printf("\t\t----- pound to ounce -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f pound is equal to %.2f ounce\n\n",value,16*value);
            system("pause");
            break;
        case 5:
            printf("\t\t----- ounce to kg -----\n");printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f ounce is equal to %.2f kg\n\n",value,.02835*value);
            system("pause");
            break;
        case 6:
            printf("\t\t----- ounce to pound -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f ounce is equal to %.2f pound\n\n",value,.0625*value);
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
