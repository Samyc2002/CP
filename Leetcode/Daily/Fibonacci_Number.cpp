class Main
{
public:
    int fib(int n) 
    {
        int f=0,
        s = 1;
        if(n==0)
        {
            return n;
        }
        else
        {
            int nk =  0;
            for(int i=2;i<=n;i++)
            {
                nk = f+s;
                f = s;
                s = nk;
                
            }
            return s;
        }
    }
};
