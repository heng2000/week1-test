//aim: count the number of even numbers between 1 and a number we supply (inclusive)
//precondition: Return 0 if the parameter is less than 1.
//postcondition: count the number of even numbers between 1 and a number we supply (inclusive)
int count_evens(int number)
{
    
    int even_count =0;
    for(int i =0;i<number;i++)
    {
        if(i%2==0)
        {
            even_count++;
        }
    }
    return even_count;
}