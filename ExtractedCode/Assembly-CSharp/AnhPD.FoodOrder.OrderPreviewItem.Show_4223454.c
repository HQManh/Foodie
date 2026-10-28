// rea decompile_all
// name: AnhPD.FoodOrder.OrderPreviewItem$$Show
// address: 0x4223454
// body: available
// range: 0x4223454-0x42235ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42235a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderPreviewItem__Show(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  int local_34;
  
  if ((DAT_09516d3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09516d3c = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_042235a8;
      UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x20),param_2,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x28);
    local_34 = param_3;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar4 = System_String__Format(DAT_09226038,uVar4,0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x558))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x560));
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0), lVar1 != 0)) {
        UnityEngine_GameObject__SetActive(lVar1,1 < param_3,0);
        return;
      }
    }
  }
LAB_042235a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

