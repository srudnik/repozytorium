/* Łukasz Jercha nr albumu 215571 grupa F
 Program wprowadzajacy n liczb i wypisujacy je w odwrotnej kolejnosci
 */

#include <stdio.h>

main()
{
  int i = 0;
  int tab[1000];
  
  while(i < 1000)
    {
      scanf("%d",&tab[i]);
      if(tab[i] == -1)
	{
	  i--;
	  break;
	}     
      i++;
    }
  while(i >= 0)
    {
      printf("%d ",tab[i]);
      i--;
    }
}
