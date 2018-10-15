void speedConversion(){
    int flag=1, choice;
    float value;
    do{
        system("cls");
        printf("\t\t----- Speed Conversion -----\n");
        printf("1. meter/s to knot\n");
        printf("2. meter/s to miles/hr\n");
        printf("3. knot to meter/s\n");
        printf("4. knot to miles/hr\n");
        printf("5. miles/hr to meter/s\n");
        printf("6. miles/hr to knot\n");
        printf("0. Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\t\t----- meter/s to knot -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f meter/s is equal to %.2f knot\n\n",value,1.943844*value);
            system("pause");
            break;
        case 2:
            printf("\t\t----- meter/s to miles/hr -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f meter/s is equal to %.2f miles/hr\n\n",value,2.236936*value);
            system("pause");
            break;
        case 3:
            printf("\t\t----- knot to meter/s -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f knot is equal to %.2f meter/s\n\n",value,.514444*value);
            system("pause");
            break;
        case 4:
            printf("\t\t----- knot to miles/hr -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f knot is equal to %.2f miles/hr\n\n",value,1.150779*value);
            system("pause");
            break;
        case 5:
            printf("\t\t----- miles/hr to meter/s -----\n");printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f miles/hr is equal to %.2f meter/s\n\n",value,.44704*value);
            system("pause");
            break;
        case 6:
            printf("\t\t----- miles/hr to knot -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f miles/hr is equal to %.2f knot\n\n",value,.868976*value);
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