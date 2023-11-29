#include <iostream>
#include <limits>
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
    if (n < 1 || n > 200)
    {
        std::cout << "\nOUT IF RNG";
        return;
    }
    x = n % 100;
    if (x == 0 || x == 5 || x == 6 || x == 7 || x == 8 || x == 11 || x == 12 || x == 13)
    {
        std::cout << "\n ЕМУ" << n << "лет";
    }
    else if (x == 1)
    {
        std::cout << "\n ЕМУ" << n << "год";
    }
    else
    {
        std::cout << "\n ЕМУ" << n << "года";
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
    //program33();
    //program34();
    //program35();
    //program36();
    //program37();
    //program38();
    //program39();
    //program40();


    std::cout << "\nOne more? (1 - yes, 0 - no): ";
    std::cin >> answer;

    if (answer)
    {
        main();
    }
    return 0;
}