#include <stdio.h>
/*int fatNaoRecursivo(int n){
    if(n<2) return 1;
    int f=1;
    int i;
    for(i=2; i<=n; i++) f*=i;
    return f;
}
int fatRecursivo(int n){
    if(n<2) return 1;
    return fatRecursivo(n-1)*n;
}
int main()
{ printf("%d\n",fatNaoRecursivo(6));
  printf("%d\n",fatRecursivo(6));
  return 0;
}*/
int fibonacci (int n){
  int s1, s2 ;
       if (n == 0) return 1{

       }else if (n == 1) return 1{

       }else {
         s1 = fibonacci(n - 1);
         s2 = fibonacci(n - 2);
         return s1 + s2;
       }
  
  
}
