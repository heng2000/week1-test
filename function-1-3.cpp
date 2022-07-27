//the function aims to returns the number of elements in an array that are equal to a given parameter
//precondition: n larger than 1
//postcondition: returns the number of elements
using namespace std;
int num_count(int array[], int n, int number)
{
    int equal_count =0;
    if (n<1)
    {
        return 0;
    }else{
        for (int i =0;i<n;i++)
        {
            if (array[i]==number)
            {
                equal_count++;
            }
        }
    }
    return equal_count;
}