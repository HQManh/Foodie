// rea decompile_all
// name: Coffee.UIParticleInternal.ParticleSystemExtensions$$ValidateShape
// address: 0x43fd51c
// body: available
// range: 0x43fd51c-0x43fd727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fd724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIParticleInternal_ParticleSystemExtensions__ValidateShape
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_38 = UnityEngine_ParticleSystem__get_shape(param_4,0);
  uVar1 = UnityEngine_ParticleSystem_ShapeModule__get_enabled(&local_38,0);
  if (((uVar1 & 1) != 0) &&
     (uVar1 = UnityEngine_ParticleSystem_ShapeModule__get_alignToDirection(&local_38,0),
     (uVar1 & 1) != 0)) {
    fVar2 = (float)UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
    UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
    UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
    param_3 = fVar2 * param_2 * param_3;
    if (DAT_09515cee == '\0') {
      FUN_03f5c2a4(&DAT_09187e98);
      DAT_09515cee = '\x01';
    }
    fVar2 = ABS(param_3);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar4 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
    fVar3 = fVar2 * 1e-06;
    if (fVar2 * 1e-06 <= fVar4) {
      fVar3 = fVar4;
    }
    if (ABS(0.0 - param_3) < fVar3) {
      fVar2 = (float)UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
      if (DAT_09515cee == '\0') {
        FUN_03f5c2a4(&DAT_09187e98);
        DAT_09515cee = '\x01';
      }
      fVar4 = 0.0;
      fVar3 = ABS(fVar2);
      if (ABS(fVar2) <= 0.0) {
        fVar3 = 0.0;
      }
      fVar5 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
      fVar6 = fVar3 * 1e-06;
      if (fVar3 * 1e-06 <= fVar5) {
        fVar6 = fVar5;
      }
      UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
      if (fVar6 <= ABS(0.0 - fVar2)) {
        if (DAT_09515cee == '\0') {
          FUN_03f5c2a4(&DAT_09187e98);
          DAT_09515cee = '\x01';
        }
        fVar2 = ABS(fVar4);
        if (ABS(fVar4) <= 0.0) {
          fVar2 = 0.0;
        }
        fVar6 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
        fVar3 = fVar2 * 1e-06;
        if (fVar2 * 1e-06 <= fVar6) {
          fVar3 = fVar6;
        }
        UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
        if (fVar3 <= ABS(0.0 - fVar4)) {
          uVar1 = FUN_04406560(fVar6,0,0);
          if ((uVar1 & 1) == 0) {
            return;
          }
          UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
        }
      }
      UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
      UnityEngine_ParticleSystem_ShapeModule__get_scale(&local_38,0);
    }
  }
  return;
}

