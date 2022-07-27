//the main function to test function array-sum
//
#include<iostream>
using namespace std;
int array_sum(int array[],int n)
{
    int sum =0;
    if(n<1)
    {
        return 0;
    }else{
        for (int i =0;i<n;i++)
        {
            sum +=array[i];
        }
    }
    return sum;
}

int main (void)
{
    int size_of_array =0;
    cout<<"enter the length of array: ";
    cin>>size_of_array;
    int array[size_of_array] ={0};
    for (int i =0;i<size_of_array;i++)
    {
        cout<<"enter the "<<i<<"number of the array: ";
        cin>>array[i];
    }
    int result =0;
    result =array_sum(array,size_of_array);
    cout<<result;
    return 0;
}