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

enum accel_G_range {
    accel_2G,
    accel_4G,
    accel_8G,
    accel_16G,
};
enum accel_Bandwitdth{
    accel_7_81Hz,
    accel_15_63Hz,
    accel_31_25Hz,
    accel_62_5Hz,
    accel_125Hz,
    accel_250Hz,
    accel_500Hz,
    accel_1000Hz,
};
enum accel_Operation_Mode{
    accel_normal,
    accel_suspend,
    accel_low_power_1,
    accel_standby,
    accel_low_power_2,
    accel_deep_suspend,
};
enum gyro_Range{
    gyro_2000dps,
    gyro_1000dps,
    gyro_500dps,
    gyro_250dps,
    gyro_125dps,
};
enum gyro_Bandwidth{
    gyro_523Hz,
    gyro_230Hz,
    gyro_116Hz,
    gyro_47Hz,
    gyro_23Hz,
    gyro_12Hz,
    gyro_64Hz,
    gyro_32Hz,    
};



int main() {
    uint8_t accel_G_range;
    uint8_t accel_Bandwitdth;
    uint8_t accel_Operation_Mode;
    uint8_t gyro_Range;
    uint8_t ACC_Config;
    uint8_t gyro_Bandwidth;
    uint8_t GYR_Config_0;
    uint8_t GYR_Config_1;



    accel_G_range = accel_4G;
    accel_Bandwitdth = accel_125Hz;
    accel_Operation_Mode = accel_standby;
    gyro_Range = gyro_250dps;
    gyro_Bandwidth = gyro_32Hz;

    if(accel_G_range == accel_2G)
        ACC_Config += 0b00;
    else if (accel_G_range == accel_4G)
       ACC_Config += 0b01;
    else if (accel_G_range == accel_8G)
       ACC_Config += 0b10;
    else
       ACC_Config += 0b11;    
    
    if(accel_Bandwitdth == accel_7_81Hz)
        ACC_Config += 0b00000;
    else if(accel_Bandwitdth == accel_15_63Hz)
        ACC_Config += 0b00100;
    else if(accel_Bandwitdth == accel_31_25Hz)
        ACC_Config += 0b01000;
    else if(accel_Bandwitdth == accel_62_5Hz)
        ACC_Config += 0b01100;
    else if(accel_Bandwitdth == accel_125Hz)
        ACC_Config += 0b10000;
    else if(accel_Bandwitdth == accel_250Hz)
        ACC_Config += 0b10100;
    else if(accel_Bandwitdth == accel_500Hz)
        ACC_Config += 0b11000;
    else if(accel_Bandwitdth == accel_1000Hz)
        ACC_Config += 0b11100;

    if(accel_Operation_Mode == accel_normal)
        ACC_Config += 0b00000000;
    else if(accel_Operation_Mode== accel_suspend)
        ACC_Config += 0b00100000;
    else if(accel_Operation_Mode == accel_low_power_1)
        ACC_Config += 0b01000000;
    else if(accel_Operation_Mode == accel_standby)
        ACC_Config += 0b01100000;
    else if(accel_Operation_Mode == accel_low_power_2)
        ACC_Config += 0b10000000;
    else if(accel_Operation_Mode == accel_deep_suspend)
        ACC_Config += 0b10100000;

    if(gyro_Range == gyro_2000dps)
        GYR_Config_0 += 0b000;
    else if(gyro_Range == gyro_1000dps)
        GYR_Config_0 += 0b001;
    else if(gyro_Range == gyro_500dps)
        GYR_Config_0 += 0b010;
    else if(gyro_Range == gyro_250dps)
        GYR_Config_0 += 0b011;
    else if(gyro_Range == gyro_125dps)
        GYR_Config_0 += 0b100;
    
    if (gyro_Bandwidth = gyro_523Hz)
        GYR_Config_0 += 0b000000;
    else if (gyro_Bandwidth = gyro_230Hz)
        GYR_Config_0 += 0b001000;
    else if (gyro_Bandwidth = gyro_116Hz)
        GYR_Config_0 += 0b010000;
    else if (gyro_Bandwidth = gyro_47Hz)
        GYR_Config_0 += 0b011000;
    else if (gyro_Bandwidth = gyro_23Hz)
        GYR_Config_0 += 0b100000;
    else if (gyro_Bandwidth = gyro_12Hz)
        GYR_Config_0 += 0b101000;
    else if (gyro_Bandwidth = gyro_64Hz)
        GYR_Config_0 += 0b110000;
    else if (gyro_Bandwidth = gyro_32Hz)
        GYR_Config_0 += 0b111000;    
    
    
    
    print_bit(ACC_Config);
    print_bit(GYR_Config_0);

       
    






}