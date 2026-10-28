// rea decompile_all
// name: CakeOrder.Home.UIPopupToolUpgrade$$OnDestroy
// address: 0x434b308
// body: available
// range: 0x434b308-0x434b4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434b4ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434b4f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPopupToolUpgrade__OnDestroy(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_09517794 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a06a0);
    FUN_03f5c2a4(&DAT_091a6a80);
    FUN_03f5c2a4(&DAT_091a6a88);
    FUN_03f5c2a4(&DAT_091a6a90);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba248);
    FUN_03f5c2a4(&DAT_091dd020);
    FUN_03f5c2a4(&DAT_091bea60);
    DAT_09517794 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if ((*(long *)(param_1 + 0x100) != 0) &&
     (lVar1 = FUN_06fd8278(*(long *)(param_1 + 0x100),DAT_091a06a0), lVar1 != 0)) {
    FUN_06544014(&local_58,lVar1,DAT_091bea60);
    while (uVar2 = FUN_072759a8(&local_58,DAT_091a6a88), (uVar2 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar3 = (long *)(local_48 + 0x28);
      if (*plVar3 != 0) {
        FUN_060da79c(*plVar3,DAT_091ba248);
        *plVar3 = 0;
        thunk_FUN_03f5d7b8(plVar3,0);
      }
    }
    FUN_072759a4(&local_58,DAT_091a6a80);
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0xf8);
      uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar4,param_1,DAT_091dd020,0);
      if (lVar1 == 0) goto LAB_0434b4f0;
      CakeOrder_Home_HomeSelectionControl__remove_onSelectedMapChanged(lVar1,uVar4,0);
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      FUN_060da79c(*(long *)(param_1 + 0x110),DAT_091ba248);
      *(undefined8 *)(param_1 + 0x110) = 0;
      thunk_FUN_03f5d7b8(param_1 + 0x110,0);
    }
    return;
  }
LAB_0434b4f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

