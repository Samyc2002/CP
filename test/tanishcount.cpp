#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
using namespace std;
int main()
{
    int t;
	int s;
    cin>>t;
    cin>>s;
    int m=s/60;
        for(int i=0;i<t;i++)
        {
            int r=s%60;
            if(r!=0)
            {
              for(int j=r;j>=0;j--)
              {
                  if(j>=10)
                    {cout<<m<<":"<<j<<endl;
						sleep(1);
						system("cls");
					}
                    else
                        {cout<<m<<":0"<<j<<endl;
						sleep(1);
						system("cls");}


              }
            }
            else
                {cout<<m<<":00"<<endl;
				sleep(1);
						system("cls");}
            m=m-1;
            for(int x=m;x>=0;x--)
            {
               for(int y=59;y>=0;y--)

                   {
                  if(y>=10)
                    {cout<<x<<":"<<y<<endl;
					sleep(1);
						system("cls");}
                    else
                        {cout<<x<<":0"<<y<<endl;
						sleep(1);
						system("cls");}


              }


            }


        }
        return 0;

}