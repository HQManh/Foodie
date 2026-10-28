// rea decompile_all
// name: DG.Tweening.TweenExtensions$$GotoWaypoint
// address: 0x453d148
// body: available
// range: 0x453d148-0x453d4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453d1f8 to 0x456fe90 DG.Tweening.Core.Debugger$$LogNestedTween (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453d250 to 0x456fed8 DG.Tweening.Core.Debugger$$LogNullTween (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453d2a8 to 0x456fe4c DG.Tweening.Core.Debugger$$LogInvalidTween (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453d334 to 0x456ff1c DG.Tweening.Core.Debugger$$LogNonPathTween (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453d4b8 to 0x4575f9c DG.Tweening.Core.TweenManager$$Goto (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453d4bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x453d4c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_TweenExtensions__GotoWaypoint(long *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_095186f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_0917f038);
    DAT_095186f1 = 1;
  }
  if (param_1 == (long *)0x0) {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (**(int **)(DAT_091836f8 + 0xb8) < 2) {
      return;
    }
    DG_Tweening_Core_Debugger__LogNullTween(0,0);
    return;
  }
  if ((char)param_1[0x1d] == '\0') {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (**(int **)(DAT_091836f8 + 0xb8) < 2) {
      return;
    }
    DG_Tweening_Core_Debugger__LogInvalidTween(param_1,0);
    return;
  }
  if (*(char *)((long)param_1 + 0xe9) != '\0') {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (**(int **)(DAT_091836f8 + 0xb8) < 2) {
      return;
    }
    DG_Tweening_Core_Debugger__LogNestedTween(param_1,0);
    return;
  }
  if ((*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_0917f038 + 0x130)) ||
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_0917f038 + 0x130) * 8 + -8) !=
      DAT_0917f038)) {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (**(int **)(DAT_091836f8 + 0xb8) < 2) {
      return;
    }
    DG_Tweening_Core_Debugger__LogNonPathTween(param_1,0);
    return;
  }
  if (*(char *)((long)param_1 + 0x101) == '\0') {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__ForceInit(param_1,0,0);
  }
  if ((int)param_2 < 0) {
    uVar4 = 1;
LAB_0453d3b8:
    lVar3 = param_1[0x27];
    if ((lVar3 == 0) || (lVar6 = *(long *)(lVar3 + 0x10), lVar6 == 0)) goto LAB_0453d4c0;
    fVar8 = 0.0;
    uVar5 = (ulong)uVar4;
    pfVar7 = (float *)(lVar6 + 0x20);
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar4 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar5 = uVar5 - 1;
      fVar8 = fVar8 + *pfVar7;
      pfVar7 = pfVar7 + 1;
    } while (uVar5 != 0);
  }
  else {
    if ((param_1[0x27] == 0) || (lVar3 = *(long *)(param_1[0x27] + 0x18), lVar3 == 0))
    goto LAB_0453d4c0;
    uVar4 = *(int *)(lVar3 + 0x18) - 1;
    if ((int)param_2 <= (int)uVar4) {
      uVar4 = param_2;
    }
    if (uVar4 < 0x7fffffff) {
      uVar4 = uVar4 + 1;
      goto LAB_0453d3b8;
    }
    lVar3 = param_1[0x27];
    fVar8 = 0.0;
  }
  if (lVar3 != 0) {
    fVar8 = fVar8 / *(float *)(lVar3 + 0x38);
    if ((((*(int *)((long)param_1 + 0xa4) == -1) || (1 < *(int *)((long)param_1 + 0xa4))) &&
        ((int)param_1[0x15] == 1)) &&
       (*(float *)(param_1 + 0x14) <= *(float *)((long)param_1 + 0x104) ==
        ((*(byte *)((long)param_1 + 0x10c) & 1) == 0))) {
      fVar8 = 1.0 - fVar8;
    }
    cVar2 = *(char *)((long)param_1 + 0x111);
    iVar1 = *(int *)((long)param_1 + 0x10c);
    fVar9 = *(float *)(param_1 + 0x14);
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__Goto
              (fVar9 * (float)(iVar1 - cVar2) + fVar8 * fVar9,param_1,param_3 & 1,1,0);
    return;
  }
LAB_0453d4c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

