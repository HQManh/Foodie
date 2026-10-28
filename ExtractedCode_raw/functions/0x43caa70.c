// rea decompile_all
// name: ChocDino.UIFX.ColorAdjustFilter$$RenderFilters
// address: 0x43caa70
// body: available
// range: 0x43caa70-0x43cac93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43cac8c to 0x43c9694 ChocDino.UIFX.ColorAdjust$$Process (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43cac90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ColorAdjustFilter__RenderFilters(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x210);
  if (lVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0x1c4);
    fVar3 = 360.0;
    if (fVar2 <= 360.0) {
      fVar3 = fVar2;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar1 + 0x10) != fVar4) {
      *(float *)(lVar1 + 0x10) = fVar4;
      *(undefined1 *)(lVar1 + 0xb8) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x1c8);
    fVar3 = 2.0;
    if (fVar2 <= 2.0) {
      fVar3 = fVar2;
    }
    fVar4 = -2.0;
    if (-2.0 <= fVar2) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar1 + 0x14) != fVar4) {
      *(float *)(lVar1 + 0x14) = fVar4;
      *(undefined1 *)(lVar1 + 0xb8) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x1cc);
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar2) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar1 + 0x18) != fVar4) {
      *(float *)(lVar1 + 0x18) = fVar4;
      *(undefined1 *)(lVar1 + 0xb8) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x1d0);
    fVar3 = 2.0;
    if (fVar2 <= 2.0) {
      fVar3 = fVar2;
    }
    fVar4 = -2.0;
    if (-2.0 <= fVar2) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar1 + 0x1c) != fVar4) {
      *(float *)(lVar1 + 0x1c) = fVar4;
      *(undefined1 *)(lVar1 + 0xb9) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x1d4);
    fVar3 = 2.0;
    if (fVar2 <= 2.0) {
      fVar3 = fVar2;
    }
    fVar4 = -2.0;
    if (-2.0 <= fVar2) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar1 + 0x20) != fVar4) {
      *(float *)(lVar1 + 0x20) = fVar4;
      *(undefined1 *)(lVar1 + 0xb9) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x1d8);
    fVar3 = 255.0;
    if (fVar2 <= 255.0) {
      fVar3 = fVar2;
    }
    fVar4 = 0.01;
    if (0.01 <= fVar2) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar1 + 0x24) != fVar4) {
      *(float *)(lVar1 + 0x24) = fVar4;
      *(undefined1 *)(lVar1 + 0xb9) = 1;
    }
    fVar2 = *(float *)(param_1 + 0x1dc);
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar1 + 0x28) != fVar4) {
      *(float *)(lVar1 + 0x28) = fVar4;
      *(undefined1 *)(lVar1 + 0xb9) = 1;
    }
    ChocDino_UIFX_ColorAdjust__set_BrightnessRGBA
              (*(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4),
               *(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
    if ((*(long *)(param_1 + 0x210) != 0) &&
       (ChocDino_UIFX_ColorAdjust__set_ContrastRGBA
                  (*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500),
                   *(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x1fc)),
       *(long *)(param_1 + 0x210) != 0)) {
      ChocDino_UIFX_ColorAdjust__set_PosterizeRGBA
                (*(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x204),
                 *(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c));
      lVar1 = *(long *)(param_1 + 0x210);
      if (lVar1 != 0) {
        fVar2 = *(float *)(param_1 + 0x20);
        fVar3 = 1.0;
        if (fVar2 <= 1.0) {
          fVar3 = fVar2;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar2) {
          fVar4 = fVar3;
        }
        if (*(float *)(lVar1 + 0x5c) != fVar4) {
          *(float *)(lVar1 + 0x5c) = fVar4;
          *(undefined1 *)(lVar1 + 0xb8) = 1;
        }
        ChocDino_UIFX_ColorAdjust__Process(lVar1,param_2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

