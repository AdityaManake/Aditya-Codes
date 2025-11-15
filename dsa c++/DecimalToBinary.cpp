#include<iostream>
using namespace std;
void convertToBinary(int n)
{
    if (n == 0) {
        cout << 0;
        return;
    }
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        ans += rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout << ans << " ";
}
int main()
{
    int n;
    cout << "Binary representation: ";
    for(int i=1;i<=10;i++)
    {
        convertToBinary(i);
    }
    return 0;
}