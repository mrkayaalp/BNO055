#include <stdio.h>
#include <stdint.h>

enum G_range {
    accel_2G,
    accel_4G,
    accel_8G,
    accel_16G,
};
int main() {
    uint8_t G_range;
    uint8_t sonuc;

    G_range = accel_4G;

    if(G_range == accel_2G)
        sonuc += 0b00;
    else if (G_range == accel_4G)
       sonuc += 0b01;
    else if (G_range == accel_8G)
       sonuc += 0b10;
    else
       sonuc += 0b11;    


       
    






}