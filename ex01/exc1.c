#include <stdio.h>

int calculate_cost(int num_days, char room_type, char season) {
    int room_rate;
    if (room_type == 's') {
        room_rate = (season == 'h') ? 100 : 50;
    } else {
        room_rate = (season == 'h') ? 150 : 75;
    }
    return num_days * room_rate;
}
#include <stdio.h>

int main() {
    int numTestCases;
    printf("Enter number of test cases: ");
    scanf("%d", &numTestCases);

    int i = 1;
    while (i <= numTestCases) {
        int numDays;
        float cost;
        char roomType, season;

        printf("Enter number of days: ");
        scanf("%d", &numDays);

        printf("Enter room type (s for single, s for double): ");
        scanf(" %c", &roomType);

        printf("Enter season (l for low, h for high): ");
        scanf(" %c", &season);
        
        cost = calculate_cost(numDays, roomType, season);
        
        printf("Test case : %d\n", i);
        printf("Actual Cost: $%.2f\n\n", cost);
        i += 1;
}
    return 0;
}
