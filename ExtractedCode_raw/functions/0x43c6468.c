// rea decompile_all
// name: ChocDino.UIFX.BlurZoomFilter$$RenderFilters
// address: 0x43c6468
// body: available
// range: 0x43c6468-0x43c659f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c6574 to 0x43c65a0 ChocDino.UIFX.BlurZoomFilter.BlurShader$$Render (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c659c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_BlurZoomFilter__RenderFilters(long *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long lVar3;
  float extraout_s0;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  uVar2 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  auVar9._8_8_ = extraout_x1;
  auVar9._0_8_ = uVar2;
  if (extraout_s0 <= 0.0) {
    return 0;
  }
  fVar4 = *(float *)(param_1 + 4);
  lVar3 = param_1[0x42];
  fVar8 = *(float *)((long)param_1 + 0x1cc);
  uVar2 = *(undefined8 *)((long)param_1 + 0x1c4);
  fVar6 = 1.0;
  if (fVar4 <= 1.0) {
    fVar6 = fVar4;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar4) {
    fVar7 = fVar6;
  }
  if (DAT_09515ce9 == '\0') {
    auVar9 = FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce9 = '\x01';
  }
  if ((int)param_1[0x3a] == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(float *)((long)param_1 + 0x1d4) == 0.0;
  }
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(DAT_0918cb68 + 0xb8) + 8);
    fVar6 = ((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar5 >> 0x20)) * 0.5;
    uVar2 = ChocDino_UIFX_BlurZoomFilter_BlurShader__Render
                      ((fVar8 + -1.0) * fVar7 + 1.0,
                       CONCAT44(fVar6,((float)uVar2 + (float)uVar5) * 0.5),fVar6,
                       *(undefined4 *)((long)param_1 + 0x1d4),
                       *(float *)(param_1 + 4) * *(float *)((long)param_1 + 0x1dc) * 0.1,lVar3,
                       param_2,bVar1,(int)param_1[0x3b]);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar9._0_8_,auVar9._8_8_,bVar1);
}

