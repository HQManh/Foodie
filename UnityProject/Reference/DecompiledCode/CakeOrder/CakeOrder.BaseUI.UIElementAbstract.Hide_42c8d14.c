// rea decompile_all
// name: CakeOrder.BaseUI.UIElementAbstract$$Hide
// address: 0x42c8d14
// body: available
// range: 0x42c8d14-0x42c8e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c8e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIElementAbstract__Hide(undefined4 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_095173e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091f12f0);
    FUN_03f5c2a4(&DAT_09195558);
    DAT_095173e2 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195558);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = (long)param_2;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_3);
    if ((int)param_2[5] != 2) {
      *(undefined4 *)(param_2 + 5) = 2;
      (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar2,lVar1,DAT_091f12f0,0);
      (**(code **)(*param_2 + 0x1a8))(param_1,param_2,uVar2,*(undefined8 *)(*param_2 + 0x1b0));
      lVar1 = param_2[6];
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x042c8e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

