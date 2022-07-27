//the function aims to call function-1-2
#include<iostream>
#include<iomanip>
using namespace std;

double array_mean(int array[], int n)
{
    double ave_result =0.0;
    double sum_of_array_ele =0;
    double less_than_1_returned =0.0;

    if (n<1)
    {
        return less_than_1_returned;
    }else{
        for (int i =0;i<n;i++)
        {
            sum_of_array_ele+=array[i];
        }
    }
    ave_result =sum_of_array_ele/n;
    return ave_result;
}

int main (void)
{

    //get array form users
    int size_of_array =0;
    cout<<"enter the length of array: ";
    cin>>size_of_array;
    int array[size_of_array] ={0};
    for (int i =0;i<size_of_array;i++)
    {
        cout<<"enter the "<<i<<"number of the array: ";
        cin>>array[i];
    }
    //call function
    double result =0.0;
    result =array_mean(array,size_of_array);
    cout<<"the result is "<<fixed<<setprecision(1)<<result<<endl;
    return 0;
}
