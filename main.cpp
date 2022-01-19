//Напишите рекурсивную функцию, которая принимает большое число n типа long long и переменную ans,
// а возвращает void.
// После завершения работы функции в переменной ans должно оказаться количество чётных цифр в записи числа n.

//Пример:

//int ans;

//evendigits(9 223 372 036 854 775 806, ans);

//ans == 10

//Пояснение: 9 223 372 036 854 775 806

#include <iostream>

void evenDigits(long long n,int& ans)
{
    int d;
    d = n % 10;
    n = n / 10;
    if(d % 2 == 0)
    {
        ++ans;
    }
    if(n == 0) return;
    evenDigits(n,ans);
}

int main() {
    int ans = 0;

    evenDigits(9223372036854775806,ans);

    std::cout << ans << std::endl;

    return 0;
}
