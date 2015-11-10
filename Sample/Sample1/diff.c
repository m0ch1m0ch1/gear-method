/*
 diff.c : Function for definition of differential equation
*/

#include "common.h"

#define PI M_PI

/* ------------------ Definition of differential equation ------------------ */

void Differential_equation(){

  int i;

  for( i = 0 ; i < number_x ; i++){
    x[i] = y[0][i];
  }
  /*********************** begin of differential equation **********************/

    df[0] = 1.0;

    df[1] = 0.0;
    df[2] = 0.0;
    df[3] = 0.0;
    df[4] = 0.0;

  //---------- input layer ----------

    df[5] = x[1] - k[1]*x[5]*(1.0-x[7]) - k[3]*x[5];
    df[6] = k[0] - k[2]*x[6]*x[7] - k[4]*x[6];
    df[7] = k[1]*x[5]*(1.0-x[7]) - k[2]*x[6]*x[7];

    df[8] = x[2] - k[1]*x[8]*(1.0-x[10]) - k[5]*x[8];
    df[9] = k[0] - k[2]*x[9]*x[10] - k[6]*x[9];
    df[10] = k[1]*x[8]*(1.0-x[10]) - k[2]*x[9]*x[10];

    df[11] = x[3] - k[1]*x[11]*(1.0-x[13]) - k[7]*x[11];
    df[12] = k[0] - k[2]*x[12]*x[13] - k[8]*x[12];
    df[13] = k[1]*x[11]*(1.0-x[13]) - k[2]*x[12]*x[13];

    df[14] = x[4] - k[1]*x[14]*(1.0-x[16]) - k[9]*x[14];
    df[15] = k[0] - k[2]*x[15]*x[16] - k[10]*x[15];
    df[16] = k[1]*x[14]*(1.0-x[16]) - k[2]*x[15]*x[16];

  //---------- synapse 1 ----------

    df[17] = (k[11]+k[12]*x[67])*x[7] - k[1]*x[17]*(1.0-x[19]) - k[14]*x[17];
    df[18] = k[13] - k[2]*x[18]*x[19] - k[15]*x[18];
    df[19] = k[1]*x[17]*(1.0-x[19]) - k[2]*x[18]*x[19];

    df[20] = (k[11]+k[12]*x[67])*x[10] - k[1]*x[20]*(1.0-x[22]) - k[14]*x[20];
    df[21] = k[13] - k[2]*x[21]*x[22] - k[15]*x[21];
    df[22] = k[1]*x[20]*(1.0-x[22]) - k[2]*x[21]*x[22];

    df[23] = (k[11]+k[12]*x[67])*x[13] - k[1]*x[23]*(1.0-x[25]) - k[14]*x[23];
    df[24] = k[13] - k[2]*x[24]*x[25] - k[15]*x[24];
    df[25] = k[1]*x[23]*(1.0-x[25]) - k[2]*x[24]*x[25];

    df[26] = (k[11]+k[12]*x[67])*x[16] - k[1]*x[26]*(1.0-x[28]) - k[14]*x[26];
    df[27] = k[13] - k[2]*x[27]*x[28] - k[15]*x[27];
    df[28] = k[1]*x[26]*(1.0-x[28]) - k[2]*x[27]*x[28];

  //---------- synapse 2 ----------

    df[29] = (k[11]+k[12]*x[70])*x[7] - k[1]*x[29]*(1.0-x[31]) - k[16]*x[29];
    df[30] = k[13] - k[2]*x[30]*x[31] - k[17]*x[30];
    df[31] = k[1]*x[29]*(1.0-x[31]) - k[2]*x[30]*x[31];

    df[32] = (k[11]+k[12]*x[70])*x[10] - k[1]*x[32]*(1.0-x[34]) - k[16]*x[32];
    df[33] = k[13] - k[2]*x[33]*x[34] - k[17]*x[33];
    df[34] = k[1]*x[32]*(1.0-x[34]) - k[2]*x[33]*x[34];

    df[35] = (k[11]+k[12]*x[70])*x[13] - k[1]*x[35]*(1.0-x[37]) - k[16]*x[35];
    df[36] = k[13] - k[2]*x[36]*x[37] - k[17]*x[36];
    df[37] = k[1]*x[35]*(1.0-x[37]) - k[2]*x[36]*x[37];

    df[38] = (k[11]+k[12]*x[70])*x[16] - k[1]*x[38]*(1.0-x[40]) - k[16]*x[38];
    df[39] = k[13] - k[2]*x[39]*x[40] - k[17]*x[39];
    df[40] = k[1]*x[38]*(1.0-x[40]) - k[2]*x[39]*x[40];

  //---------- synapse 3 ----------

    df[41] = (k[11]+k[12]*x[73])*x[7] - k[1]*x[41]*(1.0-x[43]) - k[18]*x[41];
    df[42] = k[13] - k[2]*x[42]*x[43] - k[19]*x[42];
    df[43] = k[1]*x[41]*(1.0-x[43]) - k[2]*x[42]*x[43];

    df[44] = (k[11]+k[12]*x[73])*x[10] - k[1]*x[44]*(1.0-x[46]) - k[18]*x[44];
    df[45] = k[13] - k[2]*x[45]*x[46] - k[19]*x[45];
    df[46] = k[1]*x[44]*(1.0-x[46]) - k[2]*x[45]*x[46];

    df[47] = (k[11]+k[12]*x[73])*x[13] - k[1]*x[47]*(1.0-x[49]) - k[18]*x[47];
    df[48] = k[13] - k[2]*x[48]*x[49] - k[19]*x[48];
    df[49] = k[1]*x[47]*(1.0-x[49]) - k[2]*x[48]*x[49];

    df[50] = (k[11]+k[12]*x[73])*x[16] - k[1]*x[50]*(1.0-x[52]) - k[18]*x[50];
    df[51] = k[13] - k[2]*x[51]*x[52] - k[19]*x[51];
    df[52] = k[1]*x[50]*(1.0-x[52]) - k[2]*x[51]*x[52];

  //---------- synapse 4 ----------

    df[53] = (k[11]+k[12]*x[76])*x[7] - k[1]*x[53]*(1.0-x[55]) - k[20]*x[53];
    df[54] = k[13] - k[2]*x[54]*x[55] - k[21]*x[54];
    df[55] = k[1]*x[53]*(1.0-x[55]) - k[2]*x[54]*x[55];

    df[56] = (k[11]+k[12]*x[76])*x[10] - k[1]*x[56]*(1.0-x[58]) - k[20]*x[56];
    df[57] = k[13] - k[2]*x[57]*x[58] - k[21]*x[57];
    df[58] = k[1]*x[56]*(1.0-x[58]) - k[2]*x[57]*x[58];

    df[59] = (k[11]+k[12]*x[76])*x[13] - k[1]*x[59]*(1.0-x[61]) - k[20]*x[59];
    df[60] = k[13] - k[2]*x[60]*x[61] - k[21]*x[60];
    df[61] = k[1]*x[59]*(1.0-x[61]) - k[2]*x[60]*x[61];

    df[62] = (k[11]+k[12]*x[76])*x[16] - k[1]*x[62]*(1.0-x[64]) - k[20]*x[62];
    df[63] = k[13] - k[2]*x[63]*x[64] - k[21]*x[63];
    df[64] = k[1]*x[62]*(1.0-x[64]) - k[2]*x[63]*x[64];

  //---------- output layer ----------

    df[65] = (x[17]*x[7]+x[20]*x[10]+x[23]*x[13]+x[26]*x[16])
             - k[1]*x[65]*(1.0-x[67]) - k[26]*x[65];
    df[66] = k[22] - k[2]*x[66]*x[67] - k[27]*x[66];
    df[67] = k[1]*x[65]*(1.0-x[67]) - k[2]*x[66]*x[67];

    df[68] = (x[29]*x[7]+x[32]*x[10]+x[35]*x[13]+x[38]*x[16])
             - k[1]*x[68]*(1.0-x[70]) - k[26]*x[68];
    df[69] = k[23] - k[2]*x[69]*x[70] - k[27]*x[69];
    df[70] = k[1]*x[68]*(1.0-x[70]) - k[2]*x[69]*x[70];

    df[71] = (x[41]*x[7]+x[44]*x[10]+x[47]*x[13]+x[50]*x[16])
             - k[1]*x[71]*(1.0-x[73]) - k[26]*x[71];
    df[72] = k[24] - k[2]*x[72]*x[73] - k[27]*x[72];
    df[73] = k[1]*x[71]*(1.0-x[73]) - k[2]*x[72]*x[73];

    df[74] = (x[53]*x[7]+x[56]*x[10]+x[59]*x[13]+x[62]*x[16])
             - k[1]*x[74]*(1.0-x[76]) - k[26]*x[74];
    df[75] = k[25] - k[2]*x[75]*x[76] - k[27]*x[75];
    df[76] = k[1]*x[74]*(1.0-x[76]) - k[2]*x[75]*x[76];

  /*********************** end of differential equation  ***********************/
}