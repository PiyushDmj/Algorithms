#include<iostream>
using namespace std;
int main(){
    int n,i,srch_no,scs,found=0;
  
    //take the number of inputs from user
  
    cout<<"Enter the Number of Inputs:";
    cin>>n;
  
    //dynamically allocating memory
  
    int *arr = new int(n);
  
    //take the inputs or numbers
  
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
  
    //take the element to be searched
  
    cout<<"Enter Searching Element: ";
    cin>>srch_no;
  
    //search the number
  
    for(i=0;i<n;i++){
        if(arr[i]==srch_no){
        scs = i+1;
        found=1;
        }
    }
    if(found==0)
    printf("number not found");
    else{
        cout<<"Number Found at index : "<<scs;
    }

    cout<<endl;
  
    //delete the memory stack for the freeing up the space 
  
    delete [] arr;
    return 0;



}
