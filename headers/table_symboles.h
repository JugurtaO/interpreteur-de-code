#define MAXSIZE 512

typedef struct 
{
  char  name[128];
  int value;
}field;

static field *table[MAXSIZE];

void init_table();
int field_IsIn(char *name);
void insert_field( char* name,int value);
int search_value(char *name);
int indexOfField(char * name);
void print_table();
void free_table();

