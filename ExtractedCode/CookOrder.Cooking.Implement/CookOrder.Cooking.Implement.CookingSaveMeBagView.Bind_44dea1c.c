// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingSaveMeBagView$$Bind
// address: 0x44dea1c
// body: available
// range: 0x44dea1c-0x44debef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44debd8 to 0x8778dc0 UnityEngine.TextMesh$$set_text (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44debec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingSaveMeBagView__Bind
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_09518346 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5610);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09221d20);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09518346 = 1;
  }
  *(undefined8 *)(param_4 + 0x68) = param_5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x68),param_5);
  plVar3 = (long *)(param_4 + 0x20);
  lVar4 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar1 & 1) == 0) {
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_044debec;
    lVar4 = UnityEngine_Transform__Find(lVar4,DAT_09221d20,0);
    *plVar3 = lVar4;
    thunk_FUN_03f5d7b8(plVar3,lVar4);
  }
  plVar5 = (long *)(param_4 + 0x28);
  lVar4 = *plVar5;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_04a6a4f8(param_4,1,DAT_091c5610);
    *(undefined8 *)(param_4 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8(plVar5,uVar2);
  }
  lVar4 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = UnityEngine_Component__get_transform(param_4,0);
    *(undefined8 *)(param_4 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8(plVar3,uVar2);
  }
  if (*plVar3 != 0) {
    uVar6 = UnityEngine_Transform__get_localPosition(*plVar3,0);
    lVar4 = DAT_09188ad0;
    *(undefined4 *)(param_4 + 0x50) = uVar6;
    *(undefined4 *)(param_4 + 0x54) = param_2;
    *(undefined4 *)(param_4 + 0x58) = param_3;
    uVar2 = *(undefined8 *)(param_4 + 0x28);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*plVar5 != 0) {
      UnityEngine_TextMesh__set_text(*plVar5,DAT_091f95f0,0);
      return;
    }
  }
LAB_044debec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

