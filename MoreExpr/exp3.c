#include <stdio.h>
int main() {
    // Trapezium sides
    float a = 5.0, b = 5.0, h = 4.0;
    // Rhombus diagonals
    float d1 = 8.0, d2 = 6.0;
    // Parallelogram base and height
    float base = 10.0, height = 3.0;
    // Cube side length
    float side = 6.0;
    float areaTrapezium = 0.5 * (a + b) * h;
    float areaRhombus = 0.5 * d1 * d2;
    float areaParallelogram = base * height;
    float surfaceAreaCube = 6 * side * side;
    printf("Area of Trapezium: %.2f\n", areaTrapezium);
    printf("Area of Rhombus: %.2f\n", areaRhombus);
    printf("Area of Parallelogram: %.2f\n", areaParallelogram);
    printf("Surface Area of Cube: %.2f\n", surfaceAreaCube);
    return 0;
}