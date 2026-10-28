// rea decompile_all
// name: Utilities.PlayFxOnTransformMove$$Update
// address: 0x4517d74
// body: available
// range: 0x4517d74-0x4517ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4517ebc to 0x4535820 MoreMountains.NiceVibrations.MMVibrationManager$$Haptic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4517ec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_PlayFxOnTransformMove__Update
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar4 = *(float *)(param_4 + 0x2c);
    fVar5 = *(float *)(param_4 + 0x30);
    fVar7 = *(float *)(param_4 + 0x34);
    fVar6 = *(float *)(param_4 + 0x38);
    fVar2 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0x20),0);
    if (DAT_09517ea7 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09517ea7 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar7 = fVar7 - param_2;
    fVar5 = fVar5 - fVar2;
    fVar6 = fVar6 - param_3;
    fVar2 = fVar6 * fVar6;
    *(float *)(param_4 + 0x2c) = fVar4 + SQRT(fVar2 + fVar5 * fVar5 + fVar7 * fVar7);
    if (*(long *)(param_4 + 0x20) != 0) {
      uVar3 = UnityEngine_Transform__get_position(*(long *)(param_4 + 0x20),0);
      *(undefined4 *)(param_4 + 0x30) = uVar3;
      *(float *)(param_4 + 0x34) = fVar2;
      *(float *)(param_4 + 0x38) = fVar6;
      if (*(float *)(param_4 + 0x2c) < *(float *)(param_4 + 0x28)) {
        return;
      }
      *(undefined4 *)(param_4 + 0x2c) = 0;
      Utilities_ParticleSystemExtension__PlayIfExisted(*(undefined8 *)(param_4 + 0x40),0);
      lVar1 = *(long *)(param_4 + 0x48);
      UnityEngine_Random__Range(*(undefined4 *)(param_4 + 0x58),*(undefined4 *)(param_4 + 0x5c),0);
      if (lVar1 != 0) {
        UnityEngine_AudioSource__SetPitch(lVar1,0);
        if (*(long *)(param_4 + 0x48) != 0) {
          UnityEngine_AudioSource__PlayOneShot
                    (*(long *)(param_4 + 0x48),*(undefined8 *)(param_4 + 0x50),0);
          MoreMountains_NiceVibrations_MMVibrationManager__Haptic(*(undefined4 *)(param_4 + 0x60),0)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

