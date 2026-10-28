// rea decompile_all
// name: Utilities.RandomUtility$$GetWeightedRandomListIndexs
// address: 0x45094f8
// body: available
// range: 0x45094f8-0x450963f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4509638 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450963c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_RandomUtility__GetWeightedRandomListIndexs
               (uint param_1,long param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_095184ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_095184ee = 1;
  }
  if (param_2 == 0) {
LAB_0450963c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar9 = 0.0;
  uVar4 = (uint)*(ulong *)(param_2 + 0x18);
  if (0 < (int)uVar4) {
    uVar3 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
    uVar5 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    piVar6 = (int *)(param_2 + 0x20);
    do {
      if (uVar5 == 0) {
LAB_04509638:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = uVar3 - 1;
      uVar5 = uVar5 - 1;
      fVar9 = fVar9 + (float)*piVar6;
      piVar6 = piVar6 + 1;
    } while (uVar3 != 0);
  }
  lVar2 = FUN_03f5c394(DAT_091801b8,(ulong)param_1);
  if (0 < (int)param_1) {
    uVar3 = 0;
    do {
      fVar7 = (float)Klak_Math_XXHash__GetValue01((int)uVar3 + param_3,param_4,0);
      if (0 < (int)*(ulong *)(param_2 + 0x18)) {
        fVar8 = 0.0;
        uVar5 = 0;
        do {
          iVar1 = *(int *)(param_2 + 0x20 + uVar5 * 4);
          if ((iVar1 != 0) && (fVar8 = fVar8 + (float)iVar1, fVar9 * fVar7 < fVar8)) {
            if (lVar2 == 0) goto LAB_0450963c;
            if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_04509638;
            *(int *)(lVar2 + uVar3 * 4 + 0x20) = (int)uVar5;
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((*(ulong *)(param_2 + 0x18) & 0xffffffff) != uVar5);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
  }
  return lVar2;
}

