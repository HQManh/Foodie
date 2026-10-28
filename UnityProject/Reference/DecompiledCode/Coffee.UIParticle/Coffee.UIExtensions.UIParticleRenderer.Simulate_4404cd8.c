// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$Simulate
// address: 0x4404cd8
// body: available
// range: 0x4404cd8-0x4405003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4405000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleRenderer__Simulate
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,long param_5,
               ulong param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_28;
  
  fVar17 = param_3;
  if ((DAT_09517e98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ee8);
    DAT_09517e98 = 1;
  }
  local_28 = 0;
  local_78 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_5 + 0x118) != 0) {
    local_28 = UnityEngine_ParticleSystem__get_main(*(long *)(param_5 + 0x118),0);
    fVar5 = 0.0;
    if ((param_6 & 1) == 0) {
      uVar1 = UnityEngine_ParticleSystem_MainModule__get_useUnscaledTime(&local_28,0);
      if ((uVar1 & 1) == 0) {
        fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
      }
      else {
        fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      }
    }
    if (*(long *)(param_5 + 0x110) != 0) {
      fVar13 = *(float *)(*(long *)(param_5 + 0x110) + 0x118);
      fVar5 = fVar5 * fVar13;
      if ((0.0 < fVar5) && (*(char *)(param_5 + 0x144) != '\0')) {
        fVar6 = (float)UnityEngine_ParticleSystem_MainModule__get_duration(&local_28,0);
        fVar5 = fVar5 + fVar6;
        *(undefined1 *)(param_5 + 0x144) = 0;
      }
      uVar4 = *(undefined8 *)(param_5 + 0x118);
      if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = Coffee_UIParticleInternal_ParticleSystemExtensions__IsLocalSpace(uVar4);
      if ((*(long *)(param_5 + 0x118) != 0) &&
         (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x118),0), lVar2 != 0)) {
        uVar7 = UnityEngine_Transform__get_localPosition(lVar2,0);
        fVar6 = fVar17;
        fVar14 = fVar13;
        uVar8 = UnityEngine_Transform__get_localRotation(lVar2,0);
        fVar24 = fVar6;
        uVar21 = param_4;
        fVar23 = fVar14;
        fVar9 = (float)UnityEngine_Transform__get_position(lVar2,0);
        fVar18 = fVar24;
        fVar15 = fVar23;
        uVar10 = UnityEngine_Transform__get_rotation(lVar2,0);
        if (*(long *)(param_5 + 0x118) != 0) {
          local_78 = UnityEngine_ParticleSystem__get_emission(*(long *)(param_5 + 0x118),0);
          uVar3 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(&local_78,0);
          if ((uVar3 & 1) != 0) {
            UnityEngine_ParticleSystem_EmissionModule__get_rateOverDistance(&local_c0,&local_78,0);
            uStack_98 = uStack_b8;
            local_a0 = local_c0;
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            fVar11 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&local_a0,0);
            if ((((0.0 < fVar11) &&
                 (fVar11 = (float)UnityEngine_ParticleSystem_EmissionModule__get_rateOverDistanceMultiplier
                                            (&local_78,0), 0.0 < fVar11)) && ((param_6 & 1) == 0))
               && (*(char *)(param_5 + 0xe0) != '\0')) {
              fVar22 = *(float *)(param_5 + 0x124);
              fVar11 = *(float *)(param_5 + 0x128);
              fVar19 = *(float *)(param_5 + 300);
              if ((uVar1 & 1) == 0) {
                fVar16 = *(float *)(param_5 + 0x134);
                fVar20 = *(float *)(param_5 + 0x138);
                fVar12 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse
                                          (*(undefined4 *)(param_5 + 0x130));
                fVar22 = fVar22 * fVar12;
                fVar11 = fVar11 * fVar16;
                fVar19 = fVar19 * fVar20;
              }
              UnityEngine_Transform__SetPositionAndRotation
                        (fVar22,fVar11,fVar19,uVar10,fVar15,fVar18,uVar21,lVar2,0);
              if (*(long *)(param_5 + 0x118) == 0) goto LAB_04405000;
              UnityEngine_ParticleSystem__Simulate(0,*(long *)(param_5 + 0x118),0,0,0,0);
            }
          }
          if ((uVar1 & 1) == 0) {
            fVar11 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse
                                      (param_1,param_2,param_3);
            fVar9 = fVar9 * fVar11;
            fVar23 = fVar23 * param_2;
            fVar24 = fVar24 * param_3;
          }
          UnityEngine_Transform__SetPositionAndRotation
                    (fVar9,fVar23,fVar24,uVar10,fVar15,fVar18,uVar21,lVar2,0);
          if (*(long *)(param_5 + 0x118) != 0) {
            UnityEngine_ParticleSystem__Simulate(fVar5,*(long *)(param_5 + 0x118),0,0,0,0);
            UnityEngine_Transform__set_localPosition(uVar7,fVar13,fVar17,lVar2,0);
            UnityEngine_Transform__set_localRotation(uVar8,fVar14,fVar6,param_4,lVar2,0);
            return;
          }
        }
      }
    }
  }
LAB_04405000:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

