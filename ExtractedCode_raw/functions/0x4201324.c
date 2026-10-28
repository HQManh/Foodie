// rea decompile_all
// name: AnhPD.FoodOrder.Customer$$ChangeState
// address: 0x4201324
// body: available
// range: 0x4201324-0x42014eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42014e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Customer__ChangeState(long param_1,uint param_2,long param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (param_2 - 3 < 2) {
LAB_04201358:
    *(undefined8 *)(param_1 + 0xa0) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),0);
    *(undefined1 *)(param_1 + 0xa8) = 0;
    if ((param_2 < 5) && ((1 << (ulong)(param_2 & 0x1f) & 0x15U) != 0)) {
LAB_0420139c:
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
  }
  else {
    if (param_2 == 2) goto LAB_0420139c;
    if (param_2 == 0) goto LAB_04201358;
  }
  *(uint *)(param_1 + 0x40) = param_2;
  lVar3 = AnhPD_FoodOrder_Customer__StateOf(param_1,param_2);
  iVar7 = *(int *)(param_1 + 0x40);
  if (iVar7 == 4) {
    if (lVar3 == 0) goto LAB_042014e8;
    uVar4 = AnhPD_FoodOrder_CustomerState__get_IsEmpty(lVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = AnhPD_FoodOrder_Customer__StateOf(param_1,0);
    }
    iVar7 = *(int *)(param_1 + 0x40);
  }
  if (iVar7 == 2) {
    AnhPD_FoodOrder_Customer__StopVoice(param_1);
  }
  if ((param_4 & 1) != 0) {
    if (lVar3 == 0) goto LAB_042014e8;
    AnhPD_FoodOrder_Customer__PlayVoice(param_1,*(undefined8 *)(lVar3 + 0x28));
  }
  iVar7 = *(int *)(param_1 + 0x40);
  uVar2 = 1;
  if ((iVar7 == 0) || (iVar7 == 4)) {
LAB_0420148c:
    if (lVar3 == 0) {
LAB_042014e8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (iVar7 == 3) {
      if (*(char *)(param_1 + 0x98) == '\0') {
        uVar2 = 0;
        goto LAB_0420148c;
      }
      if (lVar3 == 0) goto LAB_042014e8;
      uVar2 = AnhPD_FoodOrder_CustomerState__get_HasLoop(lVar3,0);
      iVar1 = *(int *)(param_1 + 0x40);
    }
    else {
      uVar2 = 0;
      iVar1 = iVar7;
    }
    if (iVar1 != 1) goto LAB_0420148c;
    if (lVar3 == 0) goto LAB_042014e8;
    uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar3 + 0x18),0);
    if ((uVar4 & 1) != 0) {
      lVar5 = AnhPD_FoodOrder_Customer__StateOf(param_1,2);
      if (lVar5 == 0) goto LAB_042014e8;
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      goto LAB_04201494;
    }
  }
  uVar6 = 0;
LAB_04201494:
  lVar5 = param_3;
  if (iVar7 == 2) {
    lVar5 = 0;
  }
  AnhPD_FoodOrder_CustomerState__Enter
            (lVar3,*(undefined8 *)(param_1 + 0x20),lVar5,uVar2 & 1,uVar6,0);
  if ((param_3 != 0) && (iVar7 == 2)) {
                    /* WARNING: Could not recover jumptable at 0x042014d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28));
    return;
  }
  return;
}

