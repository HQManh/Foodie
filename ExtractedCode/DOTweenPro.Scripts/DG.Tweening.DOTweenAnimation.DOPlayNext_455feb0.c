// rea decompile_all
// name: DG.Tweening.DOTweenAnimation$$DOPlayNext
// address: 0x455feb0
// body: available
// range: 0x455feb0-0x455ffeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455ffe0 to 0x4d8dd74 FUN_04d8dd74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x455ffe4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455ffe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenAnimation__DOPlayNext(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  if ((DAT_09518826 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5738);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbcc8);
    DAT_09518826 = 1;
  }
  lVar2 = FUN_04a6aa88(param_1,DAT_091c5738);
  if (lVar2 == 0) {
LAB_0455ffe8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  iVar5 = *(int *)(param_1 + 0x134);
  if (iVar5 < (int)(uVar1 - 1)) {
    do {
      uVar6 = (uint)((long)iVar5 + 1);
      *(uint *)(param_1 + 0x134) = uVar6;
      if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(lVar2 + ((long)iVar5 + 1) * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar7 == 0) goto LAB_0455ffe8;
        lVar4 = *(long *)(lVar7 + 0x68);
        if ((((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) &&
            (uVar3 = DG_Tweening_TweenExtensions__IsPlaying(lVar4,0), (uVar3 & 1) == 0)) &&
           (uVar3 = DG_Tweening_TweenExtensions__IsComplete(*(undefined8 *)(lVar7 + 0x68),0),
           (uVar3 & 1) == 0)) {
          FUN_04d8dd74(*(undefined8 *)(lVar7 + 0x68),DAT_091dbcc8);
          return;
        }
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      iVar5 = *(int *)(param_1 + 0x134);
    } while (iVar5 < (int)(uVar1 - 1));
  }
  return;
}

