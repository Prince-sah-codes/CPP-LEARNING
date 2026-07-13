#include<iostream>
using namespace std;

int main(){

    
   /* cout<<"Enter the number of scores: ";
    int n;
    cin>>n;
    int score[n];

    for(int i =1; i<=n ;i++){
        cout<<"Enter score  "<<i<<": ";
        cin>>score[i];
        


    }
    cout<<"Do you want to view the socres? (y/n): ";
    char choice;
    cin>>choice;
    if(choice == 'y' || choice == 'Y'){
    cout<<"The scores are: ";
    for(int i =1; i<=n ;i++){
        cout<<score[i]<<" ";
    }cout<<"Thank you!";
    }   

    else{
        cout<<"You chose not to view the scores.";
    }*/

    
//FOR TRANSPOSE OF MATRIXXX
    cout<<"Enter the order of matrix: "<<endl;
    int n;
    cin>>n;
    int arr[n][n];
    int sol[n][n];

    cout<<"Enter the elements of the matrix: "<<endl;    
    for(int i = 0; i<n;i++){
        for(int j = 0; j< n;j++){
            cin>>arr[i][j];
        }
    }
    
   
cout<< "The matrix is: "<<endl;
    for(int i = 0; i<n;i++){
        for(int j = 0; j< n;j++){
            cout<< arr[i][j]<<" ";
        }cout<<endl;
    }
    //Calculating transpose of the matrix...
    for(int i =0; i<n;i++){
        for(int j=0; j<n;j++){
            sol[i][j] = arr[j][i];
        }
    }

    cout<< "The transpose of the matrix is: "<<endl;
    for(int i = 0; i<n;i++){
        for(int j = 0; j< n;j++){
            cout<< sol[i][j]<<" ";
        }cout<<endl;
    }

return 0;
}