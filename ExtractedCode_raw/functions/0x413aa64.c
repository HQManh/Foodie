// rea decompile_all
// name: AnhPD.FoodOrder.CocaDisplay$$Clear
// address: 0x413aa64
// body: available
// range: 0x413aa64-0x413ab63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413ab48 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x413ab5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ab60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CocaDisplay__Clear(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_0951638c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951638c = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    DG_Tweening_TweenExtensions__Complete(*(long *)(param_1 + 0x38),0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x20),0,0);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar2 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
          if (lVar2 == 0) goto LAB_0413ab5c;
          UnityEngine_GameObject__SetActive(lVar2,0,0);
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),0,0);
        return;
      }
    }
  }
LAB_0413ab5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

