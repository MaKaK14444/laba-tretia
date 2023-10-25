#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "\n[+] Программа лабораторных" << endl;
    cout << "\n[*] Введите номер задания" << endl;
    cout << "\n[1] - Меры длины." << endl;
    cout << "\n[2] - Сберкасса." << endl;
    cout << "\n[3] - Вычесления." << endl;
    cout << "\n[4] - Беспрерывный ввод ." << endl;
    cout << "\n[5] - Геометрия." << endl;
    int weight = 0;
    int n;
    int i = 0;
    int suma = 0;
    int number = 0;

    int variant;
    cin >> variant;

    switch (variant)
    {
    case 1:
    {
        int a;
        int varik;
        cout << "Выберите что вы хотите переводить" << endl;
        cout << "\n[1] -  Cаженей в метры." << endl;
        cout << "\n[2] - из дюймов в сантиметры." << endl;
        cout << "\n[3] - футов в метры." << endl;
        cout << "\n[4] - драхм в граммы ." << endl;
        cout << "\n[5] - унций в граммы." << endl;
        cout << "\n[6] - фунтов в килограммы." << endl;
        cout << "\n[7] - аршинов в метры." << endl;
        cout << "\n[8] - золотников в граммы." << endl;
        cout << "\n[9] - дюймое в миллиметры ." << endl;
        cin >> varik;
        switch (varik) {
            double sazhen, inch, foot, drachm, ounce, pound, arshin, zolotnik, duim;
            double meter;
        case 1:
            cout << "Введите значение саженей для перевода: ";
            cin >> sazhen;
            meter = sazhen * 2.1366;
            cout << sazhen << " сажень = " << meter << " метр" << endl;
        case 2:
            cout << "Введите значение дюймов для перевода: ";
            cin >> inch;
            double centimeter = inch * 2.5;
            cout << inch << " дюйм = " << centimeter << " сантиметр" << endl;
        case 3:
            cout << "Введите значение футов для перевода: ";
            cin >> foot;
            meter = foot * 0.3048;
            cout << foot << " фут = " << meter << " метр" << endl;
        case 4:
            cout << "Введите значение драхм для перевода: ";
            cin >> drachm;
            double gram = drachm * 3.7325;
            cout << drachm << " драхм = " << gram << " грамм" << endl;
        case 5:
            cout << "Введите значение унций для перевода: ";
            cin >> ounce;
            gram = ounce * 29.86;
            cout << ounce << " унция = " << gram << " грамм" << endl;
        case 6:
            cout << "Введите значение фунтов для перевода: ";
            cin >> pound;
            double kilogram = pound * 0.40951;
            cout << pound << " фунт = " << kilogram << " килограмм" << endl;
        case 7:
            cout << "Введите значение аршинов для перевода: ";
            cin >> arshin;
            meter = arshin * 0.7112;
            cout << arshin << " аршин = " << meter << " метр" << endl;
        case 8:
            cout << "Введите значение золотников для перевода: ";
            cin >> zolotnik;
            gram = zolotnik * 4.2657;
            cout << zolotnik << " золотник = " << gram << " грамм" << endl;
        case 9:
            cout << "Введите значение дюймове для перевода: ";
            cin >> duim;
            double millimeter = duim * 25.3995;
            cout << duim << " дюйм = " << millimeter << " миллиметр" << endl;
            return 0;
        }
        return 0;
    case 2:

        float x, v, s;
        cout << "\n[||] Скок положил: ";
        cin >> s;
        cout << "\n[||]Скока ждать будешь?????: ";
        cin >> n;
        x = s * 3 / 100;
        v = s + x * n;
        cout << "\n[||]Сумма через " << n << " let: " << v << endl;

        return 0;
    case 3:

        const int n = 10;
        long long u = 1;
        for (int i = 1; i <= n; i++)
            u *= (i * (i + 1)) / 2;
        cout << u << endl;

        return 0;
    case 4:


        cout << "\n[+]Число введи да (0 - это выход): ";

        do {
            cout << "\n число " << i + 1 << "=";
            cin >> number;

            if (number) {
                i++;
                suma += number;
            }
        } while (number);

        cout << "\n[]Кол-во введенных чисел да:" << i + 1 << endl;
        cout << "\n[]Общая сумма да:" << suma << endl;
        cout << "\n[]Среднее арифметическое да:" << suma / (i + 1) << endl;
        return 0;

    case 5:
        int height;
        cout << "Введите высоту треугольника и трапеции: ";
        cin >> height;

        // Равнобедренный треугольник
        cout << "Равнобедренный треугольник:\n";
        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= height - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }

        // Равнобедренная трапеция
        cout << "\nРавнобедренная трапеция:\n";
        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= height - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= height; j++) {
                cout << " ";
            }
            for (int j = 1; j <= height; j++) {
                cout << "*";
            }
            cout << endl;
        }

        return 0;
    }
    }
}