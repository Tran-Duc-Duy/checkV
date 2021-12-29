#include <iostream>

using namespace std;

int check (int a[], int n){
    int flag =0;
    int countBe=0;
    for(int i=0;i<n-1;i++){
        if(a[i] < (a[i+1])){
            flag=1;
            countBe ++;
        }
        if(   (a[i]>a[i+1]) && (flag ==1)  ){
            return 0;
        }
    }
    if(flag ==0) return 0;
    else if(countBe==n-1) return 0;
    else    return 1;
}
void DaoMang(int a[],int n)
{
   for(int i=0;i<n/2;i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp;
   }
}
int main()
{
    int a=0;
    cin >> a;
    int p[100];
    int index =0;
    while(a>0){
        p[index++]=a%10;
        a/=10;
    }
    DaoMang(p,index);
    cout <<endl;
    int result = check(p,index);
    cout <<result;
    return 0;
}
