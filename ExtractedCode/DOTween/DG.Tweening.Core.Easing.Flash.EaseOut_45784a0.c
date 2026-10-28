// rea decompile_all
// name: DG.Tweening.Core.Easing.Flash$$EaseOut
// address: 0x45784a0
// body: available
// range: 0x45784a0-0x4578573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4578570 to 0x457a5cc DG.Tweening.Core.Easing.Flash$$WeightedEase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_Easing_Flash__EaseOut
               (float param_1,float param_2,float param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar4 = param_2 / param_3;
  fVar3 = (param_1 / param_2) * param_3;
  uVar1 = 0x80000000;
  if ((float)(int)fVar3 != INFINITY) {
    uVar1 = (int)fVar3;
  }
  bVar2 = (uVar1 & 1) != 0;
  fVar3 = fVar4;
  if (bVar2) {
    fVar3 = 0.0;
  }
  fVar5 = -1.0;
  if (bVar2) {
    fVar5 = 1.0;
  }
  fVar3 = (fVar5 * ((param_1 - fVar4 * (float)(int)(uVar1 - 1)) - fVar3)) / fVar4;
  DG_Tweening_Core_Easing_Flash__WeightedEase(param_3,param_4,fVar4,fVar5,-(fVar3 * (fVar3 + -2.0)))
  ;
  return;
}

