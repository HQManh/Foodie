// rea decompile_all
// name: ChocDino.UIFX.LongShadow$$GetTextureOffset
// address: 0x43e002c
// body: available
// range: 0x43e002c-0x43e0153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e0150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float ChocDino_UIFX_LongShadow__GetTextureOffset(long param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    fVar6 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(*(long *)(param_1 + 0x70) + 0xb8);
    fVar5 = (*(float *)(param_1 + 0x1c) + 1.0) * 0.5;
    fVar3 = (float)ChocDino_UIFX_MathUtils__Lerp3(0x3f800000,0,0,fVar5,0);
    ChocDino_UIFX_MathUtils__Lerp3(0x3f800000,0x3f800000,0,fVar5,0);
    plVar2 = *(long **)(param_1 + 0x60);
    if (plVar2 != (long *)0x0) {
      fVar5 = *(float *)(param_1 + 0x10);
      fVar8 = *(float *)(param_1 + 0x14);
      iVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      plVar2 = *(long **)(param_1 + 0x60);
      if (plVar2 != (long *)0x0) {
        fVar4 = -1.0;
        if (0.0 <= fVar8) {
          fVar4 = 1.0;
        }
        (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
        fVar5 = fVar5 * -0.017453292;
        fVar8 = sinf(fVar5);
        cosf(fVar5 + 3.1415927);
        return ABS(fVar6 * fVar7) * fVar3 * fVar4 * fVar8 * (1.0 / (float)iVar1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

