l;float*T,sqrt(),s[80],x,y=6,X,Y,Z,d,*S=s,A,B,C;main(c,v)char**v;{while(*++v)*
S++=atoi(*v);for(;y>-6;y-=.6,puts(""))for(x=-8;x<8;x+=.22,putchar("...-:=#@"[l]
))for(d=9e9,l=0,T=s;T<S;T++)X=*T++,Y=*T++,Z=*T+++9,A=x*x+y*y+81,B=x*X+y*Y+9*Z,C
=B*B-A*(X*X+Y*Y+Z*Z-*T**T),C>0&&(B-=sqrt(C),B<d?l=(X-Y+Z-(d=B)/A*(x-y+9))*2/
*T+4:0);}
