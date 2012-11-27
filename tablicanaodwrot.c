<<<<<<< HEAD
/* CENZURA  !!!! ZSRR
=======
/*cycki dupa  :D
>>>>>>> 1956faf557bc17f0279c4ede4c5096fa8f0a8ae5
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
