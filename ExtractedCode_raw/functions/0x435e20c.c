// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyLevelSelectItem$$SetUp
// address: 0x435e20c
// body: available
// range: 0x435e20c-0x435e387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435e36c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435e384 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyLevelSelectItem__SetUp
               (long param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_34;
  
  local_34 = param_3;
  if ((DAT_0951781f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951781f = 1;
  }
  lVar3 = DAT_09188ad0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x28);
    uVar6 = System_Int32__ToString(&local_34,0);
    if (plVar4 == (long *)0x0) goto LAB_0435e36c;
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x560));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0435e36c;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x38),(param_4 ^ 0xffffffff) & 1,0);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = 4;
  do {
    uVar1 = lVar5 - 4;
    if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar1) {
      return;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_0435e384:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar6 = *(undefined8 *)(lVar3 + lVar5 * 8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_0435e384;
      lVar3 = *(long *)(lVar3 + lVar5 * 8);
      if (lVar3 == 0) break;
      UnityEngine_GameObject__SetActive(lVar3,(long)uVar1 < (long)param_5,0);
    }
    lVar3 = *(long *)(param_1 + 0x30);
    lVar5 = lVar5 + 1;
  } while (lVar3 != 0);
LAB_0435e36c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

