void temperatureConversion(){
    int flag=1, choice;
    float value;
    do{
        system("cls");
        printf("\t\t----- Temperature Conversion -----\n");
        printf("1. celsius to fahrenheit\n");
        printf("2. celsius to kelvin\n");
        printf("3. fahrenheit to celsius\n");
        printf("4. fahrenheit to kelvin\n");
        printf("5. kelvin to celsius\n");
        printf("6. kelvin to fahrenheit\n");
        printf("0. Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\t\t----- celsius to fahrenheit -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f celsius is equal to %.2f fahrenheit\n\n",value,(value*9/5)+32);
            system("pause");
            break;
        case 2:
            printf("\t\t----- celsius to kelvin -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f celsius is equal to %.2f kelvin\n\n",value,273.15+value);
            system("pause");
            break;
        case 3:
            printf("\t\t----- fahrenheit to celsius -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f fahrenheit is equal to %.2f celsius\n\n",value,(value-32)*5/9.0);
            system("pause");
            break;
        case 4:
            printf("\t\t----- fahrenheit to kelvin -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f fahrenheit is equal to %.2f kelvin\n\n",value,((value-32)*5/9.0)+273.15);
            system("pause");
            break;
        case 5:
            printf("\t\t----- kelvin to celsius -----\n");printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f kelvin is equal to %.2f celsius\n\n",value,value-273.15);
            system("pause");
            break;
        case 6:
            printf("\t\t----- kelvin to fahrenheit -----\n");
            printf("Enter the value to convert: ");
            scanf("%f",&value);
            printf("%.2f kelvin is equal to %.2f fahrenheit\n\n",value,((value-273.15)*9/5)+32);
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