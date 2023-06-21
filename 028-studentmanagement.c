#include <stdio.h>
typedef char string[20];
typedef char  filename[12];
typedef enum { false , true }boolean;

typedef struct {
  string name ;
  string surname ;
  int score ;
  int age ;
  }tperson;

typedef struct list_element{
  tperson info;
  struct list_element *next;
  } elem_list;

typedef elem_list * listClass;

void acqStudent (tperson *studread);
void classInsert (listClass * còass , tperson student);
void showClass (listClass class );
void saveClass (listClass class , filename nameof);
void upClass (listClass * class , filename nameof);
elem_list * searchStudent ( listClass class , string searchedSurname );
boolean searchStudent (lisaClass class , string searchedSurname , elem_lista ** punt , elem_lista ** prec );
boolean delStudent (listClass * class , string searchedSurname );
boolean isEmpty (listClass class);
void empty ( listClass * class );

int main (){
  namefile aFile;
  listClass aClass;
  tperson aStudent;
  
