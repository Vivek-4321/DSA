#include<iostream>
using namespace std;
void moveTonextLine(int k,int i,int z)
{
    if(k==i)// Base case
        return;
    cout<<"* ";
    moveTonextLine(k+z,i,z);
}
void addSpaceInDiamond(int j,int i,int z) // print space of diamond
{
    if(j==i)
        return;
    cout<<" ";
    addSpaceInDiamond(j+z,i,z); // send recursive call
}
void upperPartOfDiamond(int row,int i)
{
    if(i>row)// Base case
        return;
    addSpaceInDiamond(row,i,-1);
    moveTonextLine(0,i,1);
    cout<<endl;
    upperPartOfDiamond(row,i+1);// send recursive call
}
void lowerPartOfDiamond(int row,int i)// print next line of diamond
{
    if(i>row) // Base case
        return;
    addSpaceInDiamond(0,i,1);
    moveTonextLine(row,i,-1);
    cout<<endl;
    lowerPartOfDiamond(row,i+1); // send recursive call
}
int main()
{
       int row,i,j,k;
       row =5;
       upperPartOfDiamond(row,0); // print uper part of triangle
       lowerPartOfDiamond(row,1);// print lower part of diamond
       return 0;
}