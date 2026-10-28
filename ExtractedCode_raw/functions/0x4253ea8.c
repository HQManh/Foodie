// rea decompile_all
// name: CookOrder.BlurBackdropSafety$$EvaluateStartup
// address: 0x4253ea8
// body: available
// range: 0x4253ea8-0x425406f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_BlurBackdropSafety__EvaluateStartup(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  int local_24;
  
  if ((DAT_09516eff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181dd8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09213b60);
    FUN_03f5c2a4(&DAT_09213b58);
    FUN_03f5c2a4(&DAT_09218150);
    FUN_03f5c2a4(&DAT_09218148);
    DAT_09516eff = 1;
  }
  if (**(char **)(DAT_09181dd8 + 0xb8) == '\0') {
    **(char **)(DAT_09181dd8 + 0xb8) = '\x01';
    iVar1 = UnityEngine_PlayerPrefs__GetInt(DAT_09218150,0,0);
    iVar2 = UnityEngine_PlayerPrefs__GetInt(DAT_09218148,0,0);
    if (iVar2 == 1) {
      iVar1 = iVar1 + 1;
      UnityEngine_PlayerPrefs__SetInt(DAT_09218150,iVar1,0);
      UnityEngine_PlayerPrefs__SetInt(DAT_09218148,0,0);
      UnityEngine_PlayerPrefs__Save(0);
      local_24 = iVar1;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
      local_28 = 2;
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
      uVar3 = System_String__Format(DAT_09213b60,uVar3,uVar4,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar3,0);
    }
    *(bool *)(*(long *)(DAT_09181dd8 + 0xb8) + 1) = 1 < iVar1;
    if (1 < iVar1) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09213b58,0);
    }
  }
  return;
}

