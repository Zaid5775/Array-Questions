#include <iostream>
using namespace std;


int main()
{
    int n;
    cout<< "Enter n"<< endl;
    cin>> n;
    int arr[n];
    cout<< "Enter elements of an array: "<< endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }


    cout << "Original array: ";
    
    for (int i=0; i < n; i++) 
    cout << arr[i] <<" ";
    
    cout <<"\nUnique elements array: ";
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
         if (i == j)
          cout << arr[i] << " ";
    }
    return 0; 
}