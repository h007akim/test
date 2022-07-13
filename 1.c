#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ /*計算した結果を判別するために計算部分に()を付けた*/
    printf("%d は偶数です\n", n);
  }
  return 0;
}
