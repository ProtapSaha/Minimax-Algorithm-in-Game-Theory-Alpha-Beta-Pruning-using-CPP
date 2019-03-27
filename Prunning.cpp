#include<bits/stdc++.h>
using namespace std;

//const int max=-10000;
//const int min=10000;

int main()
{
    int values[12]={4,6,7,9,1,2,0,1,8,1,9,2};
    //int i=12;
    int alpha=-10000;
    int beta=10000;
    int a=-10000;
    int b,c,d=10000;
    int e,f,g,h,i,j=-10000;

    e=values[0];
    if(alpha>e)
    {
    	 b=e;
	}
    else
    {
    	e=max(values[1],e);
    	b=e;
	}
    if(b>beta)
    {
        a=b;
    }
    else
    {
       f=values[2];
       if(alpha>f)
       {
       	b=min(f,b);
       	a=b;
	   }
	   else
	   {
	   	f=max(values[2],values[3]);
	   	b=min(b,f);
	   	a=b;
	   }
    }
    
    
    g=values[4];
    if(alpha>g)
    {
    	 c=g;
	}
    else
    {
    	g=max(values[5],g);
    	c=g;
	}
    if(c>beta)
    {
        a=max(a,c);
    }
    else
    {
       h=values[6];
       if(alpha>h)
       {
       	c=min(h,c);
       	a=max(a,c);
	   }
	   else
	   {
	   	h=max(values[6],values[7]);
	   	c=min(c,h);
	   	a=max(a,c);
	   }
    }
    
    i=values[8];
    if(alpha>i)
    {
    	 d=i;
	}
    else
    {
    	i=max(values[9],i);
    	d=i;
	}
    if(d>beta)
    {
        a=max(a,d);
    }
    else
    {
       j=values[10];
       if(alpha>j)
       {
       	d=min(j,d);
       	a=max(a,d);
	   }
	   else
	   {
	   	j=max(values[10],values[11]);
	   	d=min(d,j);
	   	a=max(a,d);
	   }
    }

    cout<<"The value of the top node is :"<<a;

}

