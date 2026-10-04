#include <stdio.h>
#include <string.h>
int main() {
    int count = 0;
    int counter = 0;
    char PIP[] = "Змислий Юрій Мирославович";
    int k = strlen(PIP);
    for (int i = 0; i < k; i++) {
        if (PIP[i] == 'а' || PIP[i] == 'А') {
            count++;
        }
    }

    for (int i = 9; i <= 12; i++) {
        if (PIP[i] == 'о' || PIP[i] == 'О') {
            counter++;
        }
    }
    printf("Кількість букв 'а' в ПІБ:", count);
    printf("Кількість букв 'о' в імені:", counter);
    return 0;
}