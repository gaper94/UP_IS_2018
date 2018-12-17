# Примерни задачи за контролно 1

## Задача 1
Да се напише булев израз, който има стойност "истина" когато е изпълнено следното условие:

* Реалното число х принадлежи на дефиниционното множество на следнoтo неравенство:

       (x^2 - 16) / (x-2)(x-8) > 0	
* По-голямото от две числа дели квaдрата на по-малкото

`Пример:`

       Число да се дели едновременно на 3 и на 5:
       int number = 5;
       bool expression = (number % 3 == 0) && (number % 5 == 0);

## Задача 2

Да се напише булев израз, който определя дали точка с дадени координати
с цели числа `x` и `y` лежи в кръга описан от окръжността  с център (5, 5) и радиус 5.

## Задача 3
Напишете програма, която определя дали дадено въведено число е перфектно. 
Едно естествено число наричаме перфектно, ако е равно на сумата на положителните му делители, по-малки от него.

## Задача 4
Да се напише програма, която по въведени три числа(ден, месец и година)
извежда на екрана дали датата е валидна или не. Ако е валидна да изпечата
предишната дата. Внимавайте с високосните години!

`Пример:`

       1 3 2016 => Валидна дата. Предишната дата е 29 2 2016

## Задача 5
В един горещ летен ден Петьо и неговият приятел Ваньо решили да си купят
една диня. Те избрали най-голямата и най-сочната според тях. След това динята
била претеглена и везната показала, че тя тежи `W` килограма. Приятелите се
втурнали към вкъщи, тъй като били много жадни, и решили да си разделят
динята, но се сблъскали със сериозен проблем.
Петьо и Ваньо са големи фенове на четните числа, затова искат да си разделят на
динята по такъв начин, че всяка от двете части  да тежи четен брой килограми, 
като двамата приятели не държат двете части да тежат поравно.. Момчетата са
изключително уморени и искат да започнат с яденето на динята колкото е
възможно по-скоро, затова ви  молят да им помогнете да разберат дали могат да я
разделят на две части, всяка от които да тежи четен брой килограми  по начина, 
по който те искат. Необходимо е само всеки да получи парче с положително тегло,
тоест е недупустимо единствено единият от тях да вземе цялата диня, а другият – 
нищо. Всички останали разделяния на динята, така че двете парчета да тежат
четен брой килограми, са допустими.
Като вход за програмата получаваме цяло число `w (1    ≤ w    ≤ 100)` – теглото на
динята в килограми. Изходът трябва да е YES или NO, в зависимост от това дали
динята може да се раздели по желания начин.

`Пример:`

Вход: 8

Изход: YES

Вход: 5

Изход: NO

## Задача 6
Напишете програма, която по въведени три числа s, e, n:
* Намира всички(ако са по-малко от n) или първите n на брой прости числа в интервала [ s, e )
* Намира всички(ако са по-малко от n) или последните n на брой числа в интервала (s, e], които са палиндроми
## Задача 7

Да се напише програма, която прочита цяло число и още едно
цяло число, което е едноцифрено и преобразува първото
по следния начин – към всяка цифра от първото число се прибавя даденото
едноцифрено число. И понеже искаме да заменим всяка цифра от началното
число с друга цифра, то ако за някоя позиция след събирането получим
двуцифрено число, то определяме коя цифра да запишем на съответната позиция
по следния начин:

* Aко сумата е 10, записваме 0

* Aко сумата е 11, записваме 1 и т. н.

`Пример:`

12975     4 =>   56319 

## Задача 8
В една кино зала столовете са наредени в правоъгълна форма в r реда и c колони. 
Има четири вида прожекции с билети на различни цени:

* Предпремиерна прожекция, цена на един билет 18.00 лв.
* Премиерна прожекция, цена на един билет 12.00 лв.
* Стандартна прожекция, цена на един билет 8.00 лв.
* Прожекция за деца, ученици и студенти, цена на един билет 5.50 лв.

Иванчо има за задачка да напише програма, която изчислява общите приходи
от билети когато залата е запълнена на 1/3, 1/2 и е изцяло пълна. Помогнете
на Иванчо да напише програма, коята да приема следните параматери от потребителят.

* t - Тип на прожекцията в залата: 1 за предпремиерна, 
       2 за премиерна, 3 за стандартна, 4 за прожекция за деца, ученици и студенти
* r - Брой редове в залата   
* c - Брой места на ред

`Пример:`

      1
      10
      12
        = > Пълна зала: 2160.00 лв.
            Запълнена на 1/3: 720.00 лв.
            Запълнена на 1/2: 1080.00 лв.