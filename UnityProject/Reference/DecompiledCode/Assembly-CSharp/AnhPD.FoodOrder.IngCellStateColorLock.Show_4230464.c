// rea decompile_all
// name: AnhPD.FoodOrder.IngCellStateColorLock$$Show
// address: 0x4230464
// body: available
// range: 0x4230464-0x42305d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42305cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42305d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellStateColorLock__Show(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  int local_34;
  
  local_34 = param_3;
  if ((DAT_09516dc1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516dc1 = 1;
  }
  uVar4 = AnhPD_FoodOrder_IngCellDisplayState__get_IsShown(param_1);
  AnhPD_FoodOrder_IngCellDisplayState__SetShown(param_1,1);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x30),0), lVar6 == 0))
    goto LAB_042305cc;
    UnityEngine_GameObject__SetActive(lVar6,1 < param_3,0);
    if (1 < param_3) {
      plVar8 = *(long **)(param_1 + 0x30);
      uVar9 = System_Int32__ToString(&local_34,0);
      if (plVar8 == (long *)0x0) goto LAB_042305cc;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x560));
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((((uVar5 & 1) != 0) && (lVar6 = *(long *)(param_1 + 0x28), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x18) != 0)) {
    uVar2 = param_2 - 1;
    uVar7 = (uint)*(long *)(lVar6 + 0x18);
    uVar3 = uVar7 - 1;
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    uVar3 = 0;
    if (-1 < (int)uVar2) {
      uVar3 = uVar1;
    }
    if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_042305cc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_SpriteRenderer__set_sprite
              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20),0);
  }
  if ((uVar4 & 1) == 0) {
    AnhPD_FoodOrder_IngCellStateColorLock__ResetShackle(param_1);
  }
  return;
}

