#ifndef SNDPGMMSG_I
#define SNDPGMMSG_I
#include "qmhsndpm.h"
#define ESCAPE  "*ESCAPE   "
#define INFO    "*INFO     "
#define DIAG    "*DIAG     "
#define UTLMSG  "UTLMSG    *LIBL     "
#define USRMSG  "USRMSG    *LIBL     "
#define QCPFMSG "QCPFMSG   *LIBL     "
void sndpgmmsg(PUCHAR Msgid,PUCHAR Msgf,PUCHAR Type, LONG stack, PUCHAR Msgdta, ...);
void joblog (PUCHAR text, ...);
#endif