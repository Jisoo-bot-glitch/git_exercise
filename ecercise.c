#include<unistd.h>

void ft_is_comb2(void)
{
   for (int a=00; a<=98; a++)
   {
    for(int b=a+1; b<=99; b++)
    {
   
       char x, y, z, t;
        x = (a/10) +'0';
        y = (a%10) +'0';
        
        z = (b/10) +'0';
        t = (b%10) +'0';
        
        write(1, &x, 1);
        write(1, &y, 1);
        write(1, " ", 1);
        write(1, &z, 1);
        write(1, &t, 1);
        if(!(a == 98 && b ==99))
        {
            write(1, ", ", 2);
        }
        }
        
            
        }
       
    }
   


int main ()
{
    ft_is_comb2();
}