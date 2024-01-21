#include<stdio.h>
#include<string.h>

typedef struct listOfItems{
    int id;
    char name[10];
    float price;
    int quantity;
}items;

void display(items product[],int size, char cname[],char cAddress[]){
    float total=0;
    printf("\n\n\n");
    printf("-----------------------------------\n");
    printf("\t   Your invoice\n");
    printf("-----------------------------------\n");
    printf("\n Name: %s\t Address : %s \n\n", cname, cAddress);
    for(int i=0;i<size;i++){
        printf("Id : %d\t", product[i].id);
        printf("Name : %s\t", product[i].name);
        printf("Qty : %d\t\t", product[i].quantity);
        printf("Price : %.2f\n", product[i].price);
        printf("--------------------------------------------------------\n");
        total +=(product[i].price * product[i].quantity);
    }
    printf("\t\t Total : %.2f\n\n", total);
    // printf("\tThanks for visiting the store!\n\n\n");
}
int main(){
    int total_items;
    char name[25];
    char address[25];
    printf("Welcome to the store\n");
    printf("Enter your name: ");
    gets(name);
    printf("Enter your shipping address: ");
    gets(address);
    printf("Enter total items: ");
    scanf("%d", &total_items);
    items item[total_items];
    for(int i=0;i<total_items;i++){
        printf("Enter the ID of product %d: ", i+1);
        scanf("%d" , &item[i].id);
        // item[i].id=(i+1);
        printf("Enter the %d item name: ", i+1);
        scanf("%s", &item[i].name);
        printf("Enter the price: ");
        scanf("%f", &item[i].price);
        printf("Enter the quantity of %s do you want: ", item[i].name);
        scanf("%d", &item[i].quantity);
    }
    display(item,total_items,name, address);
    return 0;
}