#include<stdio.h>
#include<string.h>
struct car
{
    float fuel_level;
    float max_fuel_level;
    char model[20];
};

float refuel(float level_fuel){
    if (level_fuel>= 80)
    {
        return level_fuel;
    }
    else{
    level_fuel= level_fuel+ 18;
    return level_fuel;
    }
}

int main (){
    struct car x;
    x.fuel_level= 30;
    x.max_fuel_level=100;
    strcpy(x.model, "Nissan");
    refuel(x.fuel_level);

    printf("Model: %s Fuellevel first: %.1f Fuel level after: %.1f Fuel max :%.1f", x.model, x.fuel_level, refuel(x.fuel_level), x.max_fuel_level);

    return 0;
}