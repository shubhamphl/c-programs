

#include "iostream"

using namespace std;


void merge(int a[], int l, int m, int r){

    int i=0;
    int j=0;
    int k=l;

    int l1=m-l+1;
    int l2=r-m;


    int b[l1];
    int c[l2];

    for(int p=0;p<l1;p++){

        b[p]=a[l+p];


    }

    for(int p=0;p<l2;p++){


        c[p]=a[m+1+p];
    }

    while(i<l1 && j<l2){
        if(b[i]<c[j]){

            a[k]=b[i];
            i++;


        }

        else{

            a[k]=c[j];
            j++;
        }

        k++;



    }

    while(i<l1){

        a[k]=b[i];
        i++;
        k++;

    }

    while (j<l2){

        a[k]=c[j];
        j++;
        k++;

    }



}


void merge_sort(int a[],int l,int r){

    if(l<r){

        int m=(l+r)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);


    }



}



int main(){
    int n=7;


    int a[]={3,5,8,1,4,9,6};

    merge_sort(a,0,n-1);

    for(int i=0;i<n;i++){

        cout<<a[i]<<" ";

    }
    
}









