#include <stdio.h> // เรียกใช้ไลบรารีมาตรฐานสำหรับการรับค่าและแสดงผล
#include <string.h> // ใช้สำหรับจัดการกับข้อมูลประเภท string

int main() {
    char name[30]; // ประกาศตัวแปร name เป็นอาเรย์ของ char ขนาด 30 เพื่อเก็บชื่อ
    int age; // ประกาศตัวแปร age เป็นจำนวนเต็ม เพื่อเก็บอายุ
    float height; // ประกาศตัวแปร height เป็นเลขทศนิยม เพื่อเก็บส่วนสูง

    char subject; // ประกาศตัวแปร subject เป็นตัวอักษร 1 ตัว เพื่อเก็บชื่อวิชา
    float grade; // ประกาศตัวแปร grade เป็นเลขทศนิยม เพื่อเก็บเกรดที่ได้
    char grade_letter; // ประกาศตัวแปร grade_letter เป็นตัวอักษร 1 ตัว เพื่อแทนเกรดแบบไม่มีเครื่องหมาย

    // รับข้อมูลจากผู้ใช้: บรรทัดที่ 1 - ชื่อ, อายุ, ส่วนสูง
    printf("Enter your name, age, and height: ");
    scanf("%s %d %f", name, &age, &height);

    // รับข้อมูลจากผู้ใช้: บรรทัดที่ 2 - ชื่อวิชา (1 ตัว), เกรดที่ได้ (ทศนิยม), ตัวอักษรเกรด (1 ตัว)
    printf("Enter subject initial, grade, and grade letter: ");
    scanf(" %c %f %c", &subject, &grade, &grade_letter);
    // มีช่องว่างหน้า %c เพื่อป้องกันปัญหา newline จากการกด Enter ค้างอยู่ใน buffer

    // แสดงผลข้อมูลส่วนบุคคล: ชื่อ (ตัวอักษรแรก), อายุ, ส่วนสูง (ทศนิยม 1 ตำแหน่ง)
    printf("Personal Info -> Name: %c, Age: %d, Height: %.1f\n", name[0], age, height);

    // แสดงผลข้อมูลผลการเรียน: ชื่อวิชา, เกรด, ตัวอักษรแทนเกรด
    printf("Grade Info -> Subject: %c, Grade: %.2f, Grade Letter: %c\n", subject, grade, grade_letter);

    return 0; // คืนค่า 0 เพื่อแสดงว่าโปรแกรมทำงานสำเร็จ
}