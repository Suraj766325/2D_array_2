// 1) Write a program to print the elements of both the diagonals in a square matrix.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of square matrix = ";
    cin>>n;
    int a[n][n],i,j;
    cout<<"enter array = \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    cout<<"print = \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j ||i+j==n-1) cout<<a[i][j]<<" ";
            else                cout<<"  ";            
        }
        cout<<endl;
    }
}




// 2) Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of square matrix = ";
    cin>>n;
    int a[n][n],i,j,temp;
    cout<<"enter array = \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[n-1-i][j];
            a[n-1-i][j]=temp;
        }
    }
    cout<<"after 90 degree anticlockwise rotation = \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
    }
}




// 3) Write a program to print the matrix in wave form.
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows = ";
    cin>>m;
    cout<<"enter columns = ";
    cin>>n;
    int a[m][n],i,j;
    cout<<"enter arary = \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
        if(j%2==0) cout<<a[m-1-i][j]<<" ";
        else       cout<<a[i][j]<<" ";
        }
    }
}




// 4) Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of square matrix = ";
    cin>>n;
    int a[n][n],i,j,minr=0,maxr=n-1,minc=0,maxc=n-1,count=1;
    while(minr<=maxr && minc<=maxc)
    {
        for(j=minc;j<=maxc;j++)
        {
            a[minr][j]=count;
            count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(i=minr;i<=maxr;i++)
        {
            a[i][maxc]=count;
            count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(j=maxc;j>=minc;j--)
        {
            a[maxr][j]=count;
            count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(i=maxr;i>=minr;i--)
        {
            a[i][minc]=count;
            count++;
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
    }
    cout<<"array = \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}




// 5) Predict the output :
int main(){
int a[][2] = {{1,2},{3,4}};
int i, j;
for (i = 0; i < 2; i++)
for (j = 0; j < 2; j++)
cout << a[i][j];
return 0;
}

OUTPUT - 1234
