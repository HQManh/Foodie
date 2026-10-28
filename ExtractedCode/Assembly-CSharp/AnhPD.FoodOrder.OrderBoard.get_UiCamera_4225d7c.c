// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$get_UiCamera
// address: 0x4225d7c
// body: available
// range: 0x4225d7c-0x4225f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4225f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_OrderBoard__get_UiCamera(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((DAT_09516d5c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d5c = 1;
  }
  if (*(char *)(param_1 + 0x78) != '\0') goto LAB_04225f24;
  lVar3 = FUN_04a6a6d8(param_1,DAT_091c5630);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) goto LAB_04225f40;
    lVar3 = UnityEngine_Canvas__get_rootCanvas(lVar3,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar4 & 1) == 0) {
LAB_04225e98:
    uVar5 = UnityEngine_Camera__get_main(0);
  }
  else {
    if (lVar3 == 0) goto LAB_04225f40;
    iVar2 = UnityEngine_Canvas__get_renderMode(lVar3,0);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = UnityEngine_Canvas__get_worldCamera(lVar3,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar4 & 1) == 0) goto LAB_04225e98;
      uVar5 = UnityEngine_Canvas__get_worldCamera(lVar3,0);
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0x70);
  *puVar6 = uVar5;
  thunk_FUN_03f5d7b8(puVar6);
  uVar5 = *puVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
    if ((uVar4 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (lVar3 == 0) {
LAB_04225f40:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = UnityEngine_Canvas__get_renderMode(lVar3,0);
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = true;
  }
  *(bool *)(param_1 + 0x78) = bVar1;
LAB_04225f24:
  return *(undefined8 *)(param_1 + 0x70);
}

