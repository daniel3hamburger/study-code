#include<stdio.h>
struct Sensordata{
    float time;
    double probaility;

};
struct Sensor{
    int id;
    double threshold;
    double data[3000];
    int object_detection[3000];
};


int main(){
    FILE *f;
    f = fopen("sensor1.txt", "r");
    if (!f){
    return 1;
    } 

    int time1 = fgetc(f);
    printf("%i\n", time1);


    return 0;
}