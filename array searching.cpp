#include<bits/stdc++.h>
using namespace std;

  int main(){
     
      
       int arr[]= {1 ,2 ,44, 55 ,78};
    
       int x = 2;
       bool w = false;
       
       int n = sizeof(arr) / sizeof(arr[0]); 
   
        for( int i=0; i<n; i++ )
		 
		  {
		  	 if(arr[i] == x){
			   
		  	 	cout<<"found"<<x;
		  	     w = true;
		  	    break; 
			}
		  	     
		  	 }
		  	 if(w == false){
			   
		  	 cout<<"not found";}
		  }
				          
            

