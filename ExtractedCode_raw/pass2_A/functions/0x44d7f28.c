// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass173_0$$<Refresh>b__8
// address: 0x44d7f28
// body: available
// range: 0x44d7f28-0x44d804b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d8048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_0__<Refresh>b__8
               (long param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  ushort local_24 [2];
  
  if ((DAT_09518309 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd8d8);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6a60);
    DAT_09518309 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = FUN_053e1824(*(long *)(param_1 + 0x18),*param_2,DAT_091a8318);
    if (((uVar3 & 1) == 0) && (*(int *)((long)param_2 + 0xc) == 0)) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e0), lVar4 == 0)) goto LAB_044d8048;
      lVar4 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                        (lVar4,*(undefined4 *)(param_2 + 1),0);
      bVar2 = 0;
      if (lVar4 != 0) {
        if ((*(long *)(lVar4 + 0x18) == 0) ||
           (lVar4 = FUN_04b7c324(*(long *)(lVar4 + 0x18),DAT_091cd8d8), lVar4 == 0)) {
          bVar1 = false;
          bVar5 = false;
        }
        else {
          local_24[0] = 0;
          FUN_05c290f8(local_24,*(undefined1 *)(lVar4 + 0x20),DAT_091b6a48);
          bVar5 = 0xff < local_24[0];
          bVar1 = (local_24[0] & 0xff) != 0;
        }
        bVar2 = bVar1 & bVar5;
      }
    }
    else {
      bVar2 = 0;
    }
    return bVar2;
  }
LAB_044d8048:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

