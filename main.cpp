#include <iostream>
using namespace std; 

int inputValid(int, int); // call functions
void getListprime(int, int);

int main ()
{
    int begin, end, y; 

    cout << "Enter in your range from [from, to]: " << endl;
    cin >> begin >> end;
    
    y = inputValid(begin, end);// validation
    if (y == 0)
        exit(0);
    getListprime(begin, end); 
    
}

int inputValid(int begin, int end) // input validation function
{
    if (begin > end) || (begin < 2) || (end < 0)
        return 0;
    else 
        return 1;
}

void getListprime(int begin, int end) // calculation function, returns 0 or 1
{
    for (j=2; j<=(i/2); j++)
    {
        if i % j == 0
            break;
        if j > (i/2)
            cout << i << "Prime number\n";
        return(0)
    }
}

// int x, y;
//     for (x = begin; x <= end; x++)
//     {
//         if (x == 0 || x == 1){
//             continue;
//         }
//         for (y = 2; y <= (x / 2); y++){
//             if (x % y == 0)
//                 break;
//             }
//         if (y > (x/2))
//             cout << "Prime numbers: " << x << endl;
            
//     }