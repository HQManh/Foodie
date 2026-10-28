// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$SetBlockAllBooster
// address: 0x429f334
// body: available
// range: 0x429f334-0x429f42f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429f428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429f42c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__SetBlockAllBooster
               (long param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  if ((DAT_09517225 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517225 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x160);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_0429f428;
        uVar3 = *(undefined8 *)(lVar6 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar2 & 1) != 0) {
          lVar6 = *(long *)(lVar6 + 0x18);
          if ((param_3 & 1) == 0) {
            if ((lVar6 == 0) || (*(long *)(lVar6 + 0x70) == 0)) goto LAB_0429f428;
            Utilities_BoolModifierWithRegisteredSource__RemoveModifier
                      (*(long *)(lVar6 + 0x70),param_2,0);
          }
          else {
            if ((lVar6 == 0) || (*(long *)(lVar6 + 0x70) == 0)) goto LAB_0429f428;
            Utilities_BoolModifierWithRegisteredSource__AddModifier
                      (*(long *)(lVar6 + 0x70),param_2,0);
          }
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_0429f428:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

