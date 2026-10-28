// rea decompile_all
// name: AnhPD.Home.UIHomeMapSection$$OnDoneShow
// address: 0x41d3d1c
// body: available
// range: 0x41d3d1c-0x41d3e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d3e00 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41d3e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Home_UIHomeMapSection__OnDoneShow(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int local_24;
  
  if ((DAT_09516a4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09226488);
    FUN_03f5c2a4(&DAT_091f7250);
    DAT_09516a4d = 1;
  }
  local_24 = 0;
  CakeOrder_BaseUI_UIElementAbstract__OnDoneShow(param_1,0);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xe0) = 1;
  iVar1 = AnhPD_Home_UIHomeMapSection__GetBuildingPercent(param_1);
  local_24 = iVar1;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x78),0), lVar2 != 0)) {
    uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
    plVar5 = *(long **)(param_1 + 0x78);
    if ((uVar3 & 1) != 0) {
      uVar4 = Utilities_MonoBehaviourExtension__PlayTextTransitionUnscaledTime
                        ((float)iVar1 / 100.0,0,plVar5,DAT_09226488,0,iVar1,0,0);
      *(undefined8 *)(param_1 + 0xd8) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),uVar4);
      return;
    }
    uVar4 = System_Int32__ToString(&local_24,0);
    uVar4 = System_String__Concat(uVar4,DAT_091f7250,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

