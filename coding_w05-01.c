#include <stdio.h>

int main() {
    // ประกาศตัวแปร name เป็นตัวอักษรภาษาอังกฤษ 1 ตัว (ตัวพิมพ์ใหญ่)
    char name = 'J';

    // ประกาศตัวแปร age เป็นจำนวนเต็ม กำหนดค่าอายุ = 18
    int age = 18;

    // ประกาศตัวแปร weight เป็นเลขทศนิยม (float) กำหนดค่าน้ำหนัก = 52.0
    float weight = 52.0;

    // แสดงผลทางหน้าจอบรรทัดแรก
    printf("Student %c is %d years old.\n", name, age);

    // แสดงผลทางหน้าจอบรรทัดที่สอง
    printf("His weight is %.1f kg.\n", weight);

    return 0; // คืนค่า 0 เพื่อบอกว่าการทำงานเสร็จสมบูรณ์
}