// rea decompile_all
// name: ChocDino.UIFX.VertexSkewTextMeshPro$$GetBounds
// address: 0x43badf4
// body: available
// range: 0x43badf4-0x43bb017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bb014 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VertexSkewTextMeshPro__GetBounds
               (long param_1,long param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (((param_1 != 0) && (param_2 != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar5 = *(ulong *)(param_2 + 0x18);
    if ((2 < (int)uVar5) && ((int)uVar5 + (int)((uVar5 & 0xffffffff) / 3) * -3 == 0)) {
      uVar6 = 0;
      do {
        uVar4 = (uint)uVar5;
        if (((uVar4 <= uVar6) || (uVar4 <= uVar6 + 1)) || (uVar4 <= uVar6 + 2)) {
LAB_043bb014:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar2 = *(uint *)(param_2 + (long)(int)uVar6 * 4 + 0x20);
        uVar4 = *(uint *)(param_2 + (long)(int)(uVar6 + 2) * 4 + 0x20);
        if (((uVar4 != uVar2) &&
            (uVar3 = *(uint *)(param_2 + (long)(int)(uVar6 + 1) * 4 + 0x20), uVar2 != uVar3)) &&
           (uVar3 != uVar4)) {
          uVar1 = *(uint *)(param_1 + 0x18);
          if (((uVar1 <= uVar2) || (uVar1 <= uVar3)) || (uVar1 <= uVar4)) goto LAB_043bb014;
          lVar7 = param_1 + (long)(int)uVar2 * 0xc;
          lVar8 = param_1 + (long)(int)uVar3 * 0xc;
          uVar18 = *(ulong *)(lVar7 + 0x20);
          fVar20 = *(float *)(lVar7 + 0x28);
          uVar13 = *(ulong *)(lVar8 + 0x20);
          fVar16 = *(float *)(lVar8 + 0x28);
          fVar12 = (float)uVar13;
          fVar17 = (float)uVar18;
          fVar14 = (float)(uVar13 >> 0x20);
          fVar19 = (float)(uVar18 >> 0x20);
          if (9.9999994e-11 <=
              (fVar20 - fVar16) * (fVar20 - fVar16) +
              (fVar17 - fVar12) * (fVar17 - fVar12) + (fVar19 - fVar14) * (fVar19 - fVar14)) {
            lVar7 = param_1 + (long)(int)uVar4 * 0xc;
            uVar10 = *(ulong *)(lVar7 + 0x20);
            fVar15 = *(float *)(lVar7 + 0x28);
            fVar9 = (float)uVar10;
            fVar11 = (float)(uVar10 >> 0x20);
            if ((9.9999994e-11 <=
                 (fVar16 - fVar15) * (fVar16 - fVar15) +
                 (fVar12 - fVar9) * (fVar12 - fVar9) + (fVar14 - fVar11) * (fVar14 - fVar11)) &&
               (9.9999994e-11 <=
                (fVar15 - fVar20) * (fVar15 - fVar20) +
                (fVar9 - fVar17) * (fVar9 - fVar17) + (fVar11 - fVar19) * (fVar11 - fVar19))) {
              uVar5 = *param_3;
              fVar21 = *(float *)(param_3 + 1);
              if (fVar20 <= *(float *)(param_3 + 1)) {
                fVar21 = fVar20;
              }
              *(float *)(param_3 + 1) = fVar21;
              *param_3 = uVar5 ^ (uVar5 ^ uVar18) &
                                 ~CONCAT44(-(uint)((float)(uVar5 >> 0x20) < fVar19),
                                           -(uint)((float)uVar5 < fVar17));
              uVar5 = *param_4;
              fVar21 = *(float *)(param_4 + 1);
              if (*(float *)(param_4 + 1) <= fVar20) {
                fVar21 = fVar20;
              }
              *(float *)(param_4 + 1) = fVar21;
              *param_4 = uVar18 ^ (uVar18 ^ uVar5) &
                                  CONCAT44(-(uint)(fVar19 < (float)(uVar5 >> 0x20)),
                                           -(uint)(fVar17 < (float)uVar5));
              uVar5 = *param_3;
              fVar17 = *(float *)(param_3 + 1);
              if (fVar16 <= *(float *)(param_3 + 1)) {
                fVar17 = fVar16;
              }
              *(float *)(param_3 + 1) = fVar17;
              *param_3 = uVar5 ^ (uVar5 ^ uVar13) &
                                 ~CONCAT44(-(uint)((float)(uVar5 >> 0x20) < fVar14),
                                           -(uint)((float)uVar5 < fVar12));
              uVar5 = *param_4;
              fVar17 = *(float *)(param_4 + 1);
              if (*(float *)(param_4 + 1) <= fVar16) {
                fVar17 = fVar16;
              }
              *(float *)(param_4 + 1) = fVar17;
              *param_4 = uVar13 ^ (uVar13 ^ uVar5) &
                                  CONCAT44(-(uint)(fVar14 < (float)(uVar5 >> 0x20)),
                                           -(uint)(fVar12 < (float)uVar5));
              uVar5 = *param_3;
              fVar12 = *(float *)(param_3 + 1);
              if (fVar15 <= *(float *)(param_3 + 1)) {
                fVar12 = fVar15;
              }
              *(float *)(param_3 + 1) = fVar12;
              *param_3 = uVar5 ^ (uVar5 ^ uVar10) &
                                 ~CONCAT44(-(uint)((float)(uVar5 >> 0x20) < fVar11),
                                           -(uint)((float)uVar5 < fVar9));
              uVar5 = *param_4;
              fVar12 = *(float *)(param_4 + 1);
              if (*(float *)(param_4 + 1) <= fVar15) {
                fVar12 = fVar15;
              }
              *param_4 = uVar10 ^ (uVar10 ^ uVar5) &
                                  CONCAT44(-(uint)(fVar11 < (float)(uVar5 >> 0x20)),
                                           -(uint)(fVar9 < (float)uVar5));
              *(float *)(param_4 + 1) = fVar12;
              uVar5 = *(ulong *)(param_2 + 0x18);
            }
          }
        }
        uVar6 = uVar6 + 3;
      } while ((int)uVar6 < (int)uVar5);
    }
  }
  return;
}

