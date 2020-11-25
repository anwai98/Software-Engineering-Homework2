#include<iostream>

int i,j, size_triangle;

int pascal_triangle(int size_triangle)
{
    int arr[size_triangle][size_triangle];
    arr[0][0] = 1;
    std::cout<<"The Pascal Triangle is : "<<"\n";
    std::cout<<arr[0][0]<<"\n";
    for(i=0; i<size_triangle-1; i++)
    {
        arr[i+1][0] = 1;
        std::cout<<arr[i+1][0]<<"\t";
        for(j=0; j<i; j++)
        {
            arr[i+1][j+1] = arr[i][j]+arr[i][j+1];
            std::cout<<arr[i+1][j+1]<<"\t";
        }
        arr[i+1][i+1] = 1;
        std::cout<<arr[i+1][i+1]<<"\n";
    }
    return 0;
}

int main()
{
    std::cout<<"Enter the size of Pascal Triangle : "<<"\n";
    std::cin>>size_triangle;
    pascal_triangle(size_triangle);

    return 0;
}
