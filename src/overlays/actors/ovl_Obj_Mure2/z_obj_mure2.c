#include "z_obj_mure2.h"

#define FLAGS 0x00000000

#define THIS ((ObjMure2*)thisx)

void ObjMure2_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjMure2_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Mure2_InitVars = {
    ACTOR_OBJ_MURE2,
    ACTORTYPE_PROP,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(ObjMure2),
    (ActorFunc)ObjMure2_Init,
    (ActorFunc)func_800BDFB0,
    (ActorFunc)ObjMure2_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_80960CF0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_80960E0C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_80960F0C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_80961018.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_8096104C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_809611BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_809612BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/ObjMure2_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_809613B0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_809613C4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_809613E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_809613FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_8096147C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/func_80961490.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Mure2_0x80960CF0/ObjMure2_Update.asm")
