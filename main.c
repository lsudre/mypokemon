#include <stdio.h>
#include "libft/libft.h"
#include "pokemon.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

t_listpok *parsing (t_listpok *pokemons, char *line)
{
    int i;
    int j;
    t_pok *data;
    char *tmpid;

    i = 0;
    j = 0;
    data = malloc(sizeof(*data));
    pokemons = malloc(sizeof(*pokemons));
    if (line[0] == '1')
    {
        j = i + 3;
        while (line[j])
        {
            tmpid = ft_strnew(sizeof(char));
            *tmpid = line[j];
            data->charid = ft_strjoin(data->charid, tmpid);
            j++;
        }
        data->id = ft_atoi(data->charid);
//        printf("id = %d\n", data->id);
    }
    if (line[0] == '2')
    {
        j = i + 2;
        while (line[j])
        {
            tmpid = ft_strnew(sizeof(char));
            *tmpid = line[j];
            data->name = ft_strjoin(data->name, tmpid);
            j++;
        }
    //   printf("Name = %s\n", data->name);
    }
    if (line[0] == '3')
    {
        j = i + 2;
        while (line[j])
        {
            tmpid = ft_strnew(sizeof(char));
            *tmpid = line[j];
            data->type1 = ft_strjoin(data->type1, tmpid);
            j++;
        }
     //  printf("Type1 = %s\n", data->type1);
    }
    if (line[0] == '4')
    {
        j = i + 2;
        while (line[j])
        {
            tmpid = ft_strnew(sizeof(char));
            *tmpid = line[j];
            data->type2 = ft_strjoin(data->type2, tmpid);
            j++;
        }
  // printf("Type2 = %s\n", data->type2);
    }
    if (data->id != 0)
        {pokemons->id = data->id;
        printf("ID = %d\n", pokemons->id);}
    if (data->name != NULL)
        {
            pokemons->name = data->name;
            printf("NAME = %s\n", pokemons->name);
        }
    if (data->type1 != NULL)
        {
            pokemons->type1 = data->type1;
            printf("TYPE1 = %s\n", pokemons->type1);
        }
    if (data->type2 != NULL)
    {
        pokemons->type2 = data->type2;
        printf("TYPE2 = %s\n", pokemons->type2);
    }
    return (pokemons);
}

int main (int argc, char **argv)
{
    t_listpok *pokemons;
    int       fd;
    char      *line;
    int       i;

    pokemons = NULL;
    fd = open("pokemon", O_RDONLY);
    if (fd == -1)
    {
        printf("Error\n");
        close(fd);
    }
    while (get_next_line(fd, &line) == 1)
    {
        pokemons = parsing(pokemons, line);
        free(line);
    }
    close(fd);
    return(0);
}
