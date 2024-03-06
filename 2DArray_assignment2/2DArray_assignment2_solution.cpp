#include<iostream>
#include<vector>
using namespace std;
int main(){

    //answer 1
    int n;
    cout<<"Enter size of square matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if ((i==j) || (i+j==n-1)) cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }

    //answer 2
    int n;
    cout<<"Enter size of square matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int k=0;k<n;k++){
        int i =0;
        int j = n-1;
        while(i<=j){
            int temp = arr[k][j];
            arr[k][j] = arr[k][i];
            arr[k][i] = temp;
            i++;
            j--;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(i == j) continue;
            else{
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // answer 3
    int n;
    cout<<"Enter size of square matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--) cout<<arr[i][j]<<" ";
        }
        else{
            for(int i=0;i<n;i++) cout<<arr[i][j]<<" ";
        }
    }

    //answer 4
    int n;
    cout<<"Enter size of square matrix : ";
    cin>>n;
    int arr[n][n];
    int ele = 1;
    int minrow=0,maxrow=n-1,mincol=0,maxcol=n-1;
    while(minrow<=maxrow && mincol<=maxcol){
        for(int i= mincol;i<=maxcol;i++) {
            arr[minrow][i] = ele;
            ele++;
        }
        minrow++;
        for(int j= minrow;j<=maxrow;j++) {
            arr[j][maxcol] = ele;
            ele++;
        }
        maxcol--;
        for(int i= maxcol;i>=mincol;i--) {
            arr[maxrow][i] = ele;
            ele++;
        }
        maxrow--;
        for(int j=maxrow;j>=minrow;j--) {
            arr[j][mincol] = ele;
            ele++;
        }
        mincol++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //answer 5
    //output will be : 1 2 3 4
}
