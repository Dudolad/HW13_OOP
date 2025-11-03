#include <iostream>

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

}