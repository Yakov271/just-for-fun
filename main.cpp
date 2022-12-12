#include "RegularPoligon.h"
#include <thread>

void ex() {
    while (true) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            // left key is pressed: move our character
            exit(0);
        }
    }
}



int main()
{
    thread th(ex);
    while (true) {
        
        cout << "Введите количество углов правильного многоугольника : ";
        int n,R,G,B;
        cin >> n;
        cout << "Введите значение R от 0 до 255 : ";
        cin >> R;
        cout << "Введите значение G от 0 до 255 : ";
        cin >> G;
        cout << "Введите значение B от 0 до 255 : ";
        cin >> B;
        truepicture a(n, R,G,B);
        a.showpicture();
        
    }
    th.join();
}
