// rea decompile_all
// name: Lofelt.NiceVibrations.HapticPatterns$$PlayPreset
// address: 0x7364ff0
// body: available
// range: 0x7364ff0-0x73651a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7365110 to 0x7364ba4 Lofelt.NiceVibrations.HapticController$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7365194 to 0x7366758 Lofelt.NiceVibrations.LofeltHaptics$$PlayMaximumAmplitudePattern (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_HapticPatterns__PlayPreset(int param_1)

{
  ulong uVar1;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_0952089a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ae0);
    FUN_03f5c2a4(&DAT_09184fd0);
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_09187c48);
    DAT_0952089a = 1;
  }
  if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095208da == '\0') {
    FUN_03f5c2a4(&DAT_09184fd0);
    DAT_095208da = '\x01';
  }
  if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((param_1 != -1) && (*(char *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x24) != '\0')) {
    if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Lofelt_NiceVibrations_HapticPatterns__GetPresetForType(auStack_38,param_1);
    if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Lofelt_NiceVibrations_HapticController__Init();
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Lofelt_NiceVibrations_HapticController__Load(uStack_28);
      Lofelt_NiceVibrations_HapticController__Loop(0);
      Lofelt_NiceVibrations_HapticController__Play();
      return;
    }
    if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09516faa == '\0') {
      FUN_03f5c2a4(&DAT_09183ae0);
      DAT_09516faa = '\x01';
    }
    if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_09183ae0 + 0xb8) + 9) != '\0') {
      if (*(int *)(DAT_09187c48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Lofelt_NiceVibrations_LofeltHaptics__PlayMaximumAmplitudePattern(local_30);
      return;
    }
  }
  return;
}

