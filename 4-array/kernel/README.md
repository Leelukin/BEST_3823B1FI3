На вход программе подаётся матрица в виде одномерного массива и матрица поменьше, которая называется сворачивающим ядром, а также их размеры.
Вам необходимо пройтись сворачивающим ядром по матрице так, что бы от неё осталось лишь число.

Алгоритм свёртки: 

1- центр сворачивающей матрицы на первом шаге помещается в верхний левый угол матрицы. Числа сворачивающей матрицы перемножаются с числами исходной матрицы и складываются в новый массив. 
2 - сворачивающая матрица сдвигается вправо на единицу и снова считает перемножение элементов матриц и складывает их, помещая в следующий элемент нового массива.
3 - при достежении правой границы, сворачивающая матрица возвращается к левой границе и проходит по следующей строчку
4 - дойдя до левого нижнего угла, обход прекращается

Затем, процесс повторяется на сформированной матрице из результатов свёртки. Закончится процесс тогда, когда полученный массив не выродится в единственное число, которое и необходимо вернуть. Если в ходе свёртки получилось матрица меньшего размера чем сворачивающая матрица, то нужно вернуть сумму оставшихся элементов.