// rea decompile_all
// name: ChocDino.UIFX.OutlineFilter$$SetupFilterParams
// address: 0x43e1ea8
// body: available
// range: 0x43e1ea8-0x43e219b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e20f0 to 0x43cad48 ChocDino.UIFX.DistanceMap$$set_Result (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e2194 to 0x43cc130 ChocDino.UIFX.ErodeDilate$$set_DilateSize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e2198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_OutlineFilter__SetupFilterParams(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09517d3a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186810);
    DAT_09517d3a = 1;
  }
  if (*(int *)(param_1 + 0x1c4) == 1) {
    plVar7 = *(long **)(param_1 + 0x200);
    if (plVar7 == (long *)0x0) goto LAB_043e2198;
    fVar8 = *(float *)(param_1 + 0x20);
    fVar9 = *(float *)(param_1 + 0x1d0);
    lVar6 = *plVar7;
    fVar10 = *(float *)(param_1 + 0xb8);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09186810) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_043e2028;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09186810,5);
LAB_043e2028:
    (*(code *)*puVar2)(fVar10 * fVar8 * fVar9,plVar7,puVar2[1]);
    if (*(long *)(param_1 + 0x208) == 0) goto LAB_043e2198;
    ChocDino_UIFX_ErodeDilate__set_AlphaOnly(*(long *)(param_1 + 0x208),1,0);
    if (*(long *)(param_1 + 0x208) == 0) goto LAB_043e2198;
    ChocDino_UIFX_ErodeDilate__set_DistanceShape
              (*(long *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x1cc),0);
    iVar1 = *(int *)(param_1 + 0x1fc);
    if (iVar1 == 2) {
      if (*(long *)(param_1 + 0x208) == 0) goto LAB_043e2198;
      ChocDino_UIFX_ErodeDilate__set_UseMultiPassOptimisation(*(long *)(param_1 + 0x208),1,0);
      lVar6 = *(long *)(param_1 + 0x208);
      if (lVar6 == 0) goto LAB_043e2198;
      fVar8 = 0.0;
    }
    else {
      if (iVar1 == 1) {
        if (*(long *)(param_1 + 0x208) == 0) goto LAB_043e2198;
        ChocDino_UIFX_ErodeDilate__set_UseMultiPassOptimisation(*(long *)(param_1 + 0x208),1,0);
        if (*(long *)(param_1 + 0x208) == 0) goto LAB_043e2198;
        ChocDino_UIFX_ErodeDilate__set_ErodeSize
                  (*(float *)(param_1 + 0xb8) *
                   *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x1c8),
                   *(long *)(param_1 + 0x208),0);
        lVar6 = *(long *)(param_1 + 0x208);
        if (lVar6 == 0) goto LAB_043e2198;
        fVar8 = 0.0;
        goto LAB_043e2180;
      }
      if (iVar1 != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x208) == 0) goto LAB_043e2198;
      ChocDino_UIFX_ErodeDilate__set_UseMultiPassOptimisation(*(long *)(param_1 + 0x208),0,0);
      lVar6 = *(long *)(param_1 + 0x208);
      if (lVar6 == 0) goto LAB_043e2198;
      fVar8 = *(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x1c8);
    }
    ChocDino_UIFX_ErodeDilate__set_ErodeSize(fVar8,lVar6,0);
    lVar6 = *(long *)(param_1 + 0x208);
    if (lVar6 != 0) {
      fVar8 = *(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x1c8);
LAB_043e2180:
      ChocDino_UIFX_ErodeDilate__set_DilateSize(fVar8,lVar6,0);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c4) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      ChocDino_UIFX_DistanceMap__set_DistanceShape
                (*(long *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x1cc),0);
      lVar6 = *(long *)(param_1 + 0x210);
      fVar8 = *(float *)(param_1 + 0x1c8);
      fVar9 = *(float *)(param_1 + 0x20);
      fVar10 = *(float *)(param_1 + 0xb8);
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar6 != 0) {
        fVar8 = fVar8 * fVar9 * fVar10 * 1.5 + 1.0;
        iVar1 = -0x80000000;
        if ((float)(int)fVar8 != INFINITY) {
          iVar1 = (int)fVar8;
        }
        ChocDino_UIFX_DistanceMap__set_MaxDistance(lVar6,iVar1,0);
        iVar1 = *(int *)(param_1 + 0x1fc);
        if (iVar1 == 2) {
          lVar6 = *(long *)(param_1 + 0x210);
          if (lVar6 != 0) {
            uVar3 = 0;
            goto LAB_043e20dc;
          }
        }
        else if (iVar1 == 1) {
          lVar6 = *(long *)(param_1 + 0x210);
          if (lVar6 != 0) {
            uVar3 = 1;
            goto LAB_043e20dc;
          }
        }
        else {
          if (iVar1 != 0) {
            return;
          }
          lVar6 = *(long *)(param_1 + 0x210);
          if (lVar6 != 0) {
            uVar3 = 2;
LAB_043e20dc:
            ChocDino_UIFX_DistanceMap__set_Result(lVar6,uVar3,0);
            return;
          }
        }
      }
    }
  }
LAB_043e2198:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

