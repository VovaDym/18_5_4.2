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
