#include <stdio.h>

int main() {
    char name[3] = {'J', 'C', 'F'};
    int age[3] = {18, 19, 18};
    float height[3] = {160.0, 158.0, 158.0};
    float weight[3] = {52.0, 78.0, 47.0};
    char grade[3] = {'A', 'A', 'A'};

    // แสดงตาราง
    printf("+-------+-----+-----------+-----------+------------+\n");
    printf("| Name | Age | Height(cm)| Weight(kg)| Grade Code |\n");
    printf("+-------+-----+-----------+-----------+------------+\n");
    for (int i = 0; i < 3; i++) {
    printf("| %-3c | %-3d | %-7.1f | %-7.1f | %-3c |\n",
    name[i], age[i], height[i], weight[i], grade[i]);
    }  
    printf("+-------+-----+-----------+-----------+------------+\n");

    return 0;
}