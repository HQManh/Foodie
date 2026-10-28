// rea decompile_all
// name: System.Type$$get_IsVisible
// address: 0x75cf9f8
// body: available
// range: 0x75cf9f8-0x75cfb57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cfaa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75cfb54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Type__get_IsVisible(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  do {
    uVar3 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
    if ((uVar3 & 1) != 0) goto LAB_075cfb38;
    uVar3 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
    plVar4 = param_1;
    if ((uVar3 & 1) == 0) goto LAB_075cfa58;
    param_1 = (long *)(**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
  } while (param_1 != (long *)0x0);
  goto LAB_075cfaa0;
LAB_075cfb38:
  uVar2 = 1;
  goto LAB_075cfb44;
  while( true ) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    lVar6 = lVar6 + 1;
    if ((int)uVar1 <= (int)lVar6) break;
LAB_075cfb0c:
    if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(long *)(lVar5 + 0x20 + lVar6 * 8) == 0) goto LAB_075cfaa0;
    uVar2 = System_Type__get_IsVisible();
    if ((uVar2 & 1) == 0) break;
  }
LAB_075cfb44:
  return uVar2 & 1;
  while( true ) {
    if ((uVar1 & 7) != 2) goto LAB_075cfb40;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if (plVar4 == (long *)0x0) break;
LAB_075cfa58:
    uVar3 = System_Type__get_IsNested(plVar4);
    uVar1 = (**(code **)(*plVar4 + 0x4d8))(plVar4,*(undefined8 *)(*plVar4 + 0x4e0));
    if ((uVar3 & 1) == 0) {
      if ((uVar1 & 7) != 1) {
LAB_075cfb40:
        uVar2 = 0;
        goto LAB_075cfb44;
      }
      uVar3 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
      if (((uVar3 & 1) == 0) ||
         (uVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0)),
         (uVar3 & 1) != 0)) goto LAB_075cfb38;
      lVar5 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if ((int)uVar1 < 1) goto LAB_075cfb38;
        lVar6 = 0;
        goto LAB_075cfb0c;
      }
      break;
    }
  }
LAB_075cfaa0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

