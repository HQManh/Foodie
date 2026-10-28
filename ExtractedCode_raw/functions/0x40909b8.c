// rea decompile_all
// name: TrungKienPack.Particle.ParticleColor$$BuildRandomColorGradient
// address: 0x40909b8
// body: available
// range: 0x40909b8-0x409106f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4090c80 to 0x86f6b20 UnityEngine.ParticleSystem.MinMaxGradient$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4091068 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409106c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_ParticleColor__BuildRandomColorGradient
               (undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_09515d0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917ffa8);
    FUN_03f5c2a4(&DAT_0917ffb0);
    FUN_03f5c2a4(&DAT_09184da0);
    FUN_03f5c2a4(&DAT_0917b2f8);
    FUN_03f5c2a4(&DAT_0917b4a8);
    DAT_09515d0d = 1;
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917b2f8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04090a98;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2f8,0);
LAB_04090a98:
    iVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (iVar2 != 0) {
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b2f8) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04090b20;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2f8,0);
LAB_04090b20:
      iVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
      if (iVar2 != 1) {
        lVar6 = FUN_03f5c394(DAT_0917ffa8,2);
        local_c8 = 0;
        UnityEngine_GradientAlphaKey___ctor(0x3f800000,0,&local_c8,0);
        if (lVar6 == 0) {
LAB_0409106c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = local_c8;
          local_e0 = 0;
          UnityEngine_GradientAlphaKey___ctor(0x3f800000,0x3f800000,&local_e0,0);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar6 + 0x28) = local_e0;
            lVar7 = *param_2;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_0917b2f8) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_04090c90;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2f8,0);
LAB_04090c90:
            iVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
            lVar7 = *param_2;
            uVar1 = *(ushort *)(lVar7 + 0x12e);
            uVar9 = (ulong)uVar1;
            if (iVar2 < 5) {
              if (uVar1 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_0917b2f8) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_04090e30;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2f8,0);
LAB_04090e30:
              uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
              lVar7 = FUN_03f5c394(DAT_0917ffb0,uVar4 << 1);
              if (0 < (int)uVar4) {
                uVar9 = 0;
                do {
                  lVar8 = *param_2;
                  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_0917b4a8) {
                        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04090ed0;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4a8,0);
LAB_04090ed0:
                  (*(code *)*puVar5)(param_2,uVar9 & 0xffffffff,puVar5[1]);
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_b8 = 0;
                  UnityEngine_GradientColorKey___ctor(&local_c8,0);
                  if (lVar7 == 0) goto LAB_0409106c;
                  if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar9 << 1) goto LAB_04091068;
                  lVar8 = lVar7 + (long)(int)(uVar9 << 1) * 0x14;
                  *(undefined4 *)(lVar8 + 0x30) = local_b8;
                  *(undefined8 *)(lVar8 + 0x28) = uStack_c0;
                  *(undefined8 *)(lVar8 + 0x20) = local_c8;
                  lVar8 = *param_2;
                  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_0917b4a8) {
                        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04090f78;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4a8,0);
LAB_04090f78:
                  (*(code *)*puVar5)(param_2,uVar9 & 0xffffffff,puVar5[1]);
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_d0 = 0;
                  UnityEngine_GradientColorKey___ctor(&local_e0,0);
                  uVar10 = uVar9 << 1 | 1;
                  if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_04091068;
                  lVar8 = lVar7 + (long)(int)uVar10 * 0x14;
                  uVar9 = uVar9 + 1;
                  *(undefined4 *)(lVar8 + 0x30) = local_d0;
                  *(undefined8 *)(lVar8 + 0x28) = uStack_d8;
                  *(undefined8 *)(lVar8 + 0x20) = local_e0;
                } while (uVar9 != uVar4);
              }
            }
            else {
              if (uVar1 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_0917b2f8) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_04090d24;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2f8,0);
LAB_04090d24:
              uVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
              uVar4 = uVar3;
              if (7 < (int)uVar3) {
                uVar4 = 8;
              }
              lVar7 = FUN_03f5c394(DAT_0917ffb0,(ulong)uVar4);
              if (0 < (int)uVar3) {
                uVar9 = 0;
                do {
                  lVar8 = *param_2;
                  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_0917b4a8) {
                        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04090dc4;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4a8,0);
LAB_04090dc4:
                  (*(code *)*puVar5)(param_2,uVar9 & 0xffffffff,puVar5[1]);
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_b8 = 0;
                  UnityEngine_GradientColorKey___ctor(&local_c8,0);
                  if (lVar7 == 0) goto LAB_0409106c;
                  if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_04091068;
                  lVar8 = lVar7 + uVar9 * 0x14;
                  uVar9 = uVar9 + 1;
                  *(undefined4 *)(lVar8 + 0x30) = local_b8;
                  *(undefined8 *)(lVar8 + 0x28) = uStack_c0;
                  *(undefined8 *)(lVar8 + 0x20) = local_c8;
                } while (uVar9 != uVar4);
              }
            }
            lVar8 = thunk_FUN_03f9944c(DAT_09184da0);
            UnityEngine_Gradient___ctor(lVar8,0);
            if (lVar8 != 0) {
              UnityEngine_Gradient__SetKeys(lVar8,lVar7,lVar6,0);
              UnityEngine_ParticleSystem_MinMaxGradient___ctor(&local_b0,lVar8,0);
              UnityEngine_ParticleSystem_MinMaxGradient__set_mode(&local_b0,4,0);
              param_1[5] = uStack_88;
              param_1[4] = local_90;
              param_1[1] = uStack_a8;
              *param_1 = local_b0;
              param_1[3] = uStack_98;
              param_1[2] = local_a0;
              param_1[6] = local_80;
              return;
            }
            goto LAB_0409106c;
          }
        }
LAB_04091068:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b4a8) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04090c38;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4a8,0);
LAB_04090c38:
      uVar12 = (*(code *)*puVar5)(param_2,0,puVar5[1]);
      param_1[6] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      goto LAB_04090c60;
    }
  }
  uVar12 = 0x3f800000;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
LAB_04090c60:
  UnityEngine_ParticleSystem_MinMaxGradient___ctor(uVar12,param_1,0);
  return;
}

