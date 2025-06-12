#include<iostream>

using namespace std;

int main(){
    int m;
    cout<<"Enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"Enter columns of matrix : ";
    cin>>n;

    int arr[m][n];
        cout<<"Enter elements of matrix : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        // wave print

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i % 2 == 0){
                    cout<<arr[i][j]<<" ";
                }
                
                else{
                    cout<<arr[i][n-1-j]<<" ";
                }
            }
            cout<<endl;
        }
    return 0;
}