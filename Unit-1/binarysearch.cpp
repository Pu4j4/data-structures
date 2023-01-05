#include <iostream.h>
using namespace std;
int binarySearch(int a[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(a, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(a, mid+1, r, num);
   }
   return -1;
}
int main(void) {
   int a[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   int n = sizeof(a)/ sizeof(a[0]);
   int num;
   cout << "Enter the number to search: \n";
   cin >> num;
   int index = binarySearch (a, 0, n-1, num);
   if(index == -1){
      cout<< num <<" is not present in the array";
   }else{
      cout<< num <<" is present at index "<< index <<" in the array";
   }
   return 0;
}
