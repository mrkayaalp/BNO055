#include <stdio.h>
#include <stdint.h>

void print_bit(int sonuc){
    printf("0b");
    for(int i = 7; i>=0; i--){
        if(sonuc & (1<<i))
            printf("1");
        else    
            printf("0");
    }
    printf("\n");
}

enum G_range {
    accel_2G,
    accel_4G,
    accel_8G,
    accel_16G,
};
enum Bandwitdth{
    accel_7_81Hz,
    accel_15_63Hz,
    accel_31_25Hz,
    accel_62_5Hz,
    accel_125Hz,
    accel_250Hz,
    accel_500Hz,
    accel_1000Hz,
};
enum Operation_Mode{
    accel_normal,
    accel_suspend,
    accel_low_power_1,
    accel_standby,
    accel_low_power_2,
    accel_deep_suspend,
};


int main() {
    uint8_t G_range;
    uint8_t Bandwitdth;
    uint8_t Operation_Mode;
    uint8_t sonuc;

    G_range = accel_4G;
    Bandwitdth = accel_125Hz;
    Operation_Mode = accel_standby;

    if(G_range == accel_2G)
        sonuc += 0b00;
    else if (G_range == accel_4G)
       sonuc += 0b01;
    else if (G_range == accel_8G)
       sonuc += 0b10;
    else
       sonuc += 0b11;    
    
    if(Bandwitdth == accel_7_81Hz)
        sonuc += 0b00000;
    else if(Bandwitdth == accel_15_63Hz)
        sonuc += 0b00100;
    else if(Bandwitdth == accel_31_25Hz)
        sonuc += 0b01000;
    else if(Bandwitdth == accel_62_5Hz)
        sonuc += 0b01100;
    else if(Bandwitdth == accel_125Hz)
        sonuc += 0b10000;
    else if(Bandwitdth == accel_250Hz)
        sonuc += 0b10100;
    else if(Bandwitdth == accel_500Hz)
        sonuc += 0b11000;
    else if(Bandwitdth == accel_1000Hz)
        sonuc += 0b11100;

    if(Operation_Mode == accel_normal)
        sonuc += 0b00000000;
    else if(Operation_Mode == accel_suspend)
        sonuc += 0b00100000;
    else if(Operation_Mode == accel_low_power_1)
        sonuc += 0b01000000;
    else if(Operation_Mode == accel_standby)
        sonuc += 0b01100000;
    else if(Operation_Mode == accel_low_power_2)
        sonuc += 0b10000000;
    else if(Operation_Mode == accel_deep_suspend)
        sonuc += 0b10100000;
    
    print_bit(sonuc);


       
    






}