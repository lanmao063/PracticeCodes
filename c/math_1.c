#include <stdio.h>
#include <windows.h>
int not(int p) 
{
    return !p;
}
int and(int p, int q) 
{
    return p && q;
}
int or(int p, int q) 
{
    return p || q;
}
int implies(int p, int q) 
{
    return !p || q;
}
int judge(int p,int q,int r,int s)
{
    if(and(or(p,not(p)),and(implies(p,not(q)),and(implies(r,s),and(implies(not(r),q),not(s))))))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() 
{
    for(int p=0;p<2;p++)
    {
        for(int q=0;q<2;q++)
        {
            for(int r=0;r<2;r++)
            {
                for(int s=0;s<2;s++)
                {
                    if(judge(p,q,r,s))
                    {
                        if(p)
                        {
                            printf("when p=%d q=%d r=%d s=%d,the result is true\n",p,q,r,s);
                        }
                        else
                        {
                            printf("when p=%d q=%d r=%d s=%d,the result is false\n",p,q,r,s);
                        }
                        
                    }
                    else
                    {
                        printf("when p=%d q=%d r=%d s=%d,this result is not matches to the facts\n",p,q,r,s);
                    }
                }
            }
        }
    }
    system("pause");
}