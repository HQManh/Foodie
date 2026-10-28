// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineMixer$$OnSlotFilled
// address: 0x410dd1c
// body: available
// range: 0x410dd1c-0x410de13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410dd98 to 0x410de14 AnhPD.FoodOrder.GroupViewSpineMixer$$Hold (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410de0c to 0x410df18 AnhPD.FoodOrder.GroupViewSpineMixer$$PlayThenLoop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x410de10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineMixer__OnSlotFilled
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_GameObject__SetActive(lVar3,1,0);
  uVar4 = System_String__op_Equality(param_3,*(undefined8 *)(param_1 + 0x28),0);
  if ((uVar4 & 1) == 0) {
    AnhPD_FoodOrder_GroupViewSpineMixer__ApplySkin(param_1,param_3);
    *(undefined1 *)(param_1 + 0x78) = 1;
    lVar3 = 0x30;
    if (*(char *)(param_1 + 0x79) != '\0') {
      lVar3 = 0x50;
    }
    uVar5 = *(undefined8 *)(param_1 + lVar3);
    if (*(char *)(param_1 + 0x79) == '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      uVar6 = 0;
    }
    goto LAB_0410de00;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  iVar2 = UnityEngine_Time__get_frameCount(0);
  if ((iVar1 == iVar2) && (*(char *)(param_1 + 0x80) != '\0')) {
    *(undefined1 *)(param_1 + 0x79) = 1;
    if (*(char *)(param_1 + 0x78) == '\0') {
      AnhPD_FoodOrder_GroupViewSpineMixer__Hold
                (param_1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
      return;
    }
LAB_0410dde0:
    uVar6 = 0;
    puVar7 = (undefined8 *)(param_1 + 0x58);
  }
  else {
    *(undefined1 *)(param_1 + 0x79) = 1;
    if (*(char *)(param_1 + 0x78) != '\0') goto LAB_0410dde0;
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puVar7 = (undefined8 *)(param_1 + 0x40);
  }
  uVar5 = *puVar7;
LAB_0410de00:
  AnhPD_FoodOrder_GroupViewSpineMixer__PlayThenLoop(param_1,uVar5,uVar6);
  return;
}

