// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$TryClaimSequence
// address: 0x41e39c0
// body: available
// range: 0x41e39c0-0x41e3ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e3abc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e3ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_AutoCompleteOrderFx__TryClaimSequence
          (long param_1,long param_2,long param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  *param_4 = 0xffffffff;
  uVar4 = System_String__IsNullOrEmpty(param_3,0);
  if ((uVar4 & 1) == 0) {
    if ((param_3 == 0) || (param_1 == 0)) {
LAB_041e3ac0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = *(int *)(param_3 + 0x10);
    if (iVar3 <= *(int *)(param_1 + 0x10)) {
      uVar6 = 0;
      do {
        if (param_2 == 0) goto LAB_041e3ac0;
        if (*(uint *)(param_2 + 0x18) <= uVar6) goto LAB_041e3abc;
        if ((*(char *)(param_2 + (int)uVar6 + 0x20) == '\0') &&
           (iVar3 = System_String__CompareOrdinal(param_1,uVar6,param_3,0,iVar3,0), iVar3 == 0)) {
          uVar4 = (ulong)*(uint *)(param_3 + 0x10);
          if (0 < (int)*(uint *)(param_3 + 0x10)) {
            uVar2 = 0;
            if (uVar6 <= *(uint *)(param_2 + 0x18)) {
              uVar2 = *(uint *)(param_2 + 0x18) - uVar6;
            }
            uVar5 = (ulong)uVar2;
            uVar2 = uVar6;
            do {
              if (uVar5 == 0) {
LAB_041e3abc:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar1 = (long)(int)uVar2;
              uVar4 = uVar4 - 1;
              uVar2 = uVar2 + 1;
              uVar5 = uVar5 - 1;
              *(undefined1 *)(param_2 + lVar1 + 0x20) = 1;
            } while (uVar4 != 0);
          }
          *param_4 = uVar6;
          return 1;
        }
        iVar3 = *(int *)(param_3 + 0x10);
        uVar6 = uVar6 + 1;
      } while ((int)(iVar3 + uVar6) <= *(int *)(param_1 + 0x10));
    }
  }
  return 0;
}

