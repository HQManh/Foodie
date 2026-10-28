// rea decompile_all
// name: ChocDino.UIFX.LongShadowFilter$$SetupFilterParams
// address: 0x43e0a20
// body: available
// range: 0x43e0a20-0x43e0bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e0bd8 to 0x43df3ec ChocDino.UIFX.LongShadow$$set_Color2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e0bf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_LongShadowFilter__SetupFilterParams(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_1 + 0x208);
  if (*(int *)(param_1 + 0x1c4) == 1) {
    if ((lVar2 == 0) ||
       (ChocDino_UIFX_LongShadow__set_Method(lVar2,1), *(long *)(param_1 + 0x208) == 0))
    goto LAB_043e0bf0;
    ChocDino_UIFX_LongShadow__set_StepSize(0x3f800000);
    if (*(long *)(param_1 + 0x210) == 0) goto LAB_043e0bf0;
    ChocDino_UIFX_DistanceMap__set_Result(*(long *)(param_1 + 0x210),0,0);
    if (*(long *)(param_1 + 0x210) == 0) goto LAB_043e0bf0;
    ChocDino_UIFX_DistanceMap__set_DistanceShape(*(long *)(param_1 + 0x210),2,0);
    lVar2 = *(long *)(param_1 + 0x210);
    fVar3 = *(float *)(param_1 + 0x1cc);
    fVar4 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0xb8);
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 == 0) goto LAB_043e0bf0;
    fVar3 = ABS(fVar3) * fVar4 * fVar5 * 1.5 + 1.0;
    iVar1 = -0x80000000;
    if ((float)(int)fVar3 != INFINITY) {
      iVar1 = (int)fVar3;
    }
    ChocDino_UIFX_DistanceMap__set_MaxDistance(lVar2,iVar1,0);
  }
  else {
    if ((lVar2 == 0) ||
       (ChocDino_UIFX_LongShadow__set_Method(lVar2,0), *(long *)(param_1 + 0x208) == 0))
    goto LAB_043e0bf0;
    ChocDino_UIFX_LongShadow__set_StepSize(*(undefined4 *)(param_1 + 0x1d0));
  }
  if ((((*(long *)(param_1 + 0x208) != 0) &&
       (ChocDino_UIFX_LongShadow__set_Angle(*(undefined4 *)(param_1 + 0x1c8)),
       *(long *)(param_1 + 0x208) != 0)) &&
      (ChocDino_UIFX_LongShadow__set_Distance
                 (*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x1cc)),
      *(long *)(param_1 + 0x208) != 0)) &&
     ((ChocDino_UIFX_LongShadow__set_Pivot(*(undefined4 *)(param_1 + 0x1d4)),
      *(long *)(param_1 + 0x208) != 0 &&
      (ChocDino_UIFX_LongShadow__set_Color1
                 (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                  *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4)),
      *(long *)(param_1 + 0x208) != 0)))) {
    ChocDino_UIFX_LongShadow__set_Color2
              (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
               *(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4));
    if (*(char *)(param_1 + 0x1e8) == '\0') {
      return;
    }
    if (*(long *)(param_1 + 0x208) != 0) {
      ChocDino_UIFX_LongShadow__set_Color2
                (*(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0),
                 *(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x1f8));
      return;
    }
  }
LAB_043e0bf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

