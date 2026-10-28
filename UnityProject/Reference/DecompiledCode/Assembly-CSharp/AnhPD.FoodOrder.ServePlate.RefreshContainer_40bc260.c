// rea decompile_all
// name: AnhPD.FoodOrder.ServePlate$$RefreshContainer
// address: 0x40bc260
// body: available
// range: 0x40bc260-0x40bc3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bc3a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bc3a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServePlate__RefreshContainer(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_09515f58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f58 = 1;
  }
  if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(*(long *)(param_1 + 0x40) + 0x18) == 0)) {
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0xa8);
    if (plVar5 == (long *)0x0) goto LAB_040bc3a4;
    uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  }
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 != 0) {
    uVar2 = *(int *)(lVar7 + 0x18) - 1;
    uVar1 = uVar3;
    if ((int)uVar2 <= (int)uVar3) {
      uVar1 = uVar2;
    }
    uVar2 = 0;
    if (-1 < (int)uVar3) {
      uVar2 = uVar1;
    }
    if (uVar2 == *(uint *)(param_1 + 0x60)) {
      return;
    }
    uVar4 = 0;
    *(uint *)(param_1 + 0x60) = uVar2;
    do {
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar4) {
        return;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_040bc3a8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar8 = *(undefined8 *)(lVar7 + uVar4 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x40);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_040bc3a8;
        lVar7 = *(long *)(lVar7 + uVar4 * 8 + 0x20);
        if (lVar7 == 0) break;
        UnityEngine_GameObject__SetActive(lVar7,uVar2 == uVar4,0);
      }
      lVar7 = *(long *)(param_1 + 0x40);
      uVar4 = uVar4 + 1;
    } while (lVar7 != 0);
  }
LAB_040bc3a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

