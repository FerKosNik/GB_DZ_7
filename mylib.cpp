#include <iostream>

namespace MySpace
{
	
	void PushArray(float arr[], int size)
	{
		for (int i = 0; i < size; ++i)
		{
			arr[i] = (std::rand()%100 * 0.01) - 0.5;
		}
	}

	void Show(float arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}

	void Couner(float* arr, int size)
	{
		int countPlus = 0, countMinus = 0;
		for (int i = 0; i < size; ++i)
		{
			(arr[i] >= 0) ? ++countPlus : ++countMinus;
		}
		std::cout << " Положительных чисел в массиве = " << countPlus << std::endl;
		std::cout << " Отрицательных чисел в массиве = " << countMinus << std::endl;

	}
}