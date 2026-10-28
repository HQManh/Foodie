// rea decompile_all
// name: DG.Tweening.ShortcutExtensions.<>c__DisplayClass69_0$$<DOBlendableColor>b__1
// address: 0x454b7ac
// body: available
// range: 0x454b7ac-0x454b817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x454b810 to 0x86121cc UnityEngine.Material$$set_color (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x454b814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_ShortcutExtensions_<>c__DisplayClass69_0__<DOBlendableColor>b__1
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(param_5 + 0x10);
  fVar4 = *(float *)(param_5 + 0x14);
  lVar1 = *(long *)(param_5 + 0x20);
  fVar5 = *(float *)(param_5 + 0x18);
  fVar6 = *(float *)(param_5 + 0x1c);
  *(float *)(param_5 + 0x10) = param_1;
  *(float *)(param_5 + 0x14) = param_2;
  *(float *)(param_5 + 0x18) = param_3;
  *(float *)(param_5 + 0x1c) = param_4;
  if (lVar1 != 0) {
    fVar6 = param_4 - fVar6;
    fVar5 = param_3 - fVar5;
    fVar4 = param_2 - fVar4;
    fVar2 = (float)UnityEngine_Material__get_color(lVar1,0);
    UnityEngine_Material__set_color
              ((param_1 - fVar3) + fVar2,fVar4 + param_2,fVar5 + param_3,fVar6 + param_4,lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

