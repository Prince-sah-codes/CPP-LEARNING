/* Array Problems 

1. Array ke 5 elements input lo aur print karo.
2. Array ka sum nikalo.
3. Array ka average nikalo.
4. Array mein largest element find karo.
5. Array mein smallest element find karo.
6. Array ko reverse order mein print karo.
7. Count karo kitne even aur kitne odd numbers hain.
   */


//QUESTION 1: Array ke 5 elements input lo aur print karo.
/*#include<iostream>
using namespace std;
int main(){
   int arr[5],i;
   cout<<"Enter 5 elements in array: "<<endl;
   for(i =0 ; i<5;i ++){
    
    cin>>arr[i];
   }
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";}
    

return 0;
}*/



//QUESTION 2: Array ka sum nikalo.

#include<iostream>
using namespace std;
int main(){
    int arr[5],i,sum=0;
    cout<<"Enter 5 elements in array: "<<endl;
    for(i=0 ; i<5;i ++){
        cin>>arr[i];    
        sum = sum + arr[i];
    }
    
    
    cout<<"The elements in the array are: "<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

cout<<"\nThe sum of the array is: "<<sum<<endl;



    return 0;
}
