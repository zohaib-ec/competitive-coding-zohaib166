#include <stdio.h>
int main() {
    int two_wheelers, four_wheelers;
    int total_vehicles, total_wheels;
    
    scanf("%d %d", &total_vehicles, &total_wheels); //do not change this line

    two_wheelers = (total_wheels - 2*total_vehicles)/2;

    four_wheelers = (4*total_vehicles - total_wheels)/2

    printf("%d %d\n", two_wheelers, four_wheelers); //do not change this line
  
}
