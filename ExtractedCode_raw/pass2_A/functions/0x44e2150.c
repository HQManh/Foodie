// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingToolPresentation$$Render
// address: 0x44e2150
// body: available
// range: 0x44e2150-0x44e2a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e2958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e2a34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingToolPresentation__Render
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  long local_78;
  long local_68;
  
  if ((DAT_0951836d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c03d0);
    FUN_03f5c2a4(&DAT_091c0480);
    FUN_03f5c2a4(&DAT_0919e018);
    FUN_03f5c2a4(&DAT_0919e020);
    FUN_03f5c2a4(&DAT_0919d680);
    FUN_03f5c2a4(&DAT_0919d688);
    FUN_03f5c2a4(&DAT_0919d690);
    FUN_03f5c2a4(&DAT_0919e030);
    FUN_03f5c2a4(&DAT_091c9f20);
    FUN_03f5c2a4(&DAT_091cada0);
    FUN_03f5c2a4(&DAT_091cb448);
    FUN_03f5c2a4(&DAT_09178700);
    FUN_03f5c2a4(&DAT_09178708);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e168);
    FUN_03f5c2a4(&DAT_091e8080);
    FUN_03f5c2a4(&DAT_091e8088);
    FUN_03f5c2a4(&DAT_091e80a0);
    FUN_03f5c2a4(&DAT_0918f790);
    FUN_03f5c2a4(&DAT_0918f788);
    DAT_0951836d = 1;
  }
  local_68 = 0;
  local_78 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918f790);
  System_Object___ctor(lVar2,0);
  if (*(char *)(param_1 + 0x81) == '\0') {
    lVar9 = *(long *)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x81) = 1;
    lVar3 = DAT_091c03d0;
    if (lVar9 == 0) {
      lVar9 = *(long *)(DAT_091c03d0 + 0x38);
      if (lVar9 == 0) {
        FUN_03f95ac8(DAT_091c03d0);
        lVar9 = *(long *)(lVar3 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar9 = **(long **)(lVar3 + 0xb8);
      if (lVar9 == 0) goto LAB_044e2958;
    }
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) goto LAB_044e2a34;
        lVar3 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_044e2958;
        uVar8 = *(undefined8 *)(lVar3 + 0x40);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
        if ((uVar4 & 1) != 0) {
          plVar5 = *(long **)(lVar3 + 0x40);
          if (plVar5 == (long *)0x0) goto LAB_044e2958;
          (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    FUN_06ef1fe8(*(long *)(param_1 + 0x68),*(undefined4 *)(param_2 + 0x14),&local_68,DAT_0919d680);
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_06ef04f8(*(long *)(param_1 + 0x68),*(undefined4 *)(param_2 + 0x14),param_2,DAT_0919d690);
      if (*(long *)(param_1 + 0x68) != 0) {
        uVar8 = FUN_06ef0310(*(long *)(param_1 + 0x68),DAT_0919d688);
        if (*(int *)(DAT_0918f788 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f788);
        }
        puVar6 = *(undefined8 **)(DAT_0918f788 + 0xb8);
        lVar3 = puVar6[3];
        if (lVar3 == 0) {
          if (*(int *)(DAT_0918f788 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f788);
            puVar6 = *(undefined8 **)(DAT_0918f788 + 0xb8);
          }
          uVar11 = *puVar6;
          lVar3 = thunk_FUN_03f9944c(DAT_09178700);
          FUN_05322d94(lVar3,uVar11,DAT_091e8080,0);
          plVar5 = (long *)(*(long *)(DAT_0918f788 + 0xb8) + 0x18);
          *plVar5 = lVar3;
          thunk_FUN_03f5d7b8(plVar5,lVar3);
        }
        uVar8 = FUN_04b0cafc(uVar8,lVar3,DAT_091cb448);
        lVar3 = FUN_04b049e4(uVar8,DAT_091cada0);
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x18) == 0) {
            fVar13 = 0.0;
          }
          else {
            if (*(int *)(DAT_0918f788 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar6 = *(undefined8 **)(DAT_0918f788 + 0xb8);
            lVar9 = puVar6[4];
            if (lVar9 == 0) {
              if (*(int *)(DAT_0918f788 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar6 = *(undefined8 **)(DAT_0918f788 + 0xb8);
              }
              uVar8 = *puVar6;
              lVar9 = thunk_FUN_03f9944c(DAT_09178708);
              FUN_05323790(lVar9,uVar8,DAT_091e8088,0);
              plVar5 = (long *)(*(long *)(DAT_0918f788 + 0xb8) + 0x20);
              *plVar5 = lVar9;
              thunk_FUN_03f5d7b8(plVar5,lVar9);
            }
            dVar12 = (double)FUN_04aea0e4(lVar3,lVar9,DAT_091c9f20);
            fVar13 = (float)dVar12;
          }
          uVar8 = *(undefined8 *)(param_1 + 0x60);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_044e2958;
            UnityEngine_GameObject__SetActive
                      (*(long *)(param_1 + 0x60),*(int *)(lVar3 + 0x18) != 0,0);
          }
          uVar8 = *(undefined8 *)(param_1 + 0x58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_044e2958;
            UnityEngine_UI_Slider__set_normalizedValue(fVar13,*(long *)(param_1 + 0x58),0);
          }
          uVar8 = *(undefined8 *)(param_1 + 0x50);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(param_1 + 0x50) == 0) ||
               (lVar9 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x50),0),
               lVar9 == 0)) goto LAB_044e2958;
            UnityEngine_GameObject__SetActive(lVar9,*(int *)(lVar3 + 0x18) != 0,0);
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_044e2958;
            UnityEngine_UI_Image__set_fillAmount(fVar13,*(long *)(param_1 + 0x50),0);
          }
          uVar8 = *(undefined8 *)(param_1 + 0x88);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
          if ((uVar4 & 1) == 0) {
            if (((local_68 != 0) &&
                ((*(char *)(param_2 + 0x18) != '\0') == (*(char *)(local_68 + 0x18) != '\0'))) &&
               (*(int *)(param_2 + 0x30) == *(int *)(local_68 + 0x30))) {
              return;
            }
            if (*(long *)(param_1 + 0x70) != 0) {
              uVar4 = FUN_06ef1fe8(*(long *)(param_1 + 0x70),*(undefined4 *)(param_2 + 0x14),
                                   &local_78,DAT_0919e020);
              if ((uVar4 & 1) != 0) {
                if (local_78 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(local_78 + 0x40);
                }
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
                if ((uVar4 & 1) != 0) {
                  if ((local_78 == 0) ||
                     (plVar5 = *(long **)(local_78 + 0x40), plVar5 == (long *)0x0))
                  goto LAB_044e2958;
                  (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
                }
              }
              if (*(long *)(param_1 + 0x70) != 0) {
                FUN_06ef19b4(*(long *)(param_1 + 0x70),*(undefined4 *)(param_2 + 0x14),DAT_0919e018)
                ;
                if (*(char *)(param_2 + 0x18) == '\0') {
                  if (*(char *)(param_2 + 0x19) != '\0') {
                    return;
                  }
                  if (*(long *)(param_1 + 0x78) != 0) {
                    FUN_06ef19b4(*(long *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x14),
                                 DAT_0919e018);
                    return;
                  }
                }
                else if (param_3 != 0) {
                  lVar3 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                                    (param_3,*(undefined4 *)(param_2 + 0x30),0);
                  if (lVar3 == 0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = *(undefined8 *)(lVar3 + 0x10);
                  }
                  if (lVar2 != 0) {
                    *(undefined8 *)(lVar2 + 0x10) = uVar8;
                    thunk_FUN_03f5d7b8();
                    lVar3 = DAT_091c03d0;
                    lVar9 = *(long *)(param_1 + 0x48);
                    if (lVar9 == 0) {
                      lVar9 = *(long *)(DAT_091c03d0 + 0x38);
                      if (lVar9 == 0) {
                        FUN_03f95ac8(DAT_091c03d0);
                        lVar9 = *(long *)(lVar3 + 0x38);
                      }
                      lVar9 = *(long *)(lVar9 + 0x10);
                      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                        lVar9 = FUN_03f95a6c();
                      }
                      if (*(int *)(lVar9 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
                      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                        lVar3 = FUN_03f95a6c();
                      }
                      lVar9 = **(long **)(lVar3 + 0xb8);
                    }
                    uVar8 = thunk_FUN_03f9944c(DAT_0917e168);
                    FUN_05d78cfc(uVar8,lVar2,DAT_091e80a0,0);
                    lVar2 = FUN_04ee3a54(lVar9,uVar8,DAT_091c0480);
                    if (*(long *)(param_1 + 0x78) != 0) {
                      FUN_06ef19b4(*(long *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x14),
                                   DAT_0919e018);
                      if (lVar2 == 0) {
                        return;
                      }
                      if (*(long *)(param_1 + 0x70) != 0) {
                        FUN_06ef04f8(*(long *)(param_1 + 0x70),*(undefined4 *)(param_2 + 0x14),lVar2
                                     ,DAT_0919e030);
                        if (*(long *)(param_1 + 0x78) != 0) {
                          FUN_06ef04f8(*(long *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x14),
                                       lVar2,DAT_0919e030);
                          uVar8 = *(undefined8 *)(lVar2 + 0x40);
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
                          if ((uVar4 & 1) == 0) {
                            uVar8 = *(undefined8 *)(lVar2 + 0x18);
                            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
                            if ((uVar4 & 1) == 0) {
                              return;
                            }
                            uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar2 + 0x30),0);
                            if ((uVar4 & 1) != 0) {
                              return;
                            }
                            plVar5 = *(long **)(lVar2 + 0x18);
                            if (plVar5 != (long *)0x0) {
                              (**(code **)(*plVar5 + 0x1c8))
                                        (plVar5,0,0,*(undefined8 *)(*plVar5 + 0x1d0));
                              if (((*(long *)(lVar2 + 0x18) != 0) &&
                                  (lVar3 = Spine_Unity_SkeletonRenderer__get_Skeleton
                                                     (*(long *)(lVar2 + 0x18),0), lVar3 != 0)) &&
                                 (*(long *)(lVar3 + 0x10) != 0)) {
                                lVar3 = Spine_SkeletonData__FindAnimation
                                                  (*(long *)(lVar3 + 0x10),
                                                   *(undefined8 *)(lVar2 + 0x30),0);
                                if (lVar3 == 0) {
                                  return;
                                }
                                if ((*(long *)(lVar2 + 0x18) != 0) &&
                                   (lVar3 = Spine_Unity_SkeletonAnimation__get_AnimationState
                                                      (*(long *)(lVar2 + 0x18),0), lVar3 != 0)) {
                                  Spine_AnimationState__SetAnimation
                                            (lVar3,0,*(undefined8 *)(lVar2 + 0x30),1,0);
                                  return;
                                }
                              }
                            }
                          }
                          else if ((*(long *)(lVar2 + 0x40) != 0) &&
                                  (lVar3 = UnityEngine_Component__get_gameObject
                                                     (*(long *)(lVar2 + 0x40),0), lVar3 != 0)) {
                            UnityEngine_GameObject__SetActive(lVar3,1,0);
                            lVar3 = *(long *)(lVar2 + 0x50);
                            if (lVar3 != 0) {
                              uVar7 = (ulong)(uint)(float)*(double *)(param_2 + 0x28) << 0x20 | 1;
                              uVar4 = 0;
                              do {
                                plVar5 = *(long **)(lVar2 + 0x40);
                                if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) {
                                  if (plVar5 != (long *)0x0) {
                                    (**(code **)(*plVar5 + 0x1e8))
                                              (plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x1f0));
                                    plVar5 = *(long **)(lVar2 + 0x40);
                                    if (plVar5 != (long *)0x0) {
                                      (**(code **)(*plVar5 + 0x1b8))
                                                (plVar5,*(undefined1 *)(param_1 + 0x80),
                                                 *(undefined8 *)(*plVar5 + 0x1c0));
                                      return;
                                    }
                                  }
                                  break;
                                }
                                if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_044e2a34:
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c558();
                                }
                                if (plVar5 == (long *)0x0) break;
                                (**(code **)(*plVar5 + 0x1c8))
                                          (plVar5,uVar4 & 0xffffffff,
                                           *(undefined8 *)(lVar3 + uVar4 * 8 + 0x20),uVar7,
                                           *(undefined8 *)(*plVar5 + 0x1d0));
                                lVar3 = *(long *)(lVar2 + 0x50);
                                uVar4 = uVar4 + 1;
                              } while (lVar3 != 0);
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
          else if (*(long *)(param_1 + 0x88) != 0) {
            CookOrder_Cooking_Implement_CookingBlenderVisual__Render
                      (*(long *)(param_1 + 0x88),param_2,0);
            return;
          }
        }
      }
    }
  }
LAB_044e2958:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

