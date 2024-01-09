#include <iostream>
#include <limits>
#include <cmath>
#include <time.h>
#include <string>
#include <iomanip>

void program0()
{
    int a, b;
    std::cout <<"\n enter numbers a and b";
    std::cin >> a >> b;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a > b)
    {
        std::cout << "\n a>b";
    }
    else if (b > a)
    {
        std::cout << "\n" << b << ">" << a;
    }
    else
        std::cout << "\n" << a << ">" << b;
    return;
}
void program1()
{
    int a, b, c;
    std::cout << "\n enter numbers a b c";
    std::cin >> a >> b >> c;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a == b && b == c)
        std::cout << a << "=" << b << "=" << c;
    else if (a > b && a > c)
        std::cout << "\n max=" << a;
    else if (b >= c)
        std::cout << "\n max=" << b;
    else
        std::cout << "\n max=" << c;
    return;
}
void program2()
{
    int a, b, c, d, min1, min2;
    std::cout <<"\n enter numbers a b c d";
    std::cin >>a>>b>>c>>d;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a > b)
        min1 = b;
    else
        min1 = a;
    if (c > d)
        min2 = d;
    else
        min2 =c;
    if (min1 > min2)
        std::cout <<"\n max of min ="<< min1;
    else
        std::cout <<"\n max of min ="<< min2;
    return;
}
void program3() {
    int a;
    std::cout << "\n enter number a";
    std::cin >> a;
    if (std::cin.fail()) {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a % 2 == 0 && (a >= 10 && a < 100 || a <= -10 && a > -100))
        std::cout << "\n yes";
    else
        std::cout << "\n no";
    return;
}
void program6()
{
    int a, b, c1, c2, c3, c4;

    std::cout << "\nEnter a four-digit number: ";
    std::cin >> a;
    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "Enter a count: ";
    std::cin >> b;
    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (abs(a) < 1000 || abs(a) > 9999) // извлечение не производилось
    {
        std::cout << "You're stupid! \nYour number out of range!";

        return;
    }
    if (b > 9 || b < 0) // извлечение не производилось
    {
        std::cout << "\n Your digit isn't digit";

        return;
    }

    {c1 = abs(a) % 10;
        c2 = abs(a) / 10 % 10;
        c3 = abs(a) / 100 % 10;
        c4 = abs(a) / 1000; }

    if (c1 == b || c2 == b || c3 == b || c4 == b)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

}
void program7()
{
    int a, c1, c2, c3;

    std::cout << "\nEnter a three-digit number: ";
    std::cin >> a;
    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (abs(a) < 100 || abs(a) > 999) // извлечение не производилось
    {
        std::cout << "You're stupid! \nYour number out of range!";

        return;
    }

    {c1 = abs(a) % 10;
        c2 = abs(a) / 10 % 10;
        c3 = abs(a) / 100 % 10;}

    if ((c1 + c2 + c3) % 2 == 0)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

}
void program8()
{
    int a, c1, c2, c3, k;
    k = 0;

    std::cout << "\nEnter a three-digit number: ";
    std::cin >> a;
    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (abs(a) < 100 || abs(a) > 999) // извлечение не производилось
    {
        std::cout << "You're stupid! \nYour number out of range!";

        return;
    }

    {c1 = abs(a) % 10;
        c2 = abs(a) / 10 % 10;
        c3 = abs(a) / 100 % 10; }

    if (c1 == c2 && c2 == c3)
    {
        std::cout << "3";
    }
    else if (c1 == c2 || c1 == c3 || c3 == c2)
    {
        std::cout << "2";
    }
    else
    {
        std::cout << "0";
    }

}
void program9()
{
    int a, a1, c1, c2, c3, c4;
    std::cout << "enter a four-digit number";
    std::cin >>a;
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (abs(a) <1000 || abs(a) > 9999 )
    {
        std::cout << "your number out of range";
        return;
    }
    {   c1 = abs(a) % 10;
        c2 = abs(a) / 10 % 10;
        c3 = abs(a) / 100 % 10;
        c4 = abs(a) / 1000;
        a1 = c1 * 1000 + c2 * 100 + c3 * 10 + c4;
    }
    if (abs(a) == abs(a1))
        std::cout <<"yes";
    else
        std::cout <<"no";
}
void program10()
{
    int a, c1, c2, c3, c4;

    std::cout << "\nEnter a four-digit number: ";
    std::cin >> a;
    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (abs(a) < 1000 || abs(a) > 9999) // извлечение не производилось
    {
        std::cout << "\nYour number out of range!";

        return;
    }
    {
        c1 = abs(a) % 10;
        c2 = abs(a) / 10 % 10;
        c3 = abs(a) / 100 % 10;
        c4 = abs(a) / 1000;
    }
    if (c1 ==c2 && c2 == c3 && c3 == c4)
    {
        std::cout <<"yes constant";
    }
    else if (c1 >= c2 && c2 >=c3 && c3 >= c4)
    {
        if (c1 > c2 && c2 > c3 && c3 > c4)
        {
            std::cout <<"yes increasing";
        }
        else
            std::cout <<"yes non-decreasing";
    }
    else if (c1 <= c2 && c2 <= c3 && c3 <= c4)
    {
        if (c1 < c2 && c2 < c3 && c3 < c4)
        {
            std::cout <<"yes decreasing";
        }
        else
            std::cout <<"yes non-increasing";

    }
    else
        std::cout <<"not a sequence";
}
void program11()
{
    int a, b, c, x, y;
    std::cout <<"\nenter brick dimensions: ";
    std::cin >>a>>b>>c;
    std::cout <<"\nenter hole dimensions: ";
    std::cin >>x>>y;
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a <= 0 || b <= 0 || c <= 0 || x <= 0 || y <= 0)
    {
        std::cout << "side can't take a negative value or 0";
        return;
    }
    if ((a < x && b < y) || (a < y && b < x) || (b < x && c < y) || (b < y && c < x) || (a < x && c < y) || (a < y && c < x))
        std::cout <<"yes";
    else
        std::cout <<"no";
}
void program16()
{
    int h, m, s, x, y, z, h1, m1, s1, d;
    std::cout << "Enter: hours, minutes and seconds now (natural numbers or 0)\n";
    std::cin >> h >> m >> s;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if ((h < 0) || (m < 0) || (s < 0))
    {
        std::cout << "\n not natural numbers";
        return;
    }
    if ((h > 23) || (m > 59) || (s > 59))
    {
        std::cout << "\n this numbers can't be time";
        return;
    }
    std::cout << "Enter interval: hours, minutes and seconds (natural numbers or 0)\n";
    std::cin >> x >> y >> z;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if ((x < 0) || (y < 0) || (z < 0))
    {
        std::cout << "\n not natural numbers";
        return;
    }
    s1 = ( s + z ) % 60;
    m1 = (m + (s + z) / 60 + y) % 60;
    h1 = (h + (m + (( s + z ) / 60) + y) / 60 + x) % 24;
    d = (h + (m + y)/ 60 + x) / 24;
    std::cout << h1 << " hours " << m1 <<  " minutes " << s1 << " seconds ";
    if (d > 0)
        std::cout << " after " << d << " days ";
}
void program17()
{
    int h, m, s, h1, m1, s1, t1, t2, t3;
    std::cout << "Enter start time\n";
    std::cin >> h >> m >> s;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "Enter end time\n";
    std::cin >> h1 >> m1 >> s1;
    if (std::cin.fail())
    {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (h < 0 || m < 0 || s < 0 || h1 < 0 || m1 < 0 || s1 < 0)
    {
        std::cout << "Please, enter valid numbers.";
        return;
    }
    else if (h > 24 || m > 60 || s > 60 || h1 > 24 || m1 > 60 || s1 > 60)
    {
        std::cout << "Please, enter valid numbers.";
        return;
    }
    t1 = h * 3600 + m * 60 + s;
    t2 = h1 * 3600 + m1 * 60 + s1;
    if (t2 > t1)
    {
        t3 = t2 - t1;
        h = t3 / 3600;
        m = (t3 % 3600) / 60;
        s = (t3 % 3600) % 60;
        std::cout << "It's been " << h << " hour(s) " << m << " minute(s) " << s << " second(s)";
    }
    else if (t2 < t1)
    {
        t3 = 86400 - (t1 - t2);
        h = t3 / 3600;
        m = t3 % 3600 / 60;
        s = t3 % 3600 % 60;
        std::cout << "It's been " << h << " hour(s) " << m << " minute(s) " << s << " second(s)";
    }
    else
    {
        std::cout << "\nOne full day has passed.";
    }
}
void program18()
{
    int length, number;
    std::cout << "\nEnter a number of UNIT 1 - km, 2 - m, 3 - dm, 4 - cm, 5 - mm\n";
    std::cin >> number;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (number < 1 || number > 5)
    {
        std::cout <<"\n OUT OF RNG";
        return;
    }
    std::cout << "\nEnter a length - natural number\n";
    std::cin >> length;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (length < 0)
    {
        std::cout << "\n not natural numbers";
        return;
    }
    switch (number)
    {
        case 1:{ std::cout <<"\n" << length << " km = " << length * 1000 << " m" ; break;}
        case 2:{ std::cout <<"\n" << length << " m = " << length << " m" ; break;}
        case 3:{ std::cout <<"\n" << length << " dm = " << length / 10 << " m" ; break;}
        case 4:{ std::cout <<"\n" << length << " cm = " << length / 100 << " m" ; break;}
        case 5:{ std::cout <<"\n" << length << " mm = " << length / 1000 << " m" ; break;}
    }
}
void program19()
{
    setlocale(LC_ALL, "RU");
    int n, x;
    std::cout << "\nEnter a Number 1-200\n";
    std::cin >> n;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (n % 100 >= 11 && n % 100 <= 14)
    {
        std::wcout << "emu " << n << " let\n";
        return;
    }
    x = n % 10;
    if (x == 0 || (x >= 5 && x <= 9))
    {
        std::wcout << "emu " << n << " let\n";
    } else if (x == 1)
    {
        std::wcout << "emu " << n << " god\n";
    } else
    {
        std::wcout << "emu " << n << " goda\n";
    }
}
void program20()
{
    int a, b;
    char c;
    double ans;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "Enter operation to proceed (+,-,/,*): ";
    std::cin >> c;
    if (c == '+')
    {
        ans = a + b;
        std::cout << a << " + " << b << " = " << ans;
    }
    else if (c == '-')
    {
        ans= a - b;
        std::cout << a << " - " << b << " = " << ans;
    }
    else if (c == '*')
    {
        ans = a * b;
        std::cout << a << " * " << b << " = " << ans;
    }
    else if (c == '/')
    {
        if (b == 0)
        {
            std::cout << "it cannot be divided by 0";
            return;
        }
        ans = double(a) / b;
        std::cout << a << " / " << b << " = " << ans;
    }
    else
    {
        std::cout << "Input error.";
        return;
    }
}
void program21()
{
    int a, k = 0;
    std::cout << "Enter your number: ";
    std::cin >> a;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    a = abs(a);
    do
    {
        k++;
        a = a / 10;
    }
    while (a > 0);
    std::cout << "Amount of digits in your number = " << k;
}
void program22()
{
    float s;
    int m = 0;
    double k, p;
    std::cout << "Enter starting fund = ";
    std::cin >> k;
    std::cout << "Enter monthly income in percentage: ";;
    std::cin >> p;
    std::cout << "Enter amount of money that you need: ";;
    std::cin >> s;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (k < 0 || p < 0 || s < 0 || s < k)
    {
        std::cout << "Enter positive numbers.";
        return;
    }
    while (k < s)
    {
        k = k + k * (p / 100);
        m++;
        std::cout << "\nSum in " << m << " month = " << k;
    }
    std::cout << "\nIn " << m << " month(s) you'll reach your goal.";
}
void program23()
{
    int prev = 0, curr, k = 0;
    do
    {
        std::cout << "Entering number, 0 = exit: ";
        std::cin >> curr;
        if (std::cin.fail())
        {
            std::cout << "\nInput error!!!";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if (prev * curr < 0)
        {
            k++;
        }
        prev = curr;
    } while (curr != 0);
    std::cout << "You changed sign " << k << " times";
}
void program24()
{
    float sum, x;
    double res;
    for (int i = 0; i < 3; ++i)
    {
        std::cout <<"\n" << res;
        sum = 0;
        for (int j = 0; j < 10; ++j)
        {
            x = rand();
            std::cout << x << " ";
            sum += x;
            res = sum / 10;
        }
        std::cout <<"\n" << res;
    }
}
void program25()
{
    int a, b, c, n;
    std::cout << "\nEnter natural number";
    std::cin >> n;
    if (std::cin.fail())
    {
        std::cout << "\nInput error!!!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (n <= 0)
    {
        std::cout << "not natural";
        return;
    }
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a + b + c < n)
        {
            std::cout << "\n" << i;
        }
    }
}
void program26()
{
    int a, b, c;
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a == b && a == c)
        {
            continue;
        }
        else
        {
            std::cout << "\n" << i;
        }
    }
}
void program27()
{
    std::cout << "Enter chislitel and znamenatel': ";
    int a, b;
    std::cin >> a >> b;
    if (a < 0 || b < 0)
    {
        std::cout << "Not natural numbers.";
        return;
    }
    if (b == 0)
    {
        std::cout << "znaminatel cant be 0";
        return;
    }
    int min = 0;
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    for (int i = min; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            std::cout << a << "/" << b << "=" << a / i << "/" << b / i;
            break;
        }
    }
}
void program28()
{
    std::cout << "Enter natural number: ";
    int a, x;
    std::cin >> a;
    if (a < 0)
    {
        std::cout << "Enter natural number.";
        return;
    }
    for (int i = 0; i <= 9; i++)
    {
        bool flag = true;
        x = a;
        while (x != 0)
        {
            if (x % 10 == i)
            {
                flag = false;
                break;
            }
            x = x / 10;
        }
        if (flag)
        {
            std::cout << "\n" << i;
        }
    }
}
void program29()
{
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <= 7; j++)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}
void program30()
{
    std::cout << "Enter your number: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (i + 1 <= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (i + 1 >= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < 2*n - 1; i++)
    {
        for (int j = 0; j < 2*n - 1; j++)
        {
            if (i + j < n - 1 || i + j >= 3 * n - 2 || j > i + n - 1 || i > j + n - 1)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}
void program31()
{
    int h, m, t1, t2, n, r, s1, s2, em, eh;
    std::cout << "Enter start hours: ";
    std::cin >> h;
    std::cout << "Enter start minutes: ";
    std::cin >> m;
    std::cout << "Enter time of one lecture: ";
    std::cin >> t1;
    std::cout << "Enter break time: ";
    std::cin >> t2;
    std::cout << "Enter amount of lessons: ";
    std::cin >> n;
    if (h < 0 || m < 0 || t1 < 0 || t2 < 0 || n < 0)
    {
        std::cout << "Input error.";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        r = (h * 60 + m) + (t1 * i) + (t2 * i);
        s1 = r;
        s2 = s1 + t1;
        eh = s2 / 60;
        em = s2 % 60;
        s1 = r / 60;
        s2 = r % 60;
        if (em < 10)
        {
            std::cout << i + 1 << "st lecture: " << s1 << ':' << s2 << " - " << eh << ":0" << em << '\n';
        }
        else if (s2 < 10)
        {
            std::cout << i + 1 << "st lecture: " << s1 << ":0" << s2 << " - " << eh << ':' << em << '\n';
        }
        else
        {
            std::cout << i + 1 << "st lecture: " << s1 << ':' << s2 << " - " << eh << ':' << em << '\n';
        }
    }
}
void program32()
{
    std::cout << "Enter your number: ";
    int n;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Number should be natural.";
        return;
    }
    for (int i = 2; i < n; i++)
    {
        bool flag = true;
        if (i != 2)
        {
            for (int j = i - 1; j >= 2; j--)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag == false)
            {
                continue;
            }
        }
        if (flag)
        {
            std::cout << i << '\n';
        }
    }
}
void program33()
{
    int n;
    double x, s = 0;
    std::cout << "Enter n: ";
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "not natural number";
        return;
    }
    std::cout << "Enter x: ";
    std::cin >> x;
    for (int i = 1; i < n + 1; i++)
    {
        long f = 1;
        for (int j = 1; j <= 2*i - 1; j++)
        {
            f *= j;
        }
        if (i % 2 != 0)
        {
            s += pow(x, (2 * n - 1)) / f;
        }
        else
        {
            s -= pow(x, (2 * n - 1)) / f;
        }
        std::cout << "s = " << s << '\n';
    }
}
void program34()
{
    double a, b, x, y, n;
    std::cout << "Enter amount of numbers in fibonacchi sequence: ";
    std::cin >> n;;
    if (n <= 0)
    {
        std::cout << "not natural number";
        return;
    }
    a = 1;
    b = 1;
    if (n == 2)
    {
        std::cout << a << '\n';
        std::cout << b;
    }
    else if (n == 1)
    {
        std::cout << a;
    }
    std::cout << a << '\n';
    std::cout << b << '\n';
    while (n != 2)
    {
        x = a + b;
        std::cout << x << '\n';
        b = x - b;
        a = x;
        n--;
    }
}
void program35()
{
    int n = rand() % 1000 + 1;
    bool flag = false;
    std::cout << "try to guest a random number 1 - 1000 " << '\n';
    for (int i = 0; i < 10; i++)
    {
        int a;
        std::cin >> a;
        if (a == n)
        {
            std::cout << "you guessed the number, it is " << n << '\n';
            flag = true;
            break;
        }
        if (a != n)
        {
            if (a < n)
            {
                std::cout << "you didn't guess, the hidden number is bigger than yours, " << 10 - (i + 1) << " tries left!" << '\n';
            }
            if (a > n)
            {
                std::cout << "you didn't guess, the hidden number is lower than yours, " << 10 - (i + 1) << " tries left!" << '\n';
            }
        }
    }
    if (flag == false)
    {
        std::cout << "lose";
    }
}
void program36()
{
    srand((int)time(NULL));
    int k = 0;
    std::cout << " solve the examples from the multiplication table " << '\n';
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 10; i++)
    {
        int n = rand() % 10 + 1;
        int r = rand() % 10 + 1;
        std::cout << n << '*' << r << " = ?" << '\n';
        int a;
        std::cin >> a;
        if (a == n * r)
        {
            k++;
        }
    }
    if (k == 10)
    {
        std::cout << "Perfect" << '\n';
    }
    else if (k == 9)
    {
        std::cout << "Good" << '\n';
    }
    else if (k > 7)
    {
        std::cout << "Norm" << '\n';
    }
    else
    {
        std::cout << "Fail" << '\n';
    }
    end = clock();
    double dblTime = ((double)(end - start)) / CLOCKS_PER_SEC;
    std::cout << "amount of correct answers: " << k << '\n';
    std::cout << "time taken: " << dblTime;
}
void program37()
{
    int a;
    std::cout << "Enter arabic number (1 - 3999): ";
    std::cin >> a;
    if (a >= 3999 || a <= 0)
    {
        std::cout << "your number is out of rng";
        return;
    }
    std::string ans;
    std::string I[] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };
    std::string X[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    std::string C[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    std::string M[] = { "","M","MM","MMM" };
    ans = M[a / 1000] + C[(a % 1000) / 100] + X[(a % 100) / 10] + I[(a % 10)];
    std::cout << ans;
}
void program38()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i * j < 10)
            {
                std::cout << " " << i * j << "  ";
            }
            else
            {
                std::cout << i * j << "  ";
            }
        }
        std::cout << "\n";
    }
}
void program39()
{
    std::cout << "Enter natural number: ";
    int k;
    std::cin >> k;
    if (k <= 0)
    {
        std::cout << "Not natural number";
        return;
    }
    int miles = 0;
    std::cout << "|  Miles  |  Km  |";
    for (int i = 1; i <= k; i++)
    {
        if (i / 1.6093 < miles)
            std::cout << std::setprecision(4) << "\n |" << std::setw(9) << i / 1.6093 << "|"<< std::setw(6) << i << "|";
        else {
            std::cout << std::setprecision(4) << "\n |" << std::setw(9) << miles << "|" << std::setw(6) << miles * 1.6093 << "|";
            if (i <= k)
            {
                std::cout << std::setprecision(4) << "\n |" << std::setw(9) << i / 1.6093 << "|" << std::setw(6) << i << "|";
                miles++;
            }
        }
    }
    std::cout << "\n";
}


int main()
{
    bool answer;
    //program0();
    //program1();
    //program2();
    //program3();
    //program6();
    //program7();
    //program8();
    //program9();
    //program10();
    //program11();
    //program16();
    //program17();
    //program18();
    //program19();
    //program20();
    //program21();
    //program22();
    //program23();
    //program24();
    //program25();
    //program26();
    //program27();
    //program28();
    //program29();
    //program30();
    //program31();
    //program32();
    //program33();
    //program34();
    //program35();
    //program36();
    //program37();
    //program38();
    program39();


    std::cout << "\nOne more? (1 - yes, 0 - no): ";
    std::cin >> answer;

    if (answer)
    {
        main();
    }
    return 0;
}