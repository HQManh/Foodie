// rea decompile_all
// name: ChocDino.UIFX.VertexSkewTextMeshPro$$ApplyMatrix
// address: 0x43bab54
// body: available
// range: 0x43bab54-0x43bad03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bacfc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bad00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VertexSkewTextMeshPro__ApplyMatrix(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0x34);
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        lVar5 = *(long *)(param_2 + 0x60);
        if (lVar5 == 0) goto LAB_043bad00;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_043bacfc;
        lVar5 = lVar5 + uVar10 * 0x50;
        uVar3 = *(uint *)(lVar5 + 0x28);
        if (0 < (int)uVar3) {
          lVar5 = *(long *)(lVar5 + 0x30);
          if (lVar5 == 0) goto LAB_043bad00;
          uVar6 = 0;
          lVar8 = 0x20;
          pfVar7 = (float *)(lVar5 + 0x28);
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_043bacfc;
            lVar9 = *(long *)(param_1 + 0xb8);
            if (lVar9 == 0) goto LAB_043bad00;
            if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_043bacfc;
            lVar9 = *(long *)(lVar9 + uVar10 * 0x50 + 0x30);
            if (lVar9 == 0) goto LAB_043bad00;
            if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_043bacfc;
            fVar11 = pfVar7[-2];
            fVar12 = pfVar7[-1];
            uVar6 = uVar6 + 1;
            puVar1 = (undefined8 *)(lVar9 + lVar8);
            fVar14 = *(float *)(param_1 + 0x48);
            fVar16 = *(float *)(param_1 + 0x58);
            fVar17 = *(float *)(param_1 + 0x68);
            fVar15 = *pfVar7;
            lVar8 = lVar8 + 0xc;
            fVar13 = *(float *)(param_1 + 0x78);
            *puVar1 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar11 +
                               (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * fVar12 +
                               (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar15,
                               (float)*(undefined8 *)(param_1 + 0x70) +
                               (float)*(undefined8 *)(param_1 + 0x40) * fVar11 +
                               (float)*(undefined8 *)(param_1 + 0x50) * fVar12 +
                               (float)*(undefined8 *)(param_1 + 0x60) * fVar15);
            *(float *)(puVar1 + 1) = fVar13 + fVar11 * fVar14 + fVar12 * fVar16 + fVar15 * fVar17;
            pfVar7 = pfVar7 + 3;
          } while (uVar3 != uVar6);
          lVar5 = *(long *)(param_2 + 0x60);
          if (lVar5 == 0) goto LAB_043bad00;
          if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_043bacfc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(param_1 + 0xb8);
          if (lVar8 == 0) goto LAB_043bad00;
          if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_043bacfc;
          lVar5 = *(long *)(lVar5 + uVar10 * 0x50 + 0x20);
          if (lVar5 == 0) goto LAB_043bad00;
          UnityEngine_Mesh__set_vertices(lVar5,*(undefined8 *)(lVar8 + uVar10 * 0x50 + 0x30),0);
          lVar5 = *(long *)(param_2 + 0x60);
          if (lVar5 == 0) goto LAB_043bad00;
          if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_043bacfc;
          plVar4 = *(long **)(param_1 + 0xa8);
          if (plVar4 == (long *)0x0) goto LAB_043bad00;
          (**(code **)(*plVar4 + 0x7e8))
                    (plVar4,*(undefined8 *)(lVar5 + uVar10 * 0x50 + 0x20),uVar10 & 0xffffffff,
                     *(undefined8 *)(*plVar4 + 0x7f0));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar2);
    }
    return;
  }
LAB_043bad00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

