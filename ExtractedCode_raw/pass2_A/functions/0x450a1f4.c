// rea decompile_all
// name: Utilities.RandomUtility$$GetDisplacementalShuffledIndexArray
// address: 0x450a1f4
// body: available
// range: 0x450a1f4-0x450a3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450a3b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450a3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_RandomUtility__GetDisplacementalShuffledIndexArray
               (float param_1,float param_2,uint param_3)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_095184f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_095184f5 = 1;
  }
  lVar8 = FUN_03f5c394(DAT_091801b8,param_3);
  lVar9 = FUN_03f5c394(DAT_09180528,param_3);
  if (0 < (int)param_3) {
    if (lVar8 == 0) goto LAB_0450a3b8;
    uVar13 = 0;
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_0450a3b4;
      fVar15 = (float)(int)uVar13;
      *(int *)(lVar8 + 0x20 + uVar13 * 4) = (int)uVar13;
      fVar14 = (float)UnityEngine_Mathf__PerlinNoise(fVar15 * param_2,0x3e051eb8,0);
      if (lVar9 == 0) goto LAB_0450a3b8;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_0450a3b4;
      *(float *)(lVar9 + 0x20 + uVar13 * 4) = fVar14 * param_1 + fVar15;
      uVar13 = uVar13 + 1;
    } while (param_3 != uVar13);
  }
  if (0 < (int)(param_3 - 1)) {
    if (lVar9 == 0) {
LAB_0450a3b8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(uint *)(lVar9 + 0x18);
    uVar10 = (ulong)(param_3 - 2);
    uVar13 = (ulong)(param_3 - 1);
    do {
      if (uVar4 <= uVar13) {
LAB_0450a3b4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = lVar8 + uVar13 * 4;
      uVar11 = uVar13 & 0xffffffff;
      pfVar2 = (float *)(lVar9 + uVar13 * 4 + 0x20);
      uVar12 = uVar10;
      do {
        if (uVar4 <= uVar12) goto LAB_0450a3b4;
        fVar14 = *pfVar2;
        fVar15 = *(float *)(lVar9 + 0x20 + uVar12 * 4);
        if (fVar14 < fVar15) {
          if (lVar8 == 0) goto LAB_0450a3b8;
          if ((*(uint *)(lVar8 + 0x18) <= uVar13) || (*(uint *)(lVar8 + 0x18) <= uVar12))
          goto LAB_0450a3b4;
          uVar6 = *(undefined4 *)(lVar8 + 0x20 + uVar12 * 4);
          uVar5 = *(undefined4 *)(lVar3 + 0x20);
          *pfVar2 = fVar15;
          *(float *)(lVar9 + 0x20 + uVar12 * 4) = fVar14;
          *(undefined4 *)(lVar3 + 0x20) = uVar6;
          *(undefined4 *)(lVar8 + 0x20 + uVar12 * 4) = uVar5;
        }
        uVar7 = (int)uVar11 - 1;
        uVar11 = (ulong)uVar7;
        uVar12 = uVar12 - 1;
      } while (0 < (int)uVar7);
      uVar10 = uVar10 - 1;
      bVar1 = 1 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
  }
  return lVar8;
}

