//Write a C++ function to sort an array of ten integer values in ascending order.

#include<iostream>

int i;

void sort(int size_array, int* ptr)
{
	int j;
	int upd;

	for (i = 0; i < size_array; i++)
    {
		for (j = i+1; j < size_array; j++)
        {
			if (*(ptr+j) < *(ptr+i))
			{
				upd = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = upd;
			}
		}
	}

	for (i = 0; i<size_array; i++)
    {
        printf("%d ", *(ptr+i));
    }
}

int main()
{
	int size_array = 5,arr[100];
	std::cout<<"Elements of the array: "<<"\n";
    for(i=0;i<size_array;i++)
    {
        std::cin>>arr[i];
    }

	sort(size_array, arr);

	return 0;
}
