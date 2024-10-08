#include <stdio.h>
#include <locale.h> 
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    float length, width, height;

    
    float r_length, r_width;

    
    printf("¬ведите длину комнаты (в метрах):");
    scanf("%f", &length);

    printf("¬ведите ширину комнаты (в метрах): ");
    scanf("%f", &width);

    printf("¬ведите высоту комнаты (в метрах): ");
    scanf("%f", &height);

  
    printf("¬ведите длину рулона обоев (в метрах): ");
    scanf("%f", &r_length);

    printf("¬ведите ширину рулона обоев (в метрах): ");
    scanf("%f", &r_width);

    
    float Sw = 2 * height * (length + width); 

 
    float Sr = r_length * r_width;

  
    int k = (int)(Sw / Sr);

    if (Sw - (k * Sr) > 0) 
    {
        k++;
    }

    
    printf("Ќеобходимо рулонов обоев: %d\n", k);

    return 0;
}