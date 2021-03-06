#include "z_en_bom_chu.h"

#define FLAGS 0x00000010

#define THIS ((EnBomChu*)thisx)

void EnBomChu_Init(Actor* thisx, GlobalContext* globalCtx);
void EnBomChu_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnBomChu_Update(Actor* thisx, GlobalContext* globalCtx);
void EnBomChu_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Bom_Chu_InitVars = {
    ACTOR_EN_BOM_CHU,
    ACTORTYPE_EXPLOSIVES,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnBomChu),
    (ActorFunc)EnBomChu_Init,
    (ActorFunc)EnBomChu_Destroy,
    (ActorFunc)EnBomChu_Update,
    (ActorFunc)EnBomChu_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/EnBomChu_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/EnBomChu_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F75D0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F77E4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F7868.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F7944.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F79D4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F7A84.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F7E74.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F7FA0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F7FD0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F8080.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/func_808F818C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/EnBomChu_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bom_Chu_0x808F74B0/EnBomChu_Draw.asm")
