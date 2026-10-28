// rea decompile_all
// name: CookingGraph.CookingBotFailureKnowledge$$RefreshRecommendedStrategy
// address: 0x440bde4
// body: available
// range: 0x440bde4-0x440bf27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440bf20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440bf24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingBotFailureKnowledge__RefreshRecommendedStrategy(long param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  
  if ((DAT_09517ed6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd78);
    FUN_03f5c2a4(&DAT_091f3990);
    DAT_09517ed6 = 1;
  }
  lVar5 = FUN_03f5c394(DAT_0917fd78,7);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(lVar5,DAT_091f3990,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar8 = 0;
    bVar4 = false;
    fVar7 = -INFINITY;
    uVar9 = 0;
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar1 = *(uint *)(lVar5 + 0x20 + uVar9 * 4);
      if ((*(uint *)(param_1 + 0x34) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
        fVar10 = (float)CookingGraph_CookingBotFailureKnowledge__StrategyScore(param_1,uVar1);
        bVar3 = (bool)(bVar4 & fVar10 <= fVar7);
        bVar4 = true;
        if (!bVar3) {
          uVar8 = uVar1;
          fVar7 = fVar10;
        }
      }
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x38) = 1;
      goto LAB_0440bf04;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x40) = bVar2;
  *(byte *)(param_1 + 0x38) = bVar2 ^ 1;
  if (bVar2 != 0) {
    return;
  }
  uVar8 = 7;
LAB_0440bf04:
  *(uint *)(param_1 + 0x3c) = uVar8;
  return;
}

