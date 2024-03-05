#include<iostream>
#include<climits>
#include<vector>
using namespace std;


void print_matrix(vector<vector<int>> v, int a, int b){
    int middle_row = a/2;
    int middle_col = b/2;
    cout<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==middle_row || j==middle_col) cout<<v[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
}

int main(){

    //answer 6
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    vector < vector<int> > arr(m,vector<int>(n));
    cout<<"Enter matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    print_matrix(arr,m,n);

    
    //answer 1
    int arr1[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr1[i][j] = 10;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    //answer 2
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr1[m][n];
    int arr2[m][n];
    cout<<"Enter first matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter second matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr1[i][j] += arr2[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";;
        }
        cout<<endl;
    }

    // answer 3
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter l1 coordinate : ";
    cin>>l1;
    cout<<"Enter r1 coordinate : ";
    cin>>r1;
    cout<<"Enter l2 coordinate : ";
    cin>>l2;
    cout<<"Enter r2 coordinate : ";
    cin>>r2;
    int sum = 0;
    int left = min(l1,l2);
    int right = max(l1,l2);
    int top = min(r1,r2);
    int bottom = max(r1,r2);
    for(int i =left;i<=right;i++){
        for(int j=top;j<=bottom;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;

    // answer 4
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
    }
    cout<<endl<<"Max number is "<<max;



    // answer 5
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max =INT_MIN;
    int row = 0;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
        if(max < sum){
            max = sum;
            row = i;
        }
    }
    cout<<endl<<"Row "<<row<<" has maximum sum of "<<max;
}