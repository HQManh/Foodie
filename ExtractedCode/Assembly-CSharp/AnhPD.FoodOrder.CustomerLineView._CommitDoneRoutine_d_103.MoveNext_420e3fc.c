// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView.<CommitDoneRoutine>d__103$$MoveNext
// address: 0x420e3fc
// body: available
// range: 0x420e3fc-0x420e53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420e538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_CustomerLineView_<CommitDoneRoutine>d__103__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_28;
  
  if ((DAT_09516c5b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aec58);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09516c5b = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  local_28 = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_0420e538;
    uVar6 = *(undefined4 *)(lVar5 + 0x160);
    uVar4 = thunk_FUN_03f9944c(DAT_0918ce90);
    UnityEngine_WaitForSeconds___ctor(uVar6,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
LAB_0420e538:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(int *)(param_1 + 0x28) == *(int *)(lVar5 + 0x164)) &&
       (uVar2 = AnhPD_FoodOrder_CustomerLineView__MapGlobalIndex
                          (lVar5,*(undefined4 *)(param_1 + 0x2c),(long)&local_28 + 4,&local_28),
       (uVar2 & 1) != 0)) {
      if ((*(long *)(lVar5 + 0x30) == 0) ||
         (plVar3 = (long *)FUN_057e0998(*(long *)(lVar5 + 0x30),local_28._4_4_,DAT_091aec58),
         plVar3 == (long *)0x0)) goto LAB_0420e538;
      uVar2 = (**(code **)(*plVar3 + 0x228))
                        (plVar3,local_28 & 0xffffffff,*(undefined8 *)(*plVar3 + 0x230));
      if (((uVar2 & 1) != 0) && (lVar5 = *(long *)(lVar5 + 0x168), lVar5 != 0)) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
    }
  }
  return iVar1 == 0;
}

