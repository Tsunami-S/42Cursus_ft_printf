#include "ft_printf.h"

static char *make_block_for_s(char *str, int str_len, int total_len, int hyp_sign);

int	pf_putstr(char *str, t_format *s)
{
	int str_len;
	int write_len;
	char *write_block;

	if(!str && (!s->dot || s->prec >= 6))
		str = "(null)";
	else if(!str && s->dot)
		str = "";
	str_len = ft_strlen(str);
	if(s->dot && s->prec < str_len)
		str_len = s->prec;
	if(!s->width || s->width <= str_len)
		return write(1, str, str_len);
	write_block = make_block_for_s(str, str_len, s->width, s->hyp);
	if(!write_block)
		return -1;
	write_len = write(1, write_block, s->width);
	free(write_block);
	return write_len;
}

static char *make_block_for_s(char *str, int str_len, int total_len, int hyp_sign)
{
	int bi;
	int si;
	int dir;
	char *block;

	block = (char *)malloc(sizeof(char) * (total_len + 1));
	if(!block)
		return NULL;
	block[total_len] = '\0';
	bi = 0;
	si = 0;
	dir = 1;
	if(!hyp_sign)	
	{
		bi = total_len - 1;
		si = str_len - 1;
		dir = -1;
	}
	while(str_len)
	{
		block[bi] = str[si];
		bi += dir;
		si += dir;
		str_len--;
		total_len--;
	}
	while(total_len)
	{
		block[bi] = ' ';
		bi += dir;
		total_len--;
	}
	return block;
}
