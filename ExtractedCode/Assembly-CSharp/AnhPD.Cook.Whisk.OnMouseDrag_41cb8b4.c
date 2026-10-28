// rea decompile_all
// name: AnhPD.Cook.Whisk$$OnMouseDrag
// address: 0x41cb8b4
// body: available
// range: 0x41cb8b4-0x41cbd63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cbd30 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cbd5c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cbd60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Cook_Whisk__OnMouseDrag(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  
  if ((DAT_09516a08 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbce8);
    FUN_03f5c2a4(&DAT_091df338);
    DAT_09516a08 = 1;
  }
  if (*(char *)(param_3 + 0x7c) != '\0') {
    return;
  }
  lVar4 = UnityEngine_Camera__get_main(0);
  UnityEngine_Input__get_mousePosition(0);
  if (lVar4 != 0) {
    uVar9 = UnityEngine_Camera__ScreenToWorldPoint(lVar4,0);
    uVar14 = param_2;
    lVar4 = UnityEngine_Component__get_transform(param_3,0);
    if (lVar4 != 0) {
      uVar10 = UnityEngine_Transform__get_position(lVar4,0);
      if (*(long *)(param_3 + 0x20) != 0) {
        uVar15 = uVar14;
        fVar11 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x20),0);
        fVar12 = (float)AnhPD_Cook_Whisk__GetAngleABC(uVar10,uVar14,fVar11,uVar15,uVar9,param_2);
        if (*(long *)(param_3 + 0x20) != 0) {
          UnityEngine_Transform__get_eulerAngles(*(long *)(param_3 + 0x20),0);
          if (*(long *)(param_3 + 0x20) != 0) {
            fVar17 = fVar11;
            UnityEngine_Transform__get_eulerAngles(*(long *)(param_3 + 0x20),0);
            fVar13 = (float)UnityEngine_Time__get_deltaTime(0);
            fVar19 = 0.0;
            fVar13 = fVar13 * *(float *)(param_3 + 0x3c);
            fVar16 = 1.0;
            if (fVar13 <= 1.0) {
              fVar16 = fVar13;
            }
            fVar2 = 0.0;
            if (0.0 <= fVar13) {
              fVar2 = fVar16;
            }
            if (*(long *)(param_3 + 0x20) != 0) {
              fVar11 = fVar11 + ((fVar12 + fVar17) - fVar11) * fVar2;
              UnityEngine_Transform__get_eulerAngles(*(long *)(param_3 + 0x20),0);
              fVar12 = ABS(fVar11 - fVar19);
              *(float *)(param_3 + 0x74) = *(float *)(param_3 + 0x74) + fVar12;
              if (*(long *)(param_3 + 0x20) != 0) {
                UnityEngine_Transform__set_eulerAngles(0,0,fVar11,*(long *)(param_3 + 0x20),0);
                if (360.0 <= *(float *)(param_3 + 0x74)) {
                  iVar1 = *(int *)(param_3 + 0x70) + 1;
                  *(int *)(param_3 + 0x70) = iVar1;
                  fVar11 = fmodf(*(float *)(param_3 + 0x74),360.0);
                  cVar3 = DAT_095163ce;
                  iVar18 = *(int *)(param_3 + 0x38);
                  fVar17 = *(float *)(param_3 + 0x6c);
                  *(float *)(param_3 + 0x74) = fVar11;
                  if (cVar3 == '\0') {
                    FUN_03f5c2a4(&DAT_09187e80);
                    DAT_095163ce = '\x01';
                  }
                  fVar17 = (float)iVar18 / fVar17;
                  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (((float)(int)fVar17 == INFINITY) || ((int)fVar17 <= iVar1)) {
                    if (*(long *)(param_3 + 0x28) != 0) {
                      uVar8 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x28),0);
                      AnhPD_APDUtilities__Appear(0x3dcccccd,uVar8,0);
                      lVar4 = *(long *)(param_3 + 0x60);
                      *(undefined1 *)(param_3 + 0x7c) = 1;
                      if (lVar4 != 0) {
                        (**(code **)(lVar4 + 0x18))
                                  (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
                      }
                      uVar8 = *(undefined8 *)(param_3 + 0x30);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
                      if ((uVar5 & 1) != 0) {
                        if (*(long *)(param_3 + 0x30) == 0) {
                          return;
                        }
                        uVar8 = DG_Tweening_DOTweenModuleSprite__DOFade
                                          (0,0x3f800000,*(long *)(param_3 + 0x30),0);
                        uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
                        DG_Tweening_TweenCallback___ctor(uVar6,param_3,DAT_091df338,0);
                        FUN_04d956bc(uVar8,uVar6,DAT_091dbce8);
                        return;
                      }
                      lVar4 = UnityEngine_Component__get_gameObject(param_3,0);
                      if (lVar4 != 0) {
                        UnityEngine_GameObject__SetActive(lVar4,0,0);
                        return;
                      }
                    }
                    goto LAB_041cbd60;
                  }
                  if (*(long *)(param_3 + 0x50) == 0) goto LAB_041cbd60;
                  uVar5 = UnityEngine_AudioSource__get_isPlaying(*(long *)(param_3 + 0x50),0);
                  if ((uVar5 & 1) == 0) {
                    if (*(long *)(param_3 + 0x50) == 0) goto LAB_041cbd60;
                    UnityEngine_AudioSource__Play(*(long *)(param_3 + 0x50),0);
                  }
                }
                fVar17 = (float)*(int *)(param_3 + 0x70) / (float)*(int *)(param_3 + 0x38);
                fVar11 = 1.0;
                if (fVar17 <= 1.0) {
                  fVar11 = fVar17;
                }
                fVar16 = 0.0;
                if (0.0 <= fVar17) {
                  fVar16 = fVar11;
                }
                *(float *)(param_3 + 0x78) = fVar16;
                AnhPD_APDUtilities__SetAlpha
                          (fVar16 + (*(float *)(param_3 + 0x74) / 360.0) /
                                    (float)*(int *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x28),
                           0);
                uVar8 = *(undefined8 *)(param_3 + 0x40);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
                if ((uVar5 & 1) == 0) {
LAB_041cbb40:
                  if (fVar12 <= 0.1) {
                    return;
                  }
                  if (*(long *)(param_3 + 0x48) != 0) {
                    AnhPD_FoodOrder_MixingSauce__OnMixing(*(long *)(param_3 + 0x48),0);
                  }
                  lVar4 = *(long *)(param_3 + 0x80);
                  if (lVar4 == 0) {
                    return;
                  }
                    /* WARNING: Could not recover jumptable at 0x041cbba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar4 + 0x18))
                            (*(float *)(param_3 + 0x78) +
                             (*(float *)(param_3 + 0x74) / 360.0) / (float)*(int *)(param_3 + 0x38),
                             *(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
                  return;
                }
                if (*(long *)(param_3 + 0x40) != 0) {
                  lVar4 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x40),0);
                  if (DAT_09515cf3 == '\0') {
                    FUN_03f5c2a4(&DAT_0918cbd0);
                    DAT_09515cf3 = '\x01';
                  }
                  if (lVar4 != 0) {
                    fVar11 = *(float *)(param_3 + 0x78);
                    lVar7 = *(long *)(DAT_0918cbd0 + 0xb8);
                    UnityEngine_Transform__set_localScale
                              (fVar11 * *(float *)(lVar7 + 0xc),fVar11 * *(float *)(lVar7 + 0x10),
                               *(float *)(lVar7 + 0x14) * fVar11,lVar4,0);
                    goto LAB_041cbb40;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_041cbd60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

