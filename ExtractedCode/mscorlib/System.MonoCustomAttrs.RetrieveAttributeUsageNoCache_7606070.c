// rea decompile_all
// name: System.MonoCustomAttrs$$RetrieveAttributeUsageNoCache
// address: 0x7606070
// body: available
// range: 0x7606070-0x76062af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76061a8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7606260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76062a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76062ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_MonoCustomAttrs__RetrieveAttributeUsageNoCache(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((DAT_09521ff4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170f70);
    FUN_03f5c2a4(&DAT_09181860);
    FUN_03f5c2a4(&DAT_09188378);
    DAT_09521ff4 = 1;
  }
  uVar1 = DAT_09170f70;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  uVar2 = System_Type__op_Equality(param_1,uVar1,0);
  uVar1 = DAT_09170f70;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188378);
    }
    lVar4 = System_MonoCustomAttrs__GetCustomAttributes(param_1,uVar1,0);
    if (lVar4 == 0) {
LAB_07606260:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
      if (param_1 == (long *)0x0) goto LAB_07606260;
      uVar1 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar2 = System_Type__op_Inequality(uVar1,0,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
        if (*(int *)(DAT_09188378 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188378);
        }
        plVar3 = (long *)System_MonoCustomAttrs__RetrieveAttributeUsage(uVar1);
        if (plVar3 != (long *)0x0) {
          return plVar3;
        }
      }
      if (*(int *)(DAT_09188378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar3 = *(long **)(*(long *)(DAT_09188378 + 0xb8) + 8);
    }
    else {
      iVar6 = (int)*(long *)(lVar4 + 0x18);
      if (1 < iVar6) {
        thunk_FUN_03fc39d4(&DAT_09184908);
        uVar1 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_09200e10);
        System_FormatException___ctor(uVar1,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091d3c50);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,uVar5);
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar3 = *(long **)(lVar4 + 0x20);
      if ((plVar3 != (long *)0x0) && (*plVar3 != DAT_09181860)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
    }
  }
  else {
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_09181860);
    System_AttributeUsageAttribute___ctor(plVar3,4,0);
  }
  return plVar3;
}

