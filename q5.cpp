#include<iostream>

int i;

int maximum_value(int a[], int b)
{
    int maximum_value = a[0];
    for(i=0; i<b; i++)
    {
        if(a[i]>maximum_value)
        {
            maximum_value = a[i];
        }
    }
    int* ptr_maximum_value = &maximum_value;
    return *ptr_maximum_value;
}

int main()
{
    int number_of_values;
    std::cout<<"Enter the number of data values:"<<"\n";
    std::cin>>number_of_values;
    int arr[number_of_values];
    for(i=0; i<number_of_values; i++)
    {
        std::cout<<"Enter value : "<<i+1<<" = ";
        std::cin>>arr[i];
    }
    std::cout<<"\n"<<"The maximum is = "<<maximum_value(arr, number_of_values);

    return 0;
}
