#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("input.dat");
ofstream fout("output.dat");
int nr,C[100],M[100][2];

int citire(){
fin>>nr;
for(int i = 1; i <= nr; i++)fin>>C[i];}

int suma(int start, int sfarsit){
int s = 0;
for(intj=start;j<=sfarsit;j++) s+=C[j];
                            return s;}

int rest(int index){
return M[index][0] % N;}

int resturi(){
for(int i = 1; i <= nr; i++){
M[i][0] = suma(1,i);
M[i][1] = rest(i);}}



int main()
{
citire();
resturi();
for(int i = 1; i <= nr; i++)
if(M[i][1] == 0){
for(int j = 1; j <= i; j++) fout<<j<<" "; return 0;}
for(int i = 1; i <= nr; i++)
for(int j = i + 1; j <= N; j++)
if(M[i][1]==M[j][1]) {for(k=i+1;k<=j;k++) fout<<k<<" ";return 0;
return 0;}
