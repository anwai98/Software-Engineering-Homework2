#include<iostream>

int i;

void accept_values(int* arr)
{
	std::cout<<"Enter the five integer values: "<<"\n";
	for(i=0;i<5;i++)
	{
		std::cin>>*(arr+i);
	}

	std::cout<<"The values of the five integers entered: "<<"\n";
	for(i=0;i<5;i++)
	{
		std::cout<<*(arr+i)<<" ";
	}
}

int main()
{
    int arr[100];

	accept_values(arr);

    return 0;

}
