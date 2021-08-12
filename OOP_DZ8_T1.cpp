#include <iostream>
using namespace std;

// Отдельная функция деления
double div(double a, double b)
{
    // Если пользователь ввёл частное = 0, то выбрасываем исключение
    if (b == 0.0)
        throw "Can not division to zero"; // выбрасывается исключение типа const char*

    return a/b;
}

int main()
{
    cout << "Enter a divisible: ";
    double a;
    cin >> a;
    cout << "Enter a quotient: ";
    double b;
    cin >> b;

    try // ищем исключения, которые выбрасываются в блоке try, и отправляем их для обработки в блок(и) catch
    {
        double d = div(a, b);
        cout << "The division " << a << " to " << b << " is " << d << '\n';
    }
    catch (const char* exception) // обработка исключений типа const char*
    {
        cerr << "Error: " << exception << endl;
    }

    return 0;
}
