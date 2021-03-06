## Упражнение 3 - Условни оператори 2

# Задача 1
Напишете програма, която по въведена десетична цифра и език, отпечатва съответната цифра на избраният естествен език

 **Възможните езици са следните:**
 ```
 Френски   => f ['un', 'deux', 'trois', 'quatre', 'cinq', 'six', 'sept', 'huit', 'neuf']
 Английски => e ['one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
 Немски    => d ['eins', 'zwei', 'drei', 'vier', 'fünf', 'sechs', 'sieben', 'acht', 'neun']
 ```
 
 `Пример:`
 
 ```
1 f => "Un"
2 e => "Two"
 ```
 
 [Решение](Task1.cpp)
 
 # Задача 2
 Напиеште програма, която по въведена буква от английската азбука ви отпечатва дали тя е гласна или съгласна
 
Гласни букви:   `[a, e, i, o, u]`

Съгласни букви: `[b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, x, z]`

`Пример:`

`'а' => "Гласна"`

[Решение](Task2.cpp)

 # Задача 3
 
 Помогнете на разпределящата шапка като напишете програма, която да разпределя учениците в съответния дом в зависимост от отговорите им (използвайки следната таблица):
 ```
     -----------------------------------------------------------------------------------------------
   | Любопитен ли сте ? |Обичате ли неприятностите? | Страх ли ви е от паяци?|         Дом         |
   |         0          |              0            |            0           |      Слидерин       |
   |         0          |              0            |            1           |      Рейвънклоу     |
   |         0          |              1            |            0           |      Хафълпаф       |
   |         0          |              1            |            1           |      Слидерин       |
   |         1          |              0            |            0           |      Грифиндор      |
   |         1          |              0            |            1           |      Хафълпаф       |
   |         1          |              1            |            0           |      Грифиндор      |
   |         1          |              1            |            1           |      Рейвънклоу     |
    -----------------------------------------------------------------------------------------------
```
 `Пример:`
 
 ```
  Любопитен ли сте ? 1
  Обичате ли неприятностите? 1
  Страх ли ви е от паяци? 0 
	                             => "Грифиндор"
 ```
 
 [Решение](Task3.cpp)
 
  # Задача 4
  Оправете синтактичните и логическите грешки в [програмата](SwitchErrors.cpp)
  
  [Решение](Task4.cpp)
  
  ## Бонус
  Двoичната бройна система с 0 и 1 е добра, но брoйна система само от 0 е по-добра. Напиешете програма която приема като вход изречение и го изпечатва кодирано по следният метод.
  
   `Правила на кодирането:`

* Входът се състои от ASCII символи (7-бита)
* Кодираното съобщение се състои от блокчета нули
* Един блок се разделя от друг със един празен символ
* Два последователни блока се използват за да представят серия от битове с еднаква стойност(само 1 или 0)
  * Първи блок: състои се винаги само от 0 или 00. Ако е 0, тогава серияте съдържа единици, ако е 00 съдържа нули
  * Втори блок: броят нули в този блок представлява броят на битовете в тази серия
  
`Пример:`

Буквата 'C' се представя бинарно като 1000011(67 десетично), кодирано се представя така:
   
* '0 0' (първата серия се състои от само една 1)
* '00 0000' (втората серия се състои от четири 0)
* '0 00' (третата серия се състои от две 1)
	
`Буквата 'C' се кодира по следният начин: 0 0 00 0000 0 00`

[Решение](Bonus.cpp)
