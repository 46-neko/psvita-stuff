#include<stdio.h>
#include<psp2/kernel/processmgr.h>
#include<psp2/kernel/threadmgr.h>
#include<psp2/ctrl.h>
#include "common/debugScreen.h"

int main(int argc, char *argv[]){
    psvDebugScreenInit(); // Initiates Debug Screen
    psvDebugScreenPrintf("こんにちは世界!\n"); // Write something
    psvDebugScreenPrintf("Made by k1tsunee\n"); // lol
    psvDebugScreenPrintf("Press O to quit.\n");

    SceCtrlData ctrl;
    do{
        sceCtrlPeekBufferPositive(0, &ctrl, 1);
    }while(ctrl.buttons != SCE_CTRL_CIRCLE);
    
    sceKernelExitProcess(0); // Exit with code 0 (success)
    return 0;
}
