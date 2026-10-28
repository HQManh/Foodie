// rea decompile_all
// name: DG.Tweening.TweenExtensions$$PathGetPoint
// address: 0x453e2c8
// body: available
// range: 0x453e2c8-0x453e563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453e560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_TweenExtensions__PathGetPoint(float param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((DAT_095186f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917f038);
    FUN_03f5c2a4(&DAT_0920fac8);
    DAT_095186f8 = 1;
  }
  uVar2 = 0x3f800000;
  if ((param_1 <= 1.0) && (uVar2 = (ulong)(uint)param_1, param_1 < 0.0)) {
    uVar2 = 0;
  }
  if (param_2 == (long *)0x0) {
    if (DAT_0951877d == '\0') {
      uVar2 = FUN_03f5c2a4(uVar2,&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
      uVar2 = DG_Tweening_Core_Debugger__LogNullTween(0,0);
    }
  }
  else if ((char)param_2[0x1d] == '\0') {
    if (DAT_0951877d == '\0') {
      uVar2 = FUN_03f5c2a4(uVar2,&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
      uVar2 = DG_Tweening_Core_Debugger__LogInvalidTween(param_2,0);
    }
  }
  else if (*(char *)((long)param_2 + 0xe9) == '\0') {
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_0917f038 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0917f038 + 0x130) * 8 + -8) !=
        DAT_0917f038)) {
      if (DAT_0951877d == '\0') {
        uVar2 = FUN_03f5c2a4(uVar2,&DAT_091836f8);
        DAT_0951877d = '\x01';
      }
      if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
        uVar2 = DG_Tweening_Core_Debugger__LogNonPathTween(param_2,0);
      }
    }
    else {
      lVar1 = param_2[0x26];
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar1 + 0x3c) != '\0') {
        DG_Tweening_Plugins_Core_PathCore_Path__GetPoint(lVar1,1,0);
        return;
      }
      if (DAT_0951877d == '\0') {
        uVar2 = FUN_03f5c2a4(uVar2,&DAT_091836f8);
        DAT_0951877d = '\x01';
      }
      if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
        uVar2 = DG_Tweening_Core_Debugger__LogWarning(DAT_0920fac8,param_2,0);
      }
    }
  }
  else {
    if (DAT_0951877d == '\0') {
      uVar2 = FUN_03f5c2a4(uVar2,&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
      uVar2 = DG_Tweening_Core_Debugger__LogNestedTween(param_2,0);
    }
  }
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(uVar2,&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  return;
}

