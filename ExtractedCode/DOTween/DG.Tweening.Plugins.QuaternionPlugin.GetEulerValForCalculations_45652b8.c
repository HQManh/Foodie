// rea decompile_all
// name: DG.Tweening.Plugins.QuaternionPlugin$$GetEulerValForCalculations
// address: 0x45652b8
// body: available
// range: 0x45652b8-0x4565503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4565500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float DG_Tweening_Plugins_QuaternionPlugin__GetEulerValForCalculations
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,undefined8 param_7,long param_8)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)(param_8 + 0xb0) == '\0') && ((*(uint *)(param_8 + 0x148) & 0xfffffffe) != 2)) {
    fVar15 = 180.0 - param_1;
    if (DAT_09515cee == '\0') {
      FUN_03f5c2a4(&DAT_09187e98);
      DAT_09515cee = '\x01';
    }
    fVar9 = ABS(param_4);
    fVar13 = ABS(param_2 + 180.0);
    fVar16 = ABS(param_6);
    fVar19 = ABS(param_3 + 180.0);
    fVar7 = fVar9;
    if (fVar9 <= ABS(param_1)) {
      fVar7 = ABS(param_1);
    }
    fVar18 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
    fVar12 = ABS(param_5);
    fVar8 = fVar7 * 1e-06;
    if (fVar7 * 1e-06 <= fVar18) {
      fVar8 = fVar18;
    }
    if (fVar9 <= ABS(fVar15)) {
      fVar9 = ABS(fVar15);
    }
    fVar7 = fVar9 * 1e-06;
    if (fVar9 * 1e-06 <= fVar18) {
      fVar7 = fVar18;
    }
    fVar9 = fVar12;
    if (fVar12 <= ABS(param_2)) {
      fVar9 = ABS(param_2);
    }
    fVar10 = ABS(param_2 - param_5);
    fVar11 = fVar9 * 1e-06;
    if (fVar9 * 1e-06 <= fVar18) {
      fVar11 = fVar18;
    }
    bVar2 = fVar10 < fVar11;
    if (fVar12 <= fVar13) {
      fVar12 = fVar13;
    }
    fVar13 = ABS((param_2 + 180.0) - param_5);
    fVar9 = fVar12 * 1e-06;
    if (fVar12 * 1e-06 <= fVar18) {
      fVar9 = fVar18;
    }
    fVar12 = fVar16;
    if (fVar16 <= ABS(param_3)) {
      fVar12 = ABS(param_3);
    }
    fVar14 = fVar12 * 1e-06;
    if (fVar12 * 1e-06 <= fVar18) {
      fVar14 = fVar18;
    }
    if (fVar16 <= fVar19) {
      fVar16 = fVar19;
    }
    fVar17 = ABS(param_3 - param_6);
    fVar12 = ABS(param_1 - param_4);
    fVar19 = fVar16 * 1e-06;
    if (fVar16 * 1e-06 <= fVar18) {
      fVar19 = fVar18;
    }
    bVar3 = fVar17 < fVar14;
    bVar4 = fVar12 < fVar8;
    bVar5 = ABS((param_3 + 180.0) - param_6) < fVar19;
    if (((bVar3 && bVar2 || bVar4 && (bVar3 || bVar2)) ||
        (ABS(fVar15 - param_4) < fVar7 &&
         ((bVar5 || fVar13 < fVar9) && ((!bVar3 || !bVar2) && (!bVar4 || !bVar3 && !bVar2))))) ||
       (bVar5 && fVar13 < fVar9)) {
      iVar6 = 2;
      iVar1 = iVar6;
      if (fVar11 <= fVar10) {
        iVar1 = 1;
      }
      if (fVar8 <= fVar12) {
        iVar1 = 0;
      }
      if (fVar9 <= fVar13) {
        iVar6 = 1;
      }
      if (fVar7 <= ABS(fVar15 - param_4)) {
        iVar6 = 0;
      }
      if ((!bVar3 || !bVar2) && (!bVar4 || !bVar3 && !bVar2)) {
        iVar1 = iVar6;
      }
      if (iVar1 == 0) {
        if (fVar14 <= fVar17) {
          return fVar15;
        }
      }
      else {
        if (iVar1 == 1) {
          if (fVar14 <= fVar17) {
            return fVar15;
          }
          if (fVar12 < fVar8) {
            return param_1;
          }
          return fVar15;
        }
        if (fVar8 <= fVar12) {
          return fVar15;
        }
      }
      if (fVar11 <= fVar10) {
        return fVar15;
      }
    }
  }
  return param_1;
}

