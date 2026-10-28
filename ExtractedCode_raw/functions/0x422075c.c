// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveTwoColumnLayout$$GetStartOffset
// address: 0x422075c
// body: available
// range: 0x422075c-0x4220907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42208b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42208bc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4220904 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_AdaptiveTwoColumnLayout__GetStartOffset
                (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09516d25 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516d25 = 1;
  }
  if (param_6 == 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_042208b8;
    iVar1 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_5 + 0x20),0);
    fVar6 = (float)iVar1;
  }
  else {
    fVar6 = (float)AnhPD_FoodOrder_AdaptiveTwoColumnLayout__get_PadVertical(param_5);
  }
  plVar3 = (long *)UnityEngine_Component__get_transform(param_5,0);
  if (plVar3 == (long *)0x0) {
LAB_042208b8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*plVar3 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
  UnityEngine_RectTransform__get_rect(plVar3,0);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_6 == 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_042208b8;
    iVar1 = *(int *)(param_5 + 0x28) % 3;
    iVar2 = UnityEngine_RectOffset__get_left(*(long *)(param_5 + 0x20),0);
    fVar7 = (float)iVar2;
  }
  else {
    if (param_6 != 1) {
      thunk_FUN_03fc39d4(&DAT_09186b90);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09205438);
      System_IndexOutOfRangeException___ctor(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091debc8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    iVar1 = *(int *)(param_5 + 0x28) / 3;
    fVar7 = (float)AnhPD_FoodOrder_AdaptiveTwoColumnLayout__get_PadTop(param_5);
    param_3 = param_4;
  }
  return fVar7 + (param_3 - (fVar6 + param_1)) * ((float)iVar1 / 2.0);
}

