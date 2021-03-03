

int fattoriale(int n)
{
    if(n==1)
    return 1;//CASO BASE
    else
    return n*fattoriale(n-1); // RICORSIONE
}

int sommafinoa(int n)
{
    if(n==1)
    return 1; //caso base 
    else 
    return sommafinoa(n-1)+n;//ricorsione
}

int main(void)
{
    
   int c= fattoriale(3);
   c=sommafinoa(4);
    return 0;
}