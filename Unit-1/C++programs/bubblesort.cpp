#include 
using namespace std;
void swap(int *a, int *b)  
{  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
}  
void bubblesort(int arr[], int n)  
{   
    for (int i = 0; i < n-1; i++)      
        for (int j = 0; j  arr[j+1])  
            swap(&arr[j], &arr[j+1]);  

    for ( int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
int main() {
 int arr[5] = {4,3,5,1,2};
 bubblesort(arr,5);
return 0;
}