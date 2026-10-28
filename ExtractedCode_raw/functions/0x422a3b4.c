// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard.<LoadOrderRoutine>d__43$$MoveNext
// address: 0x422a3b4
// body: available
// range: 0x422a3b4-0x422a62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422a624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422a628 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_OrderBoard_<LoadOrderRoutine>d__43__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [72];
  
  if ((DAT_09516d7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09516d7f = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 == 0) || (lVar5 = *(long *)(lVar7 + 0x20), lVar5 == 0)) goto LAB_0422a624;
    if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x34)) {
LAB_0422a628:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x34) * 8 + 0x20) == 0) goto LAB_0422a624;
    AnhPD_FoodOrder_FOrderItem__Appear();
    lVar5 = *(long *)(lVar7 + 0x20);
    if (lVar5 == 0) goto LAB_0422a624;
    uVar2 = *(uint *)(param_1 + 0x34);
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0422a628;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0422a624;
    lVar5 = *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
    FUN_057eeec4(auStack_78,*(long *)(param_1 + 0x28),(long)(int)uVar2,DAT_091aed50);
    if (lVar5 == 0) goto LAB_0422a624;
    memcpy((void *)(lVar5 + 0x50),auStack_78,0x48);
    thunk_FUN_03f5d7b8(lVar5 + 0x50,0);
    AnhPD_FoodOrder_FOrderItem__DisplayOrder(lVar5);
    lVar5 = *(long *)(lVar7 + 0x20);
    if (lVar5 == 0) goto LAB_0422a624;
    if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x34)) goto LAB_0422a628;
    lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x34) * 8 + 0x20);
    if ((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_transform(lVar5,0), lVar5 == 0))
    goto LAB_0422a624;
    plVar3 = (long *)UnityEngine_Transform__GetParent(lVar5,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 == DAT_09189c98)) {
      if (*(int *)(DAT_09187680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(plVar3,0);
    }
    lVar5 = *(long *)(lVar7 + 0x20);
    if (lVar5 == 0) goto LAB_0422a624;
    uVar2 = *(uint *)(param_1 + 0x34);
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0422a628;
    lVar5 = *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
    if ((int)uVar2 < 0) {
LAB_0422a58c:
      uVar8 = 0;
    }
    else {
      lVar6 = *(long *)(lVar7 + 0x98);
      if (lVar6 == 0) goto LAB_0422a624;
      if (*(int *)(lVar6 + 0x18) <= (int)uVar2) goto LAB_0422a58c;
      uVar8 = *(undefined4 *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
    }
    if (lVar5 == 0) goto LAB_0422a624;
    AnhPD_FoodOrder_FOrderItem__ApplyLook(lVar5,uVar8,0);
    iVar1 = *(int *)(param_1 + 0x34) + 1;
    *(int *)(param_1 + 0x34) = iVar1;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar1 = 0;
  }
  if (iVar1 < *(int *)(param_1 + 0x30)) {
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 0x28);
      uVar4 = thunk_FUN_03f9944c(DAT_0918ce90);
      UnityEngine_WaitForSeconds___ctor(uVar8,uVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x80) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x80),0);
    return 0;
  }
LAB_0422a624:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

