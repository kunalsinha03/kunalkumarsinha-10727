#include <stdio.h>

int main() {
    int choice;
    double num, base, result;
    int exp, i;

    
    printf("--- Menu-Driven Scientific Calculator ---\n");
    printf("1. Square (varg)\n");
    printf("2. Cube (ghan)\n");
    printf("3. Power (shakti)\n");
    printf("4. Exit\n");

    printf("\nApna option chune (1-4): ");
    scanf("%d", &choice); 

    switch(choice) { 
        case 1:
            printf("Number enter karein: ");
            scanf("%lf", &num);
            result = num * num; 
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            printf("Number enter karein: ");
            scanf("%lf", &num);
            result = num * num * num; 
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            printf("Base number enter karein: ");
            scanf("%lf", &base);
            printf("Exponent (power) enter karein: ");
            scanf("%d", &exp);
            result = 1.0;
            
            for(i = 1; i <= exp; i++) {
                result *= base;
            }
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            printf("Program band ho raha hai.\n");
            break;

        default:
            printf("Galat option! Dubara koshish karein.\n");
    }

    return 0; 
}