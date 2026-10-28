// rea decompile_all
// name: Coffee.UIExtensions.UIParticleAttractor$$GetAttractedPosition
// address: 0x4403874
// body: available
// range: 0x4403874-0x4403a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Coffee_UIExtensions_UIParticleAttractor__GetAttractedPosition
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8,long param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  
  fVar3 = *(float *)(param_9 + 0x38);
  fVar4 = param_3;
  if (*(int *)(param_9 + 0x40) == 1) {
    fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  }
  else {
    fVar2 = param_2;
    if (*(int *)(param_9 + 0x40) != 0) goto LAB_044038f4;
    fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  }
  fVar3 = fVar3 * fVar2 * 60.0;
  fVar2 = 60.0;
LAB_044038f4:
  iVar1 = *(int *)(param_9 + 0x3c);
  if (iVar1 == 2) {
    local_68 = param_4;
    fStack_64 = param_5;
    local_60 = param_6;
    local_5c = param_1;
    fStack_58 = param_2;
    local_54 = param_3;
    param_4 = (float)UnityEngine_Vector3__Internal_Slerp(param_8 / param_7,&local_5c,&local_68,0);
    param_6 = fVar4;
    param_5 = fVar2;
  }
  else if (iVar1 == 1) {
    param_8 = param_8 / param_7;
    fVar4 = 1.0;
    if (param_8 <= 1.0) {
      fVar4 = param_8;
    }
    fVar2 = 0.0;
    if (0.0 <= param_8) {
      fVar2 = fVar4;
    }
    param_4 = param_1 + (param_4 - param_1) * fVar2;
    param_6 = param_3 + (param_6 - param_3) * fVar2;
    param_5 = param_2 + (param_5 - param_2) * fVar2;
  }
  else if (iVar1 == 0) {
    fVar3 = fVar3 / param_7;
  }
  if (DAT_09517ea8 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09517ea8 = '\x01';
  }
  fVar4 = param_4 - param_1;
  fVar2 = (param_6 - param_3) * (param_6 - param_3) +
          fVar4 * fVar4 + (param_5 - param_2) * (param_5 - param_2);
  if ((fVar2 != 0.0) && ((fVar3 < 0.0 || (fVar3 * fVar3 < fVar2)))) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_4 = param_1 + fVar3 * (fVar4 / SQRT(fVar2));
  }
  return param_4;
}

