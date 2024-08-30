#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    float calculate_cost(char medicine_name[20], int quantity)
	 {
    float discount, price, cost;
    FILE *fptr;
    fptr = fopen("C:\\Users\\ramya\\Desktop\\ramyaa.txt", "w"); 
    fptr = fopen("C:\\Users\\ramya\\Desktop\\ramyaa.txt", "r"); 
    switch (medicine_name[0]) {
        case 'P':
            printf("               Paracetamol Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr, "%f\n", price);
            fscanf(fptr, "%f\n",& price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr, "%f\n", discount);
            fscanf(fptr, "%f\n", &discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f\n", cost);
            fprintf(fptr, "%f\n", cost);
            fscanf(fptr, "%f\n",&cost);
            price = (price - cost);
            printf("price=%f\n", price);
            fprintf(fptr, "%f\n", price);
            fscanf(fptr, "%f\n", &price);
            break;
      case 'A':
            printf("           Aldoper Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr ,"%f\n",price);
            fscanf(fptr, "%f\n", &price);
            printf("price is:%f",price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr, "%f\n",discount);
            fscanf(fptr, "%f\n", &discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f", cost);
            fprintf(fptr ,"%f\n",cost);
            fscanf(fptr, "%f\n", &cost);
            price = (price - cost);
            printf("\nprice=%f", price);
            fprintf(fptr,"%f",price);
            fscanf(fptr, "%f", &price);
            break;
        case 'C':
            printf("         Chloroform Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr,"%f",price);
            fscanf(fptr, "%f", &price);
            printf("price is%f\n", price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr,"%f",discount);
            fscanf(fptr, "%f", &discount);
            printf( "price :%f\n", discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f", cost);
            fprintf(fptr,"%f",cost);
            fscanf(fptr, "%f", &cost);
            printf("cost is:%f",cost);
            price = (price - cost);
            printf("\nprice=%f", price);
            fprintf(fptr,"%f",price);
            fscanf(fptr, "%f", &price);
            printf("price is:%f",price);
            break;
        case 'D':
            printf("         Diclofenac Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr,"%f",price);
            fscanf(fptr, "%f\n", &price);
            printf("price is:%f",price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr,"%f\n",discount);
            fscanf(fptr, "%f\n", &discount);
            printf("\n discount is%f",discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f", cost);
            fprintf(fptr,"%f\n",cost);
            fscanf(fptr, "%f\n", &cost);
            printf("cost is:%f",cost);
            price = (price - cost);
            printf("\nprice=%f", price);
            fprintf(fptr,"%f\n",price);
            fscanf(fptr, "%f\n", price);
            printf("price is:%f\n", price);
            break;
        case 'O':
            printf("        Omee Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr,"%f\n",price);
            fscanf(fptr, "%f\n", &price);
            printf("price is%f\n", price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr,"%f",discount);
            fscanf(fptr, "%f\n",& discount);
            printf("price is%f\n", discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f", cost);
            fprintf(fptr,"%f\n",cost);
            fscanf(fptr, "%f\n", &cost);
            printf("\ncost is %f",cost);
            price = (price - cost);
            printf("\nprice=%f", price);
            fprintf(fptr,"%f\n", price);
            fscanf(fptr, "%f\n", &price);
            printf( "price is%f\n", price);
            break;
        case 'R':
            printf("       Riboflavin Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr, "%f\n",price);
            fscanf(fptr, "%f\n", &price);
            printf("price is%f\n", price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr,"%f\n", discount);
            fscanf(fptr, "%f\n", &discount);
            printf("discount is%f\n", discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f", cost);
            fprintf(fptr,"%f\n",cost);
            fscanf(fptr, "%f\n", &cost);
            printf("cost is%f\n", cost);
            price = (price - cost);
            printf("\nprice=%f", price);
            fprintf(fptr,"%f",price);
            fscanf(fptr, "%f", &price);
            printf("price is%f\n", price);
            break;
        case 'F':
            printf("    Fluconazole Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr,"%f\n", price);
            fscanf(fptr, "%f\n", &price);
            printf("price is%f\n", price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr,"%f\n",discount);
            fscanf(fptr, "%f\n", &discount);
            printf( "discount:%f\n", discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f", cost);
            fprintf(fptr,"%f\n", cost);
            fscanf(fptr, "%f\n", &cost);
            printf("cost is%f\n", cost);
            price = (price - cost);
            printf("\nprice=%f", price);
            fprintf(fptr,"%f\n", price);
            fscanf(fptr, "%f\n", &price);
            printf("price is%f\n", price);
            break;
        case 'T':
            printf("       Theophylline Tablet");
            printf("\nEnter the price: ");
            scanf("%f", &price);
            fprintf(fptr,"%f", price);
            fscanf(fptr,"%f", &price);
            printf("%f\n", price);
            printf("Enter the discount: ");
            scanf("%f", &discount);
            fprintf(fptr,"%f\n", discount);
            fprintf(fptr, "%f\n", &discount);
            printf("discount is:%f\n", discount);
            cost = (price * discount * quantity) / 100.0;
            printf("cost=%f", cost);
            fprintf(fptr,"%f\n", cost);
            fscanf(fptr, "%f\n", &cost);
            printf( "cost is%f\n", cost);
            price = (price - cost);
            printf("\nprice=%f", price);
            fprintf(fptr,"%f\n", price);
            fscanf(fptr, "%f\n", &price);
            printf("price is:%f\n", price);
        
            break;
        default:
            printf("Enter correct tablet name\n");
            fclose(fptr);
            return -1.0;
    }

    fclose(fptr); 
    return cost;
}

int main() {
    char medicine_name[20];
    int quantity;
    float total_bill = 0.0, cost;
    FILE *fptr;

    printf("************  Dr. Ravinder's Medical Store  ************\n");
    printf("Located at: Mal: Chilpur, Dist: Ghunpur\n\n");

    printf("\nTABLET NAMES:");
    printf("\n1. Paracetamol Tablet");
    printf("\n2. Aldoper Tablet");
    printf("\n3. Chloroform Tablet");
    printf("\n4. Diclofenac Tablet");
    printf("\n5. Omee Tablet");
    printf("\n6. Riboflavin Tablet");
    printf("\n7. Fluconazole Tablet");
    printf("\n8. Theophylline Tablet");

    while (1) {
        printf("\nEnter the medicine name (q to quit): ");
        scanf("%s", medicine_name);
        if (strcmp(medicine_name, "q") == 0)
		 {
            break;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        cost = calculate_cost(medicine_name, quantity);

        if (cost == -1.0) 
		{
            continue;
        }

        total_bill += cost;
    }

    fprintf(fptr, "\nTotal Bill: %.2f\n", total_bill);
    fscanf(fptr, "\nTotal Bill: %.2f\n", total_bill);
    printf("\nTotal Bill: %.2f\n", total_bill);
    fclose(fptr);
    
    return 0;
}
