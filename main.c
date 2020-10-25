#include <stdio.h>

int factorial(int n) {
    if ( n == 0 ) // проверка если n = 0
        return 1; // возвращает 1
    else
        return factorial(n - 1) * n; // рекурсия, вычисление факториала n
}

void main() {
    int n, nf; //инициализация переменных
    printf("Enter n: "); // вывод текста
    scanf("%d", &n); // ввод n
    if ( n >= 0 ) { //проверка если n >= 0
        nf = factorial(n); // вычисление факториала
        printf("n! = %d\n", nf); // вывод текста и факториала
    } else
        printf("Invalid number"); // вывод текста при неверном введенном n

}