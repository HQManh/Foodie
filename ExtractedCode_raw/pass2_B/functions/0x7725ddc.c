// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleDomainWarpBasicGrid
// address: 0x7725ddc
// body: available
// range: 0x7725ddc-0x77262eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77262e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77262e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Noise__SingleDomainWarpBasicGrid
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,uint param_7,float *param_8,float *param_9,float *param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if ((DAT_09522a2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a2d = 1;
  }
  param_4 = param_2 * param_4;
  param_5 = param_2 * param_5;
  param_2 = param_2 * param_3;
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = -0x80000000;
  if (param_2 != INFINITY) {
    iVar5 = (int)param_2;
  }
  iVar4 = 0x7fffffff;
  if (param_2 != INFINITY) {
    iVar4 = (int)param_2 + -1;
  }
  if (0.0 <= param_2) {
    iVar4 = iVar5;
  }
  iVar5 = 0x7fffffff;
  iVar6 = -0x80000000;
  if (param_4 != INFINITY) {
    iVar5 = (int)param_4 + -1;
    iVar6 = (int)param_4;
  }
  if (0.0 <= param_4) {
    iVar5 = iVar6;
  }
  iVar6 = -0x80000000;
  if (param_5 != INFINITY) {
    iVar6 = (int)param_5;
  }
  iVar7 = 0x7fffffff;
  if (param_5 != INFINITY) {
    iVar7 = (int)param_5 + -1;
  }
  lVar14 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x18);
  if (0.0 <= param_5) {
    iVar7 = iVar6;
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar11 = *(uint *)(lVar14 + 0x18);
  uVar12 = iVar5 * 0x43c42e4d;
  uVar13 = iVar7 * 0x668b6e2f;
  uVar8 = iVar4 * 0x1dde90c9 ^ param_7;
  uVar9 = uVar8 ^ uVar12;
  uVar1 = (uVar9 ^ uVar13) * 0x32d & 0x3fc;
  if (uVar1 < uVar11) {
    param_7 = iVar4 * 0x1dde90c9 + 0x1dde90c9U ^ param_7;
    uVar10 = param_7 ^ uVar12;
    uVar2 = (uVar10 ^ uVar13) * 0x32d & 0x3fc;
    if ((((uVar2 < uVar11) && ((uVar1 | 1) < uVar11)) && ((uVar2 | 1) < uVar11)) &&
       (((uVar1 | 2) < uVar11 && ((uVar2 | 2) < uVar11)))) {
      uVar8 = uVar12 + 0x43c42e4d ^ uVar8;
      uVar3 = (uVar8 ^ uVar13) * 0x32d & 0x3fc;
      if (uVar3 < uVar11) {
        param_7 = param_7 ^ uVar12 + 0x43c42e4d;
        uVar12 = (param_7 ^ uVar13) * 0x32d & 0x3fc;
        if (((uVar12 < uVar11) && ((uVar3 | 1) < uVar11)) &&
           (((uVar12 | 1) < uVar11 && (((uVar3 | 2) < uVar11 && ((uVar12 | 2) < uVar11)))))) {
          uVar13 = uVar13 + 0x668b6e2f;
          uVar9 = (uVar13 ^ uVar9) * 0x32d & 0x3fc;
          if ((((uVar9 < uVar11) &&
               (((((uVar10 = (uVar10 ^ uVar13) * 0x32d & 0x3fc, uVar10 < uVar11 &&
                   ((uVar9 | 1) < uVar11)) && ((uVar10 | 1) < uVar11)) &&
                 (((uVar9 | 2) < uVar11 && ((uVar10 | 2) < uVar11)))) &&
                ((uVar8 = (uVar8 ^ uVar13) * 0x32d & 0x3fc, uVar8 < uVar11 &&
                 ((uVar13 = (param_7 ^ uVar13) * 0x32d & 0x3fc, uVar13 < uVar11 &&
                  ((uVar8 | 1) < uVar11)))))))) && ((uVar13 | 1) < uVar11)) &&
             (((uVar8 | 2) < uVar11 && ((uVar13 | 2) < uVar11)))) {
            fVar15 = *(float *)(lVar14 + 0x20 + (ulong)uVar1 * 4);
            fVar21 = *(float *)(lVar14 + 0x20 + (ulong)uVar3 * 4);
            fVar22 = *(float *)(lVar14 + 0x20 + (ulong)uVar9 * 4);
            param_2 = param_2 - (float)iVar4;
            fVar24 = *(float *)(lVar14 + 0x20 + (ulong)uVar8 * 4);
            param_4 = param_4 - (float)iVar5;
            fVar17 = *(float *)(lVar14 + 0x20 + (ulong)(uVar1 | 1) * 4);
            fVar25 = *(float *)(lVar14 + 0x20 + (ulong)(uVar3 | 1) * 4);
            fVar26 = *(float *)(lVar14 + 0x20 + (ulong)(uVar9 | 1) * 4);
            fVar27 = *(float *)(lVar14 + 0x20 + (ulong)(uVar8 | 1) * 4);
            fVar28 = *(float *)(lVar14 + 0x20 + (ulong)(uVar13 | 1) * 4);
            param_5 = param_5 - (float)iVar7;
            fVar19 = param_2 * param_2 * (3.0 - (param_2 + param_2));
            fVar18 = *(float *)(lVar14 + 0x20 + (ulong)(uVar1 | 2) * 4);
            fVar30 = *(float *)(lVar14 + 0x20 + (ulong)(uVar3 | 2) * 4);
            fVar15 = fVar15 + fVar19 * (*(float *)(lVar14 + 0x20 + (ulong)uVar2 * 4) - fVar15);
            fVar16 = param_4 * param_4 * (3.0 - (param_4 + param_4));
            fVar22 = fVar22 + fVar19 * (*(float *)(lVar14 + 0x20 + (ulong)uVar10 * 4) - fVar22);
            fVar23 = *(float *)(lVar14 + 0x20 + (ulong)(uVar9 | 2) * 4);
            fVar20 = *(float *)(lVar14 + 0x20 + (ulong)(uVar8 | 2) * 4);
            fVar29 = *(float *)(lVar14 + 0x20 + (ulong)(uVar13 | 2) * 4);
            fVar26 = fVar26 + fVar19 * (*(float *)(lVar14 + 0x20 + (ulong)(uVar10 | 1) * 4) - fVar26
                                       );
            fVar17 = fVar17 + fVar19 * (*(float *)(lVar14 + 0x20 + (ulong)(uVar2 | 1) * 4) - fVar17)
            ;
            fVar18 = fVar18 + fVar19 * (*(float *)(lVar14 + 0x20 + (ulong)(uVar2 | 2) * 4) - fVar18)
            ;
            fVar15 = fVar15 + fVar16 * ((fVar21 + fVar19 * (*(float *)(lVar14 + 0x20 +
                                                                      (ulong)uVar12 * 4) - fVar21))
                                       - fVar15);
            fVar23 = fVar23 + fVar19 * (*(float *)(lVar14 + 0x20 + (ulong)(uVar10 | 2) * 4) - fVar23
                                       );
            fVar21 = param_5 * param_5 * (3.0 - (param_5 + param_5));
            fVar17 = fVar17 + fVar16 * ((fVar25 + fVar19 * (*(float *)(lVar14 + 0x20 +
                                                                      (ulong)(uVar12 | 1) * 4) -
                                                           fVar25)) - fVar17);
            fVar18 = fVar18 + fVar16 * ((fVar30 + fVar19 * (*(float *)(lVar14 + 0x20 +
                                                                      (ulong)(uVar12 | 2) * 4) -
                                                           fVar30)) - fVar18);
            *param_8 = (fVar15 + fVar21 * ((fVar22 + fVar16 * ((fVar24 + fVar19 * (*(float *)(lVar14
                                                                                              + 0x20
                                                                                             + (
                                                  ulong)uVar13 * 4) - fVar24)) - fVar22)) - fVar15))
                       * param_1 + *param_8;
            *param_9 = (fVar17 + fVar21 * ((fVar26 + fVar16 * ((fVar27 + fVar19 * (fVar28 - fVar27))
                                                              - fVar26)) - fVar17)) * param_1 +
                       *param_9;
            *param_10 = *param_10 +
                        (fVar18 + fVar21 * ((fVar23 + fVar16 * ((fVar20 + fVar19 * (fVar29 - fVar20)
                                                                ) - fVar23)) - fVar18)) * param_1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

