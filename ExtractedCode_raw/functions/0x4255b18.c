// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$SetGameplaySfxMuted
// address: 0x4255b18
// body: available
// range: 0x4255b18-0x4255c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4255be8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4255c00 to 0x4255c04 CakeOrder.AudioManagerCakeOrder$$ApplyGameplaySfxMute (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__SetGameplaySfxMuted(long param_1,byte param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((((*(char *)(param_1 + 0x108) != '\0' ^ param_2) & 1) == 0) && ((param_3 & 1) == 0)) {
    return;
  }
  *(byte *)(param_1 + 0x108) = param_2 & 1;
  if (*(long *)(param_1 + 0x110) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(long *)(param_1 + 0x110),0);
    *(undefined8 *)(param_1 + 0x110) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x110,0);
  }
  uVar3 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  if ((((param_3 & 1) == 0) && (0.0 < *(float *)(param_1 + 0x104))) &&
     (uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0), (uVar1 & 1) != 0)) {
    uVar2 = CakeOrder_AudioManagerCakeOrder__IEBlendGameplaySfxMute(uVar3,param_1);
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar2,0);
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x110);
    return;
  }
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  CakeOrder_AudioManagerCakeOrder__ApplyGameplaySfxMute(param_1);
  return;
}

