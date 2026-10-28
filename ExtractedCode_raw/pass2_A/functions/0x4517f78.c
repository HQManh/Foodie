// rea decompile_all
// name: Utilities.PlayFxRepeatly$$Trigger
// address: 0x4517f78
// body: available
// range: 0x4517f78-0x451808b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4518058 to 0x8655d28 UnityEngine.Behaviour$$set_enabled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_PlayFxRepeatly__Trigger(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_09518575 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518575 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    Utilities_AudioSourceExtension__PlaySfx
              (*(undefined4 *)(param_1 + 0x50),0x3e4ccccd,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x48),0);
  }
  MoreMountains_NiceVibrations_MMVibrationManager__Haptic(*(undefined4 *)(param_1 + 0x54),0);
  Utilities_ParticleSystemExtension__PlayIfExisted(*(undefined8 *)(param_1 + 0x38),0);
  if ((-1 < *(int *)(param_1 + 0x5c)) && (*(int *)(param_1 + 0x5c) <= *(int *)(param_1 + 100))) {
    UnityEngine_Behaviour__set_enabled(param_1,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    fVar4 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  else {
    fVar4 = (float)UnityEngine_Time__get_time(0);
  }
  fVar5 = (float)UnityEngine_Random__Range
                           (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0);
  *(float *)(param_1 + 0x60) = fVar4 + fVar5;
  return;
}

