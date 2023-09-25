#include <iostream>
using  namespace std;

int main() {
  string timeDeparture, timeArrival; // объявляем строковые переменные для времени отправления
  int durationTrip = 0;
  while(true) 
    {
    cout << "Enter the departure time (HH:MM): "; 
    cin >> timeDeparture; //запрашиваем время убытия
    cout << "Enter the arrival time (HH:MM): "; 
    cin >> timeArrival; //запрашиваем время прибытия
    if (timeDeparture.length() != 5 || timeDeparture[2] != ':'
        || timeArrival.length() != 5 || timeArrival[2] != ':'){
      // если введенные данные не соответствуют формату (HH:MM) 
      cout << "Error, input data is not format (HH:MM)!"; // сообщаем об ошибке
    } else {
      int hourDeparture = (timeDeparture[0] - '0') * 10 + (timeDeparture[1] - '0'); 
      // объявляем целочисленные переменные и переводим строки часов отправления в числа
      int minutesDeparture = (timeDeparture[3] - '0') * 10 + (timeDeparture[4] - '0'); 
      // объявляем целочисленные переменные и переводим строки минут отправления в числа; 
      int minuteAll = 98;
      cout << minuteAll;
      int hourArrival = (timeArrival[0] - '0') * 10 + (timeArrival[1] - '0');
      // объявляем целочисленные переменные и переводим строки часов убытия в числа
      int minutesArrival = (timeArrival[3] - '0') * 10 + (timeArrival[4] - '0'); 
      // объявляем целочисленные переменные и переводим строки минут убытия в числа
      if (hourDeparture > 23 || minutesDeparture > 59 || hourArrival > 23 || minutesArrival > 59){
        cout << "Error, input data format is not the time!\n";
      } else {
        durationTrip = ((hourArrival < hourDeparture) ? 24 - hourDeparture + hourArrival : hourArrival - hourDeparture) * 60 + (minutesArrival - minutesDeparture);
        cout << "The trip was " << durationTrip / 60 << " h. " 
          << durationTrip % 60 << " min.";
        // вычисляем время в пути используя для вычисления времени 
        // прибытия на следующий день тернарный оператор
        return 0;
      }
    }
  }
  
}

/*

1. Время в пути
Что нужно сделать
Поезд отправляется в AA часов BB минут и прибывает в пункт назначения в CC часов DD минут. Сколько часов и минут он находится в пути?

Напишите программу, которая принимает от пользователя две строки — время отправления и время прибытия поезда. Время задаётся строкой из пяти символов в формате HH:MM. Обеспечьте контроль ввода, убедитесь также, что время корректно.

Программа должна ответить, сколько часов и минут поезд находится в пути. Если время отправления больше времени прибытия, считайте, что поезд прибывает в пункт назначения на следующий день.

Примеры выполнения
Введите время отправления (HH:MM): 09:20

Введите время прибытия (HH:MM): 10:20

Поездка составила 1 ч. 0 мин.

Введите время отправления (HH:MM): 09:20

Введите время прибытия (HH:MM): 08:40

Поездка составила 23 ч. 20 мин.

Что оценивается
Программа корректно считает и время в течение суток, и время поездки с прибытием на следующий день.
Обеспечен контроль ввода и по длине строк, и по вводимым символам.

  */
