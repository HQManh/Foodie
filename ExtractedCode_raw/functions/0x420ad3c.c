// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$OnDestroy
// address: 0x420ad3c
// body: available
// range: 0x420ad3c-0x420afa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420af84 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420afa0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420afa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__OnDestroy(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_09516c32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c6f58);
    FUN_03f5c2a4(&DAT_091c6f60);
    FUN_03f5c2a4(&DAT_091c6f68);
    FUN_03f5c2a4(&DAT_091c6f70);
    DAT_09516c32 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x28) + 0x58);
    lVar4 = *plVar3;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091c6f58,0);
    plVar2 = (long *)System_Delegate__Remove(lVar4,uVar1,0);
    lVar4 = DAT_09180e78;
    if (plVar2 == (long *)0x0) {
      *plVar3 = 0;
    }
    else if ((*plVar2 != DAT_09180e78) || (*plVar3 = (long)plVar2, *plVar2 != lVar4))
    goto LAB_0420af80;
    thunk_FUN_03f5d7b8(plVar3,plVar2);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0420afa4;
    plVar3 = (long *)(*(long *)(param_1 + 0x28) + 0x60);
    lVar4 = *plVar3;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091c6f68,0);
    plVar2 = (long *)System_Delegate__Remove(lVar4,uVar1,0);
    lVar4 = DAT_09180e78;
    if (plVar2 == (long *)0x0) {
      *plVar3 = 0;
    }
    else if ((*plVar2 != DAT_09180e78) || (*plVar3 = (long)plVar2, *plVar2 != lVar4))
    goto LAB_0420af80;
    thunk_FUN_03f5d7b8(plVar3,plVar2);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0420afa4;
    plVar3 = (long *)(*(long *)(param_1 + 0x28) + 0x68);
    lVar4 = *plVar3;
    uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar1,param_1,DAT_091c6f60,0);
    plVar2 = (long *)System_Delegate__Remove(lVar4,uVar1,0);
    lVar4 = DAT_09180e78;
    if (plVar2 == (long *)0x0) {
      *plVar3 = 0;
    }
    else if ((*plVar2 != DAT_09180e78) || (*plVar3 = (long)plVar2, *plVar2 != lVar4))
    goto LAB_0420af80;
    thunk_FUN_03f5d7b8(plVar3,plVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      plVar3 = (long *)(*(long *)(param_1 + 0x28) + 0x70);
      lVar4 = *plVar3;
      uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar1,param_1,DAT_091c6f70,0);
      plVar2 = (long *)System_Delegate__Remove(lVar4,uVar1,0);
      lVar4 = DAT_09180e78;
      if (plVar2 == (long *)0x0) {
        *plVar3 = 0;
      }
      else if ((*plVar2 != DAT_09180e78) || (*plVar3 = (long)plVar2, *plVar2 != lVar4)) {
LAB_0420af80:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar2);
      }
      thunk_FUN_03f5d7b8(plVar3,plVar2);
      return;
    }
  }
LAB_0420afa4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

