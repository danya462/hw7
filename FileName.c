#include <stdio.h>
#include <locale.h> 
#include <math.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    float length, width, height;

    
    float r_length, r_width;

    
    printf("������� ����� ������� (� ������):");
    scanf("%f", &length);

    printf("������� ������ ������� (� ������): ");
    scanf("%f", &width);

    printf("������� ������ ������� (� ������): ");
    scanf("%f", &height);

  
    printf("������� ����� ������ ����� (� ������): ");
    scanf("%f", &r_length);

    printf("������� ������ ������ ����� (� ������): ");
    scanf("%f", &r_width);

    
    float Sw = 2 * height * (length + width); 

 
    float Sr = r_length * r_width;

  
    int k = (int)(Sw / Sr);

    if (Sw - (k * Sr) > 0) 
    {
        k++;
    }

    
    printf("���������� ������� �����: %d\n", k);

    return 0;
}