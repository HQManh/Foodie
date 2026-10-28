// rea decompile_all
// name: ChocDino.UIFX.GlowFilter$$SetupFilterParams
// address: 0x43dd93c
// body: available
// range: 0x43dd93c-0x43ddae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ddae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_GlowFilter__SetupFilterParams(long param_1)

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
  
  if ((DAT_09517cf3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186810);
    DAT_09517cf3 = 1;
  }
  if (*(long *)(param_1 + 0x250) == 0) goto LAB_043ddae4;
  ChocDino_UIFX_DistanceMap__set_DistanceShape
            (*(long *)(param_1 + 0x250),*(undefined4 *)(param_1 + 0x1c8),0);
  lVar6 = *(long *)(param_1 + 0x250);
  fVar8 = (float)ChocDino_UIFX_GlowFilter__GetMaxGlowDistance(param_1);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar6 == 0) goto LAB_043ddae4;
  fVar8 = fVar8 * 1.5 + 1.0;
  iVar1 = -0x80000000;
  if ((float)(int)fVar8 != INFINITY) {
    iVar1 = (int)fVar8;
  }
  ChocDino_UIFX_DistanceMap__set_MaxDistance(lVar6,iVar1,0);
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (iVar1 == 2) {
    lVar6 = *(long *)(param_1 + 0x250);
    if (lVar6 == 0) goto LAB_043ddae4;
    uVar3 = 0;
LAB_043dda4c:
    ChocDino_UIFX_DistanceMap__set_Result(lVar6,uVar3,0);
  }
  else {
    if (iVar1 == 1) {
      lVar6 = *(long *)(param_1 + 0x250);
      if (lVar6 == 0) goto LAB_043ddae4;
      uVar3 = 1;
      goto LAB_043dda4c;
    }
    if (iVar1 == 0) {
      lVar6 = *(long *)(param_1 + 0x250);
      if (lVar6 == 0) goto LAB_043ddae4;
      uVar3 = 3;
      goto LAB_043dda4c;
    }
  }
  plVar7 = *(long **)(param_1 + 0x248);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    fVar8 = *(float *)(param_1 + 0xb8);
    fVar9 = *(float *)(param_1 + 0x20);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    fVar10 = *(float *)(param_1 + 0x224);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09186810) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_043ddac0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09186810,5);
LAB_043ddac0:
                    /* WARNING: Could not recover jumptable at 0x043ddae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(fVar8 * fVar9 * fVar10,plVar7,puVar2[1]);
    return;
  }
LAB_043ddae4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

