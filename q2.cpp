#include<iostream>

int i, j, arr[100];

int minimum(int arr[], int a)
{
    int minimum_value = arr[0];
    for(i=0; i<10; i++)
    {
        if(arr[i]<minimum_value)
        {
            minimum_value = arr[i];
        }
        else
        {

        }
    }
    return minimum_value;
}

int greatest(int arr[], int a)
{
    int greatest_value = arr[0];
    for(i=0; i<10; i++)
    {
        if(arr[i]>greatest_value)
        {
            greatest_value = arr[i];
        }
        else
        {

        }
    }
    return greatest_value;
}

int mode(int arr[], int a)
{
    int mode=0;
    int mode_frequency=0;
    for(i=0;i<10;i++)
    {
        int mode_i = arr[i];
        int mode_i_frequency = 0;
        for(j=0;j<10;j++)
            {
                if(arr[i]==arr[j])
                {
                    mode_i_frequency++;
                }
                else
                {

                }
                if(mode_i_frequency>mode_frequency)
                {
                    mode = mode_i;
                    mode_frequency = mode_i_frequency;
                }
                else
                {

                }
            }
    }
    return mode;
}

int main()
{
    int arr[10];
    std::cout<<"Enter the ten integer values: "<<"\n";
    for(i=0; i<10; i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"The Smallest Value: "<<minimum(arr, 10)<<"\n";
    std::cout<<"The Greatest Value: "<<greatest(arr, 10)<<"\n";
    std::cout<<"The Value Occuring the Most: "<<mode(arr, 10)<<"\n";

    return 0;
}
