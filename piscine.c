#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i=0;
  if (str == NULL)
  {return 1;}

  while(str[i] !='\0')
  {
    if(!(str[i]>=32 && str[i]<=126))
    {
      return 0;
    }
    i++;
  }
  return 1;
}
int main()
{
  char numArr[10]= {"Hoh"};
  int result = ft_str_is_alpha(numArr);
  printf("%d", result);  
  return 0;

}