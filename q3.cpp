// Write a C++ program (using function) to sort 10 integer values.

#include<iostream>

int i, j, size_array=10, arr[100], temp;

void sort(int size_array, int arr[])
{
    for(i=0; i<size_array; i++)
    {
        for(j=i+1; j<size_array; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{

    std::cout<<"Elements of the array: "<<"\n";
    for(i=0;i<size_array;i++)
    {
        std::cin>>arr[i];
    }

    sort(size_array, arr);

    std::cout<<"Sorted 10 Integer Values of an Array is :"<<"\n";
	for(i=0;i<size_array;i++)
    {
        std::cout<<arr[i]<<"\n";
	};

    return 0;
}
