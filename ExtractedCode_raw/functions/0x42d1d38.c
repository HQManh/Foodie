// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$Update
// address: 0x42d1d38
// body: available
// range: 0x42d1d38-0x42d1dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d1dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI__Update(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_095173a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bb498);
    FUN_03f5c2a4(&DAT_091bb4b0);
    DAT_095173a5 = 1;
  }
  uVar1 = UnityEngine_Input__GetKeyUp(0x1b,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) < 1) {
      return;
    }
    plVar3 = (long *)FUN_061a18a4(lVar2,DAT_091bb498);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042d1dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2b8))(plVar3,*(undefined8 *)(*plVar3 + 0x2c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

