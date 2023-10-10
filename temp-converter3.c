#include <stdio.h>
int main() {
    
    float temperature;
    char conversionType;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    printf("Enter the conversion type (F to C or C to F): ");
    scanf(" %c", &conversionType);
    
    float convertedTemperature;
    if (conversionType == 'F') {
        convertedTemperature = (temperature - 32) * 5 / 9;
    } else if (conversionType == 'C') {
        convertedTemperature = temperature * 9 / 5 + 32;
    } else {
        printf("Invalid conversion type\n");
        return 1;
    }
    
    printf("The converted temperature is: %.2f\n", convertedTemperature);
    return 0;
}