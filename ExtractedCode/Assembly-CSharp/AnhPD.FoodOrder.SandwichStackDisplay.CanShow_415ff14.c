// rea decompile_all
// name: AnhPD.FoodOrder.SandwichStackDisplay$$CanShow
// address: 0x415ff14
// body: available
// range: 0x415ff14-0x416003b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4160030 to 0x8661ad8 UnityEngine.Object$$op_Implicit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4160034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4160038 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SandwichStackDisplay__CanShow(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_0951652a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951652a = 1;
  }
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar4,0);
      return uVar4;
    }
LAB_0415fff4:
    uVar4 = 1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_04160034:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_04160034;
        if (*(int *)(lVar3 + 0x18) == param_2) {
          uVar4 = *(undefined8 *)(lVar3 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
          if ((uVar2 & 1) != 0) goto LAB_0415fff4;
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

