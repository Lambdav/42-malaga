void  ft_sort_int_tab(int *tab, int size)
{
  int i;
  int j;
  int temp;

  i = 0;
  j = 0;
  while (j <= size)
  {
    while ( i < size - 1)
    {
      if (tab[i] > tab[i + 1])
      {
        temp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = temp;
      }
      i++;
    }
    j++;
    i = 0;
  }
}

/*
#include <stdio.h>

int main(void)
{
    int array[] = {6, 5, 7, 4, 8};
    int size = 5;
    int k = 0;

    ft_sort_int_tab(array, size);

    while (k < size)
    {
        printf("%d ", array[k]);
        k++;
    }
    printf("\n");
    return (0);
}
*/
