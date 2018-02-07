#include <stdio.h>

int Comb(int n, int r)
{
    int comb=1;
    int i;
    
    for(i=n-r+1;i<=n;i++)
    {
        comb *=i;
    }
    
    for(i=1;i<=r;i++)
    {
        comb /=i;
    }
    
    return comb;
}

double Prob(int n, int bolas[], int desejado[])
{
    double prob=1;
    int i, a=0, b=0;
    
    for(i=0;i<n;i++)
    {
      a+=bolas[i];
      b+=desejado[i];
      prob*=Comb(bolas[i],desejado[i]);
    }
    prob/=Comb(a,b);
    
    return prob;
}

int main() 
{   
    int N=2; 
    int bolas[]={5,3};   
    int desejado[]={2,1};   
    printf("Probabilidade: %lf",Prob(N,bolas,desejado));
}
