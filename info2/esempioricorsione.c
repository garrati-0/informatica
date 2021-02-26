

int fattoriale(int n)
{
    if(n==1)
    return 1;
    else
    return n*fattoriale(n-1);
}

int main(void)
{
    
   int c= fattoriale(3);
    return 0;
}