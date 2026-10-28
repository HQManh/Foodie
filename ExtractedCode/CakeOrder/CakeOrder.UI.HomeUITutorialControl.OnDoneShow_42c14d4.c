// rea decompile_all
// name: CakeOrder.UI.HomeUITutorialControl$$OnDoneShow
// address: 0x42c14d4
// body: available
// range: 0x42c14d4-0x42c15ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c15ec to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c15fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_HomeUITutorialControl__OnDoneShow(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((DAT_09517324 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091ceab8);
    FUN_03f5c2a4(&DAT_091ceac0);
    DAT_09517324 = 1;
  }
  CakeOrder_BaseUI_UIElementAbstract__OnDoneShow(param_1,0);
  cVar1 = DAT_09517348;
  if (*(int *)(param_1 + 0xe0) == 2) {
    plVar4 = *(long **)(param_1 + 0xd0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    puVar3 = &DAT_091ceac0;
  }
  else {
    if (*(int *)(param_1 + 0xe0) != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 0xe4) = 1;
    if (cVar1 == '\0') {
      FUN_03f5c2a4(&DAT_09185160);
      DAT_09517348 = '\x01';
    }
    uVar2 = DAT_09180e78;
    plVar4 = *(long **)(param_1 + 200);
    **(undefined1 **)(DAT_09185160 + 0xb8) = 1;
    uVar2 = thunk_FUN_03f9944c(uVar2);
    puVar3 = &DAT_091ceab8;
  }
  System_Action___ctor(uVar2,param_1,*puVar3,0);
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 400));
    UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

