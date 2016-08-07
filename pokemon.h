#ifndef POKEMON_H
typedef struct      s_pok
{
  int               id;
  char              *type1;
  char              *type2;
  char              *name;
  char              *charid;
  char              *tmp;
}                   t_pok;

typedef struct      s_listpok
{
  int               id;
  char              *type1;
  char              *type2;
  char              *name;
  struct s_listpok  *next;
}                   t_listpok;


t_listpok *parsing (t_listpok *pokemons, char *line);
#endif
