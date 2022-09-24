#include <stdio.h>

void main()
{
    int unitConsumed_Slab1;
    int unitConsumed_Slab2;
    int unitConsumed_Slab3;

    int ElecticRate_slab1 = 5;
    int ElecticRate_slab2 = 10;
    int ElecticRate_slab3 = 15;

    printf("Please enter slab1 units :");
    scanf("%d", &unitConsumed_Slab1);

    printf("Please enter slab2 units :");
    scanf("%d", &unitConsumed_Slab2);

    printf("Please enter slab3 units :");
    scanf("%d", &unitConsumed_Slab3);

printf("The amount of %d units is : %d\n", unitConsumed_Slab1, unitConsumed_Slab1 * ElecticRate_slab1);
printf("The amount of %d units is : %d\n", unitConsumed_Slab2, unitConsumed_Slab2 * ElecticRate_slab2);
printf("The amount of %d units is : %d\n", unitConsumed_Slab3, unitConsumed_Slab3 * ElecticRate_slab3);

printf("Total Electricity cost is : %d", 
                                        (unitConsumed_Slab1 * ElecticRate_slab1) +
                                        (unitConsumed_Slab2 * ElecticRate_slab2) +
                                        (unitConsumed_Slab3 * ElecticRate_slab3)
                          );
   
}
