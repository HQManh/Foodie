// rea decompile_all
// name: CakeOrder.PopupMinigame.MinisceneControlCookOrder$$OnDestroy
// address: 0x43797f0
// body: available
// range: 0x43797f0-0x437997b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4379964 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4379978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_MinisceneControlCookOrder__OnDestroy(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0951792c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_0951792c = 1;
  }
  FUN_05a8f270(param_1,DAT_091b4c68);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(DAT_09189078 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Physics2D__set_simulationMode(uVar1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_04379978;
    UnityEngine_Camera__set_targetTexture(*(long *)(param_1 + 0x20),0,0);
  }
  plVar3 = (long *)(param_1 + 0x38);
  lVar5 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar4 = UnityEngine_RenderTexture__GetActive(0);
  lVar5 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,lVar5,0);
  if ((uVar2 & 1) != 0) {
    UnityEngine_RenderTexture__set_active(0,0);
  }
  if (*plVar3 != 0) {
    UnityEngine_RenderTexture__Release(*plVar3,0);
    lVar5 = *plVar3;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Object__Destroy(lVar5,0);
    *plVar3 = 0;
    thunk_FUN_03f5d7b8(plVar3,0);
    return;
  }
LAB_04379978:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

