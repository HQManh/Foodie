// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamCreamFormDisplay.Form$$CanShow
// address: 0x414b6f8
// body: available
// range: 0x414b6f8-0x414b82b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414b828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IceCreamCreamFormDisplay_Form__CanShow(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((DAT_09516447 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2fd8);
    FUN_03f5c2a4(&DAT_091b2fe0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516447 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0414b828;
    uVar2 = AnhPD_FoodOrder_IceCreamDecorLayout__CanShow(*(long *)(param_1 + 0x20),param_2);
    if ((uVar2 & 1) != 0) {
      return true;
    }
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 <= iVar4) {
        return iVar4 < iVar1;
      }
      lVar3 = FUN_057e0998(lVar3,iVar4,DAT_091b2fe0);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == param_2)) {
        uVar5 = *(undefined8 *)(lVar3 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
        if (((uVar2 & 1) != 0) && (*(char *)(lVar3 + 0x20) == '\0')) {
          return iVar4 < iVar1;
        }
      }
      lVar3 = *(long *)(param_1 + 0x18);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
LAB_0414b828:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

