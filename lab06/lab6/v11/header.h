void readpatientrec(char *);
void readinput();
void agematch(unsigned short x);
void addPatient(char *);
void removeOthers();

void minmaxagematch(char c);
char *input;
char *filename;

typedef int boolean;

void purduematch(boolean x);

typedef struct patient
{
  unsigned short age;
  struct name
  {
    char *first;
    char *last;
  } pname;
  struct height
  {
    int feet;
    int inches;
  } pheight;
  unsigned int weight;
  boolean purduegraduate;
  struct patient *next;
} patient_t;

patient_t *patientrecord;
