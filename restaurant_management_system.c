#include <stdio.h>


float starters();
float meals();
float drinks();

int main() {
    float s1 = 0, s2 = 0, s3 = 0, total;

    printf("\t\t\t\tWelcome to South Indian Restaurant\n");

    
    s1 = starters();

    
    s2 = meals();

    
    s3 = drinks();

    total = s1 + s2 + s3;

    printf("\n====================================");
    printf("\nTotal Bill to be paid = ?%.2f\n", total);
    printf("====================================\n");

    return 0;
}


float starters() {
    int n, i,choice, quantity;
    float bill = 0;

    printf("\nEnter number of starters you want to order: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        printf("\n--- Starters Menu ---\n");
        printf("1. Veg Manchuria - ?80\n");
        printf("2. Chicken Manchuria - ?120\n");
        printf("3. Gobi Manchuria - ?110\n");
        printf("4. Paneer 65 - ?100\n");
        printf("5. Chicken Tandoori - ?130\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1: bill += 80 * quantity; break;
            case 2: bill += 120 * quantity; break;
            case 3: bill += 110 * quantity; break;
            case 4: bill += 100 * quantity; break;
            case 5: bill += 130 * quantity; break;
            default: printf("Invalid choice!\n");
        }
    }

    printf("Starters Bill = %.2f\n", bill);
    return bill;
}


float meals() {
    int n, i,choice, quantity;
    float bill = 0;

    printf("\nEnter number of meal items you want to order: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        printf("\n--- Meals Menu ---\n");
        printf("1. Chicken Biryani - ?250\n");
        printf("2. Paneer Biryani - ?220\n");
        printf("3. Chicken Fried Rice - ?170\n");
        printf("4. Chicken Schezwan - ?180\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1: bill += 250 * quantity; break;
            case 2: bill += 220 * quantity; break;
            case 3: bill += 170 * quantity; break;
            case 4: bill += 180 * quantity; break;
            default: printf("Invalid choice!\n");
        }
    }

    printf("Meals Bill = %.2f\n", bill);
    return bill;
}


float drinks() {
    int n,i, choice, quantity;
    float bill = 0;

    printf("\nEnter number of drink types you want to order: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        printf("\n--- Drinks Menu ---\n");
        printf("1. Sprite - ?20\n");
        printf("2. Sting - ?15\n");
        printf("3. Thums Up - ?30\n");
        printf("4. Red Bull - ?125\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1: bill += 20 * quantity; break;
            case 2: bill += 15 * quantity; break;
            case 3: bill += 30 * quantity; break;
            case 4: bill += 125 * quantity; break;
            default: printf("Invalid choice!\n");
        }
    }

    printf("Drinks Bill = %.2f\n", bill);
    return bill;
}

