// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$ComposeRandomDish
// address: 0x417356c
// body: available
// range: 0x417356c-0x41737df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41737dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_Autoplay_CookingBotBridge__ComposeRandomDish(long param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  if ((DAT_095165e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f688);
    FUN_03f5c2a4(&DAT_0919f690);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091e6a58);
    FUN_03f5c2a4(&DAT_0918ee70);
    FUN_03f5c2a4(&DAT_091f6da8);
    FUN_03f5c2a4(&DAT_09213b88);
    DAT_095165e5 = 1;
  }
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918ee70);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) {
LAB_041737dc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  memmove((void *)(lVar3 + 0x10),param_2,0x48);
  thunk_FUN_03f5d7b8(lVar3 + 0x10,0);
  uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar3 + 0x40),0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_041737dc;
    uVar4 = FUN_053ec72c(*(long *)(param_1 + 0x50),*(undefined8 *)(lVar3 + 0x40),DAT_091a86b8);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_041737dc;
      uVar4 = FUN_06fd9fbc(*(long *)(param_1 + 0x58),*(undefined8 *)(lVar3 + 0x40),&local_38,
                           DAT_0919f688);
      lVar7 = local_38;
      if ((uVar4 & 1) == 0) {
        uVar4 = CakeOrder_InGame_OrderRecipeCodec__TryDecode
                          (*(undefined8 *)(lVar3 + 0x40),&local_50,0);
        lVar7 = 0;
        if ((uVar4 & 1) != 0) {
          uVar4 = CakeOrder_InGame_OrderRecipe__get_IsValid(&local_50,0);
          uVar5 = local_48;
          lVar7 = 0;
          if ((uVar4 & 1) != 0) {
            lVar7 = *(long *)(param_1 + 0x18);
            if (lVar7 == 0) goto LAB_041737dc;
            uVar1 = *(undefined8 *)(lVar7 + 0x20);
            uVar2 = *(undefined8 *)(lVar7 + 0x28);
            uVar6 = thunk_FUN_03f9944c(DAT_09174980);
            FUN_070a8c30(uVar6,lVar3,DAT_091e6a58,0);
            lVar7 = CakeOrder_InGame_CustomerScheduleBuilder__ComposeDishFromPieces
                              (uVar1,uVar2,uVar5,uVar6,0);
            if (lVar7 == 0) {
              uVar5 = System_String__Concat
                                (DAT_09213b88,*(undefined8 *)(lVar3 + 0x40),DAT_091f6da8,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogWarning(uVar5,0);
              lVar7 = 0;
            }
          }
        }
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_041737dc;
        FUN_06fd8440(*(long *)(param_1 + 0x58),*(undefined8 *)(lVar3 + 0x40),lVar7,DAT_0919f690);
      }
      if (lVar7 != 0) {
        uVar5 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__BuildDish(param_1,lVar7);
        return uVar5;
      }
    }
  }
  return 0;
}

