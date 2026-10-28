// rea decompile_all
// name: TrungKienPack.Particle.VFXComboControl$$Play
// address: 0x4091a44
// body: available
// range: 0x4091a44-0x4091cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4091ce8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091cec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091cf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4091cfc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_VFXComboControl__Play(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  undefined8 local_28;
  
  if ((DAT_09515d18 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3c20);
    FUN_03f5c2a4(&DAT_091a3c28);
    FUN_03f5c2a4(&DAT_091a3c30);
    FUN_03f5c2a4(&DAT_091aeeb8);
    DAT_09515d18 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  local_28 = 0;
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_58 = 0;
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x38)) {
LAB_04091cfc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x38) * 8 + 0x20);
    if (lVar6 != 0) {
      TrungKienPack_Particle_VFXComboControl__SetTexture(param_1,*(undefined8 *)(lVar6 + 0x10));
      if (*(long *)(param_1 + 0x40) != 0) {
        local_28 = UnityEngine_ParticleSystem__get_main(*(long *)(param_1 + 0x40),0);
        lVar6 = *(long *)(param_1 + 0x30);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x38)) goto LAB_04091cfc;
          lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x38) * 8 + 0x20);
          if (lVar6 != 0) {
            UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit
                      (&local_d0,*(float *)(param_1 + 0x28) * *(float *)(lVar6 + 0x38),0);
            uStack_78 = uStack_c8;
            local_80 = local_d0;
            uStack_68 = uStack_b8;
            uStack_70 = uStack_c0;
            UnityEngine_ParticleSystem_MainModule__set_startSize(&local_28,&local_80,0);
            if (*(long *)(param_1 + 0x70) != 0) {
              FUN_057e185c(&local_98,*(long *)(param_1 + 0x70),DAT_091aeeb8);
              local_40 = local_88;
              puStack_48 = puStack_90;
              local_50 = local_98;
              local_98 = 0;
              puStack_90 = &local_50;
              while (uVar3 = FUN_071bd28c(&local_50,DAT_091a3c28), (uVar3 & 1) != 0) {
                if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_58 = UnityEngine_ParticleSystem__get_main(local_40,0);
                lVar6 = *(long *)(param_1 + 0x30);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x38)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x38) * 8 + 0x20);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                          (&local_d0,*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                           *(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),0);
                uStack_e8 = uStack_a8;
                local_f0 = local_b0;
                uStack_108 = uStack_c8;
                local_110 = local_d0;
                uStack_f8 = uStack_b8;
                uStack_100 = uStack_c0;
                local_e0 = local_a0;
                UnityEngine_ParticleSystem_MainModule__set_startColor(&local_58,&local_110,0);
              }
              FUN_071bd288(&local_50,DAT_091a3c20);
              if (*(long *)(param_1 + 0x20) != 0) {
                UnityEngine_ParticleSystem__Play(*(long *)(param_1 + 0x20),0);
                lVar6 = *(long *)(param_1 + 0x60);
                uVar4 = TrungKienPack_Particle_VFXComboControl__LevelText
                                  (param_1,*(undefined4 *)(param_1 + 0x38));
                uVar4 = System_String__Concat(uVar4,*(undefined8 *)(param_1 + 0x68),0);
                if (lVar6 != 0) {
                  TMPro_TMP_Text__SetText(lVar6,uVar4,0);
                  lVar6 = *(long *)(param_1 + 0x30);
                  if (lVar6 != 0) {
                    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x38)) goto LAB_04091cfc;
                    lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x38) * 8 + 0x20);
                    if ((lVar6 != 0) && (plVar5 = *(long **)(param_1 + 0x60), plVar5 != (long *)0x0)
                       ) {
                      (**(code **)(*plVar5 + 0x2a8))
                                (*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                                 *(undefined4 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x34),plVar5,
                                 *(undefined8 *)(*plVar5 + 0x2b0));
                      if (*(long *)(param_1 + 0x58) != 0) {
                        TrungKienPack_Particle_SimpleCurveScale__Play();
                        iVar1 = *(int *)(param_1 + 0x38) + 1;
                        *(int *)(param_1 + 0x38) = iVar1;
                        if (*(long *)(param_1 + 0x30) != 0) {
                          iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
                          if (iVar2 <= iVar1) {
                            *(int *)(param_1 + 0x38) = iVar2 + -1;
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

