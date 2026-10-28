// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass53_2$$<ReleaseQueueKey>b__4
// address: 0x44db3dc
// body: available
// range: 0x44db3dc-0x44db567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44db550 to 0x44db574 CookOrder.Cooking.Implement.IngCellDisplay$$Apply (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44db564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass53_2__<ReleaseQueueKey>b__4
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09518327 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9420);
    FUN_03f5c2a4(&DAT_091786a0);
    FUN_03f5c2a4(&DAT_091a82d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7128);
    DAT_09518327 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if ((((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) &&
      (lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 0x18), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0xd0), lVar3 != 0)) {
    FUN_053d7700(lVar3,*(undefined4 *)(lVar2 + 0x10),DAT_091a82d8);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar2 != 0)) {
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x18);
        if (((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) ||
           (lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 0x18), lVar3 == 0)) goto LAB_044db564;
        lVar3 = *(long *)(lVar3 + 0x3a0);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x48);
          lVar3 = *(long *)(lVar2 + 0x20);
          if (lVar3 == 0) {
            lVar3 = thunk_FUN_03f9944c(DAT_091786a0);
            FUN_05322d94(lVar3,lVar2,DAT_091e7128,0);
            *(long *)(lVar2 + 0x20) = lVar3;
            thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),lVar3);
          }
          uVar1 = FUN_04ab6f28(uVar4,lVar3,DAT_091c9420);
          if ((uVar1 & 1) != 0) {
            if (*(long *)(param_1 + 0x10) != 0) {
              CookOrder_Cooking_Implement_IngCellDisplay__Apply(*(long *)(param_1 + 0x10),0,0);
              return;
            }
            goto LAB_044db564;
          }
        }
      }
      return;
    }
  }
LAB_044db564:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

