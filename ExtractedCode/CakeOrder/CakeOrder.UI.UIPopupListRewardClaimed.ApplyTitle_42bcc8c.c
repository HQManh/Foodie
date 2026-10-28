// rea decompile_all
// name: CakeOrder.UI.UIPopupListRewardClaimed$$ApplyTitle
// address: 0x42bcc8c
// body: available
// range: 0x42bcc8c-0x42bcf53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bcf50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupListRewardClaimed__ApplyTitle(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_095172fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09221b68);
    FUN_03f5c2a4(&DAT_09223f98);
    FUN_03f5c2a4(&DAT_09223f90);
    FUN_03f5c2a4(&DAT_09211650);
    DAT_095172fb = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x128);
    uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x130),0);
    if ((uVar2 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x130);
      uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x138),0);
      uVar5 = DAT_09211650;
      lVar1 = 0x130;
      if ((uVar2 & 1) == 0) {
        lVar1 = 0x138;
      }
      uVar7 = *(undefined8 *)(param_1 + lVar1);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = CakeOrder_Localization_CakeLocalization__Get(uVar5,uVar6,uVar7,0);
    }
    else {
      puVar4 = &DAT_09223f98;
      if ((param_2 != 0) && (*(char *)(param_2 + 0x28) != '\0')) {
        puVar4 = &DAT_09223f90;
      }
      uVar6 = *puVar4;
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = CakeOrder_Localization_CakeLocalization__Tr(uVar6,0);
    }
    if (plVar3 == (long *)0x0) goto LAB_042bcf50;
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x560));
  }
  uVar6 = *(undefined8 *)(param_1 + 0x140);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x160);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    uVar6 = 0;
    if ((uVar2 & 1) != 0) goto LAB_042bce54;
  }
  else {
LAB_042bce54:
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x30);
    }
    uVar2 = System_String__IsNullOrEmpty(uVar6,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09221b68,0);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x140);
    if (plVar3 == (long *)0x0) goto LAB_042bcf50;
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x560));
  }
  uVar5 = *(undefined8 *)(param_1 + 0x160);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x160);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042bcf38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x560));
    return;
  }
LAB_042bcf50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

