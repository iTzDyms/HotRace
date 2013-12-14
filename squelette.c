int		main(void)
{
	int		k;
	char	*line;
	t_node	*tree;
	t_lst	*search;

	k = 0;
	while (ft_get_input(&line))
	{
		k++;
		if (k % 2)
			keyword = ft_strdup(line);
		if (keyword[0] == '\n')
		{
			while (ft_get_input(&line))
				search = ft_lstadd(lst, line);
		}
		else
			value = ft_strdup(line);
		ft_strdel(line);
		if (k % 2 == 0)
			ft_add_node(tree, keyword, value);
	}
	ft_search_input();
	return (0);
}

int		ft_store_input(t_tree *tree)
{
	char	*buff[BUFF_SIZE + 1];
	int		*ret;
	char	*keyword;
	char	*value;
	int		k;

	k = 0;
	keyword = (char *) malloc(sizeof(char));
	value = (char *) malloc(sizeof(char));
	while ((ret = read(0, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (k % 2)
			ft_strfjoin(value, buff);
		else
			ft_strfjoin(keyword, buff);
		if (keyword[0] == '\n')
			return (0);
		if (buff[ret - 1] == '\n')
			k++;
		if (k % 2 == 0 && k > 0)
		{
			ft_node_add(tree, keyword, value);
			keyword[0] = '\0';
			value[0] = '\0';
		}
	}
	return (ret);
}

int		ft_get_input(char **line)
{
	char	*buff[BUFF_SIZE + 1];
	int		*ret;

	*line = (char *) malloc(sizeof(char));
	*line[0] = '\0';
	while ((ret = read(0, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		ft_strfjoin(*line, buff);
		if (buff[ret - 1] == '\n')
			return (1);
	}
	return (ret);
}

