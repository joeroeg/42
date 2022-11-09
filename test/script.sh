#!/bin/bash

touch "$ft_isascii.c"

echo "#include \"libft.h\"" > "ft_isascii.c"

echo >> "ft_isascii.c"

echo "int	$ft_isascii(int c)" >> "$ft_isascii.c"

echo "{" >> "ft_isascii.c"

echo "}" >> "ft_isascii.c"

int	ft_isascii(int c);