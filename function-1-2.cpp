//the function aims to returns the average of all elements in an integer array.
// return 0.0 if the size parameter, n, is less than 1.
using namespace std;
double array_mean(int array[], int n)
{
    double ave_result =0;
    int sum_of_array_ele =0;
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