/*
** my_isneg.c for isneg in /home/guerga_a/B1/Sys_Unix/PSU_2014_my_ls/lib
** 
** Made by francois guergadic
** Login   <guerga_a@epitech.net>
** 
** Started on  Sat Nov 29 12:39:20 2014 francois guergadic
** Last update Wed Dec  3 10:27:57 2014 francois guergadic
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
  if (n >= 0)
    {
      my_putchar('P');
    }
  else
    {
      my_putchar('N');
    }
  return (0);
}
