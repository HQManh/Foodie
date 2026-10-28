// rea decompile_all
// name: DG.Tweening.Core.DOTweenUtils$$GetLooseScriptType
// address: 0x45773a0
// body: available
// range: 0x45773a0-0x457760b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4577604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4577608 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_Core_DOTweenUtils__GetLooseScriptType(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((DAT_095188e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c71d8);
    FUN_03f5c2a4(&DAT_091831c8);
    FUN_03f5c2a4(&DAT_091dc128);
    FUN_03f5c2a4(&DAT_09226520);
    DAT_095188e4 = 1;
  }
  uVar5 = 0;
  while( true ) {
    if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = *(long **)(DAT_091831c8 + 0xb8);
    lVar2 = plVar3[1];
    if (lVar2 == 0) goto LAB_04577604;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar5) break;
    if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = *(long *)(*(long *)(DAT_091831c8 + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_04577604;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_04577608;
    uVar1 = System_String__Format(DAT_09226520,param_1,*(undefined8 *)(lVar2 + uVar5 * 8 + 0x20),0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    lVar2 = FUN_03f5c738(uVar1,DAT_091dc128,DAT_091c71d8);
    uVar5 = uVar5 + 1;
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
    FUN_03f5c424();
    plVar3 = *(long **)(DAT_091831c8 + 0xb8);
  }
  if (*plVar3 == 0) {
    lVar2 = thunk_FUN_03f6aadc(0);
    if (lVar2 == 0) goto LAB_04577604;
    uVar1 = System_AppDomain__GetAssemblies(lVar2,0);
    if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091831c8);
    }
    **(undefined8 **)(DAT_091831c8 + 0xb8) = uVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091831c8 + 0xb8),uVar1);
  }
  uVar4 = 0;
  while( true ) {
    if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = **(long **)(DAT_091831c8 + 0xb8);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= (int)uVar4) {
      return 0;
    }
    if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = **(long **)(DAT_091831c8 + 0xb8);
      if (lVar2 == 0) break;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_04577608:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3 = *(long **)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
    if (plVar3 == (long *)0x0) break;
    uVar1 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    uVar1 = System_String__Format(DAT_09226520,param_1,uVar1,0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    lVar2 = FUN_03f5c738(uVar1,DAT_091dc128,DAT_091c71d8);
    uVar4 = uVar4 + 1;
    if (lVar2 != 0) {
      return lVar2;
    }
  }
LAB_04577604:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

