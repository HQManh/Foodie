// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$ApplySfxConfig
// address: 0x4255a1c
// body: available
// range: 0x4255a1c-0x4255b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4255b04 to 0x4256ad8 CakeOrder.AudioManagerCakeOrder$$SetBusVolume (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__ApplySfxConfig(long param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_09516f1a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0920c310);
    FUN_03f5c2a4(&DAT_091fb820);
    FUN_03f5c2a4(&DAT_09211648);
    DAT_09516f1a = 1;
  }
  fVar3 = 1.0;
  fVar2 = (float)UnityEngine_PlayerPrefs__GetFloat(0x3f800000,DAT_0920c310,0);
  fVar4 = *(float *)(param_1 + 0x44);
  uVar1 = CakeOrder_AudioManagerCakeOrder__get_IsSfxActive();
  if ((uVar1 & 1) == 0) {
    fVar3 = 0.0;
  }
  fVar2 = fVar2 * fVar4 * fVar3;
  CakeOrder_AudioManagerCakeOrder__SetBusVolume
            (fVar2,*(undefined4 *)(param_1 + 0xf4),param_1,DAT_0920c310);
  CakeOrder_AudioManagerCakeOrder__SetBusVolume(fVar2,0,param_1,DAT_09211648);
  CakeOrder_AudioManagerCakeOrder__SetBusVolume
            (*(undefined4 *)(param_1 + 0x48),0,param_1,DAT_091fb820);
  return;
}

