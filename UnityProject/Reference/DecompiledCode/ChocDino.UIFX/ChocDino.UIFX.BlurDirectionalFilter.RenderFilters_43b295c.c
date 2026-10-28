// rea decompile_all
// name: ChocDino.UIFX.BlurDirectionalFilter$$RenderFilters
// address: 0x43b295c
// body: available
// range: 0x43b295c-0x43b2a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b2a7c to 0x43c38dc ChocDino.UIFX.BlurDirectionalFilter.BlurShader$$Render (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b2a9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_BlurDirectionalFilter__RenderFilters(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (fVar5 <= 0.0) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
    fVar7 = *(float *)((long)param_1 + 0x1c4) * -0.017453292;
    fVar5 = cosf(fVar7 + 3.1415927);
    fVar7 = sinf(fVar7);
    iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    iVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    fVar6 = -1.0;
    if (0.0 <= *(float *)(param_1 + 0x39)) {
      fVar6 = 1.0;
    }
    if (*(int *)((long)param_1 + 0x1cc) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(float *)(param_1 + 0x3a) == 0.0;
    }
    if (param_1[0x41] != 0) {
      uVar4 = ChocDino_UIFX_BlurDirectionalFilter_BlurShader__Render
                        (ABS(*(float *)(param_1 + 0x39)) * *(float *)(param_1 + 0x17) *
                         *(float *)(param_1 + 4),fVar7 * (1.0 / (float)iVar2) * fVar6,
                         fVar5 * (1.0 / (float)iVar3) * fVar6,(int)param_1[0x3a],
                         *(float *)(param_1 + 4) * *(float *)(param_1 + 0x3b) * 0.1,param_1[0x41],
                         param_2,bVar1,*(undefined4 *)((long)param_1 + 0x1d4),0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

