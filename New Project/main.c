#include <stdio.h>
#include <string.h>


int main()
{
  //if( strcmp(cmd,"Guard Extender FW") == 0 ){
    char msg[]={"Guard Extender FW version: 2.0"};
    //char msg[]={"ERROR"};
    char *cmd;
    cmd=msg;
    *(cmd+17)=0;
    printf("%s\nv=%d\n",cmd, strcmp(cmd,"Guard Extender FW"));

    return 0;
}

