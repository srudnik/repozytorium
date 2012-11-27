/* DUPA   cycki  :D
 Program wprowadzajacy n liczb i wypisujacy je w odwrotnej kolejnosci
 */

#include <stdio.h>

main()
{
  int i = 0;
  int tab[1000];
  
  while(i < 1000)
    {
	// He he dodalem komentarz dla gita
	// i jest super
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
    }/*moja zmiana "*/
}
