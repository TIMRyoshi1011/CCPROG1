#include <stdio.h>
#define PI 3.141593

float convertInchesToMeters(float h) {
    return h * 0.0254;
}

float convertPoundsToKg(float w) {
    return w * 0.453592;
}

float getBMI(float h, float w) {
    float nh, nw;
    nh = convertInchesToMeters(h);
    nw = convertPoundsToKg(w);

    return nw / (nh * nh);
}

int main() {
    
    float h, w;

    printf("Enter Height (in Inches): ");
    scanf("%f", &h);

    printf("Enter Weight (in Pounds): ");
    scanf("%f", &w);

    printf("\n");
    printf("BMI value = %.2fkg/m^2", getBMI(h, w));
    
    return 0;
}