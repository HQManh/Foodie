// rea decompile_all
// name: ChocDino.UIFX.ColorUtils$$EvalGradient
// address: 0x43a038c
// body: available
// range: 0x43a038c-0x43a0437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a042c to 0x8642300 UnityEngine.Gradient$$Evaluate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a0434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ColorUtils__EvalGradient
               (float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  param_2 = (param_1 - param_4) * param_3 + param_4 + param_2;
  if (param_6 == 2) {
    param_2 = param_2 - ((float)(int)(param_2 * 0.5) + (float)(int)(param_2 * 0.5));
    fVar5 = 2.0;
    if (param_2 <= 2.0) {
      fVar5 = param_2;
    }
    fVar4 = -1.0;
    if (0.0 <= param_2) {
      fVar4 = fVar5 + -1.0;
    }
    param_2 = 1.0 - ABS(fVar4);
    if (param_3 < 0.0) {
      param_2 = 1.0 - (1.0 - ABS(fVar4));
    }
  }
  else if (param_6 == 1) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= param_2) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_2)) {
        bVar1 = param_2 < 1.0;
        bVar2 = param_2 == 1.0;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      fVar4 = param_2 - (float)(int)param_2;
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      param_2 = 0.0;
      if (0.0 <= fVar4) {
        param_2 = fVar5;
      }
    }
  }
  if (param_5 != 0) {
    UnityEngine_Gradient__Evaluate(param_5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(param_2);
}

