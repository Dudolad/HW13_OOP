#include <iostream>
#include <windows.h>

namespace A //простір імен А
{
    namespace B //простір імен В
    {

        void show()
        {
            using std::cout;
            using std::endl;
            cout << "Функція з простору імен A::B" << endl;
        }
    }
}


using namespace std;

void show() //глобальна функція з таким самим ім'ям
{
    cout << "Глобальна функція" << endl; 
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    show();
    A::B::show();

    using namespace A::B;
    //show(); //Помилка: виникає неоднозначність, тому що у поточній області видимості
    //є дві функції з однаковим ім’ям show — глобальна та A::B::show(), 
    // і компілятор не може визначити, яку саме викликати.
    // Щоб виправити, потрібно явно вказати простір імен: A::B::show() або ::show().

    return 0;
}