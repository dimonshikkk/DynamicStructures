# DynamicStructures
Лабораторные работы по динамическим структурам
Лабороторные по динамическим структурам

Стек – структура данных, функционирующая по принципу LIFO (last in – first out, «последним пришёл – первым вышел»). Добавление и удаление из стека возможно только с конца последовательности. Файлы - stack.h, stack.cpp, stack_main.cpp

Очередь - структура данных, функционирующая по принципу FIFO first in – first out, «первым пришёл – первым вышел»). Позволяет добавлять элементы лишь в конец списка, и извлекать их из его начала. Стандартный набор операций совпадает с тем, что используется при обработке стеков: 1)добавление элемента; 2)удаление элемента; 3)чтение первого элемента. Файлы - queue.h, queue.cpp, queue_main.cpp

Линейный однонаправленный список – структура данных, представляющая собой последовательность элементов. Ссылка в каждом узле одна, она указывает на следующий узел в списке.

Стандартный набор операций:

1)создание первого элемента; 2)добавление в конец списка; 3)нахождение элемента по ключу; 4)добавление до и после ключа; 5)удаление элемента; 6)удаление элемента по ключу; 7)сортировка списка (не реализована).

Файлы - list.h, list.cpp, list_main.cpp

4.Бинарное дерево поиска - это двоичное дерево, для которого выполняются следующие дополнительные условия (свойства дерева поиска): -оба поддерева — левое и правое — являются двоичными деревьями поиска. -у всех узлов левого поддерева произвольного узла X значения ключей данных меньше нежели значение ключа данных самого узла X. -в то время, как значения ключей данных у всех узлов правого поддерева (того же узла X) больше, нежели значение ключа данных узла X.

Стандартный набор операций: 1)создание первого элемента; 2)поиск элемента; 3)нахождение минимума и максимума; 4)добавление элемента; 5)удаление элемента.

Файлы - bst.h, bst.cpp, bst_main.cpp
