
#include "common.h"

void Graph(){

  FILE *gp;
  char buffer[256];
  int i;

  gp = popen("gnuplot", "w");
  fprintf(gp, "set term jpeg size 1350, 900\n");

  sscanf(filename[1],"%[^.]]",buffer);

  fprintf(gp, "set output \"./%s.jpeg\"\n",buffer);
  fprintf(gp, "plot");

  for( i = 1 ; i < number_x ; i++){
    fprintf(gp, "\"./%s\" using 1:%d title \"%s\" with l",filename[1], i+1, name_x[i]);
    if (i != (number_x-1)){fprintf(gp,",");}
  }

  fprintf(gp,"\n");
  fflush(gp);
  pclose(gp);

}
