/*
** my_str_isprintable.c for str_isprintable in /home/guerga_a/B1/Sys_Unix/PSU_2014_my_ls/lib
** 
** Made by francois guergadic
** Login   <guerga_a@epitech.net>
** 
** Started on  Sat Nov 29 12:45:35 2014 francois guergadic
** Last update Sat Nov 29 12:45:44 2014 francois guergadic
*/

int	my_str_isprintable(char *str)
{
  int   i;

  i = 0;
  while (str[i] <= 126 && str[i] >= 32)
    i++;
  if (str[i] == '\0')
    return (1);
  return (0);
}
