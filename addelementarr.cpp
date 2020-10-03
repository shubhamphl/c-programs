#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int ar[20] = {1,2,3,4,5};
	int i, pos, num;
   
	cout<<"enter the position and number ";
	
	cin>>pos>>num;
	  
	  for(i=4; i>=pos; i--)
	   
	    ar[i+1]= ar[i];
	    
	    ar[pos]= num;
	    
	    cout<<"array"<<endl<<endl;
	    
	    for(i=0; i<6; i++)
	     
	      cout<<ar[i]<<endl;
	      
	  }


