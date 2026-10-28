// rea decompile_all
// name: Lean.Common.LeanPath$$TryGetClosest
// address: 0x7340d40
// body: available
// range: 0x7340d40-0x7340fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Lean_Common_LeanPath__TryGetClosest
               (float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
               int *param_6,int *param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar9 = param_2;
  fVar12 = param_3;
  if ((DAT_095206a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876e8);
    DAT_095206a2 = 1;
  }
  iVar2 = Lean_Common_LeanPath__GetPointCount(param_4,param_8);
  if (1 < iVar2) {
    fVar5 = (float)Lean_Common_LeanPath__GetPoint(param_4,0,param_8);
    fVar15 = INFINITY;
    iVar4 = 1;
    fVar14 = fVar9;
    fVar13 = fVar12;
    do {
      fVar10 = fVar12;
      fVar7 = fVar9;
      fVar6 = (float)Lean_Common_LeanPath__GetPoint(param_4,iVar4,param_8);
      fVar8 = param_2;
      fVar11 = param_3;
      fVar5 = (float)Lean_Common_LeanPath__GetClosestPoint
                               (param_1,param_2,param_3,fVar5,fVar14,fVar13);
      if (DAT_09517ea7 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09517ea7 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar12 = param_3 - fVar11;
      fVar9 = fVar12 * fVar12;
      fVar14 = SQRT(fVar9 + (param_1 - fVar5) * (param_1 - fVar5) +
                            (param_2 - fVar8) * (param_2 - fVar8));
      if (fVar14 < fVar15) {
        *param_6 = iVar4 + -1;
        cVar1 = DAT_095206da;
        *param_7 = iVar4;
        *param_5 = fVar5;
        param_5[1] = fVar8;
        param_5[2] = fVar11;
        if (cVar1 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_095206da = '\x01';
        }
        if (DAT_0951690d == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951690d = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar5 = fVar5 - fVar6;
        fVar9 = fVar8 - fVar7;
        fVar12 = fVar11 - fVar10;
        fVar13 = SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar9 * fVar9);
        if (fVar13 <= 1e-05) {
          pfVar3 = *(float **)(DAT_0918cbd0 + 0xb8);
          fVar15 = pfVar3[1];
          fVar13 = pfVar3[2];
          fVar5 = *pfVar3;
        }
        else {
          fVar5 = fVar5 / fVar13;
          fVar15 = fVar9 / fVar13;
          fVar13 = fVar12 / fVar13;
        }
        if (*(int *)(DAT_091876e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        pfVar3 = *(float **)(DAT_091876e8 + 0xb8);
        *pfVar3 = fVar5;
        pfVar3[1] = fVar15;
        pfVar3[2] = fVar13;
        fVar15 = fVar14;
      }
      iVar4 = iVar4 + 1;
      fVar5 = fVar6;
      fVar14 = fVar7;
      fVar13 = fVar10;
    } while (iVar2 != iVar4);
  }
  return 1 < iVar2;
}

