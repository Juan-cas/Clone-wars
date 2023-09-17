char **wrap_ft_split(...args)
{
	char ** ret = ft_split(...args);
	if (!ret)
	{
		perror("ft_split");
		exit(errno);
	}
}