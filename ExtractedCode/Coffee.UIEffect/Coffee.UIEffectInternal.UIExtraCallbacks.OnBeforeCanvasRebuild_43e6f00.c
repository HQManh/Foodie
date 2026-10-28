// rea decompile_all
// name: Coffee.UIEffectInternal.UIExtraCallbacks$$OnBeforeCanvasRebuild
// address: 0x43e6f00
// body: available
// range: 0x43e6f00-0x43e7017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e7010 to 0x43e6cb4 Coffee.UIEffectInternal.UIExtraCallbacks$$InitializeAfterCanvasRebuild (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e7014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_UIExtraCallbacks__OnBeforeCanvasRebuild(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_09517d7e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c3c8);
    DAT_09517d7e = 1;
  }
  uVar1 = UnityEngine_Screen__get_width(0);
  lVar2 = UnityEngine_Screen__get_height(0);
  if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c3c8);
  }
  lVar3 = *(long *)(DAT_0918c3c8 + 0xb8);
  uVar4 = uVar1 & 0xffffffff | lVar2 << 0x20;
  uVar1 = *(ulong *)(lVar3 + 0x28);
  lVar2 = DAT_0918c3c8;
  if (uVar1 != uVar4) {
    if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c3c8);
      lVar3 = *(long *)(DAT_0918c3c8 + 0xb8);
      uVar1 = *(ulong *)(lVar3 + 0x28);
    }
    if (uVar1 != 0) {
      if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918c3c8);
        lVar3 = *(long *)(DAT_0918c3c8 + 0xb8);
      }
      if (*(long *)(lVar3 + 0x20) == 0) goto LAB_043e7014;
      Coffee_UIEffectInternal_FastAction__Invoke();
    }
    if (*(int *)(DAT_0918c3c8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c3c8);
    }
    lVar2 = DAT_0918c3c8;
    *(ulong *)(*(long *)(DAT_0918c3c8 + 0xb8) + 0x28) = uVar4;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424(lVar2);
    lVar2 = DAT_0918c3c8;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x18) != 0) {
    Coffee_UIEffectInternal_FastAction__Invoke();
    Coffee_UIEffectInternal_UIExtraCallbacks__InitializeAfterCanvasRebuild();
    return;
  }
LAB_043e7014:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

