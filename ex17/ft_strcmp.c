int	ft_strcmp(char *s1, char *s2)
{
	int cpt;

	cpt = 0;
	while (s1[cpt] == s2[cpt] && s1[cpt] != '\0' && s2[cpt] != '\0')
		cpt++;
	return (s1[cpt] - s2[cpt]);
}
