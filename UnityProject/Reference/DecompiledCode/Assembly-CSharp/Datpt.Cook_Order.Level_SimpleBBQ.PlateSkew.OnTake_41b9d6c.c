// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.PlateSkew$$OnTake
// address: 0x41b9d6c
// body: available
// range: 0x41b9d6c-0x41ba713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ba710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_Level_SimpleBBQ_PlateSkew__OnTake
          (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5,
          long *param_6)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_09516963 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191508);
    FUN_03f5c2a4(&DAT_09191510);
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_09186bf8);
    FUN_03f5c2a4(&DAT_091ac7d8);
    FUN_03f5c2a4(&DAT_091b0168);
    FUN_03f5c2a4(&DAT_091b10b0);
    FUN_03f5c2a4(&DAT_09189018);
    FUN_03f5c2a4(&DAT_0918ad68);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091ee518);
    FUN_03f5c2a4(&DAT_091ee520);
    FUN_03f5c2a4(&DAT_091ee528);
    FUN_03f5c2a4(&DAT_091ee530);
    FUN_03f5c2a4(&DAT_09193370);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_09516963 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09193370);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_5;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_5);
    lVar5 = DAT_09186bf0;
    if (param_6 == (long *)0x0) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
      plVar14 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(DAT_09186bf0 + 0x130);
      if (*(byte *)(*param_6 + 0x130) < bVar2) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = param_6;
        if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != DAT_09186bf0) {
          plVar14 = (long *)0x0;
        }
      }
      *(long **)(lVar4 + 0x10) = plVar14;
      if (*(byte *)(*param_6 + 0x130) < bVar2) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = param_6;
        if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != lVar5) {
          plVar14 = (long *)0x0;
        }
      }
    }
    puVar11 = (undefined8 *)(lVar4 + 0x10);
    thunk_FUN_03f5d7b8(puVar11,plVar14);
    lVar8 = DAT_091ac7d8;
    lVar5 = DAT_09189018;
    plVar14 = (long *)*puVar11;
    if (((plVar14 == (long *)0x0) || (*(int *)(param_5 + 0xd8) < 1)) ||
       (iVar1 = (int)plVar14[0x11], iVar1 != *(int *)(param_5 + 200))) {
      if (param_6 == (long *)0x0) {
        *(undefined8 *)(lVar4 + 0x20) = 0;
        plVar14 = (long *)0x0;
      }
      else {
        bVar2 = *(byte *)(DAT_09189018 + 0x130);
        if (*(byte *)(*param_6 + 0x130) < bVar2) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = param_6;
          if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != DAT_09189018) {
            plVar14 = (long *)0x0;
          }
        }
        *(long **)(lVar4 + 0x20) = plVar14;
        if (*(byte *)(*param_6 + 0x130) < bVar2) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = param_6;
          if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != lVar5) {
            plVar14 = (long *)0x0;
          }
        }
      }
      plVar15 = (long *)(lVar4 + 0x20);
      thunk_FUN_03f5d7b8(plVar15,plVar14);
      lVar8 = DAT_091ac7d8;
      lVar5 = DAT_09186bf8;
      lVar9 = *plVar15;
      if (((lVar9 == 0) || (*(int *)(param_5 + 0xd8) < 1)) || (*(char *)(param_5 + 0xe8) != '\0')) {
        if (param_6 == (long *)0x0) {
          *(undefined8 *)(lVar4 + 0x28) = 0;
          plVar14 = (long *)0x0;
        }
        else {
          bVar2 = *(byte *)(DAT_09186bf8 + 0x130);
          if (*(byte *)(*param_6 + 0x130) < bVar2) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = param_6;
            if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != DAT_09186bf8) {
              plVar14 = (long *)0x0;
            }
          }
          *(long **)(lVar4 + 0x28) = plVar14;
          if (*(byte *)(*param_6 + 0x130) < bVar2) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = param_6;
            if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != lVar5) {
              plVar14 = (long *)0x0;
            }
          }
        }
        puVar11 = (undefined8 *)(lVar4 + 0x28);
        thunk_FUN_03f5d7b8(puVar11,plVar14);
        plVar14 = (long *)*puVar11;
        if (((plVar14 == (long *)0x0) || (*(int *)(param_5 + 0xd8) < 1)) ||
           ((iVar1 = (int)plVar14[0x11], iVar1 != *(int *)(param_5 + 0xcc) ||
            (*(char *)(param_5 + 0xe9) != '\0')))) {
          uVar6 = Datpt_Cook_Order_Level_SimpleBBQ_PlateSkew__get_IsFullSkewer(param_5);
          if (((uVar6 & 1) == 0) && (param_6 != (long *)0x0)) {
            lVar5 = *param_6;
            if ((*(byte *)(DAT_0918ad68 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
               ((*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_0918ad68 + 0x130) * 8 + -8)
                 == DAT_0918ad68 && ((char)param_6[0x22] != '\0')))) {
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09191508) {
                    puVar11 = (undefined8 *)(lVar5 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                    goto LAB_041ba4c0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(param_6,DAT_09191508,6);
LAB_041ba4c0:
              (*(code *)*puVar11)(param_6,puVar11[1]);
              if ((*(long *)(param_5 + 0xa8) != 0) &&
                 (lVar5 = FUN_057e0998(*(long *)(param_5 + 0xa8),*(undefined4 *)(param_5 + 0xd8),
                                       DAT_091b10b0), lVar5 != 0)) {
                uVar17 = UnityEngine_Transform__get_position(lVar5,0);
                iVar1 = *(int *)(param_5 + 0xd8);
                *(int *)(param_5 + 0xd8) = iVar1 + 1;
                if ((*(long *)(param_5 + 0xa8) != 0) &&
                   (fVar16 = param_2, fVar19 = param_3,
                   lVar5 = FUN_057e0998(*(long *)(param_5 + 0xa8),iVar1,DAT_091b10b0), lVar5 != 0))
                {
                  uVar18 = UnityEngine_Transform__get_rotation(lVar5,0);
                  lVar5 = *param_6;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_09191510) {
                        puVar11 = (undefined8 *)(lVar5 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                        goto LAB_041ba590;
                      }
                      uVar6 = uVar6 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_03f95da8(param_6,DAT_09191510,9);
LAB_041ba590:
                  (*(code *)*puVar11)(uVar17,param_2,param_3,uVar18,fVar16,fVar19,param_4,0x3e4ccccd
                                      ,param_6,puVar11[1]);
                  lVar5 = *param_6;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_09191510) {
                        puVar11 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_041ba60c;
                      }
                      uVar6 = uVar6 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_03f95da8(param_6,DAT_09191510,0);
LAB_041ba60c:
                  lVar5 = (*(code *)*puVar11)(param_6,puVar11[1]);
                  if (lVar5 != 0) {
                    UnityEngine_Transform__SetParent(lVar5,*(undefined8 *)(param_5 + 0x88),0);
                    lVar5 = DAT_091b0168;
                    lVar8 = *(long *)(param_5 + 0xf8);
                    if (lVar8 != 0) {
                      lVar9 = *(long *)(lVar8 + 0x10);
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar3 = *(uint *)(lVar8 + 0x18);
                        if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                          plVar14 = (long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
                          *plVar14 = (long)param_6;
                          thunk_FUN_03f5d7b8(plVar14,param_6);
                        }
                        else {
                          FUN_057e0c68(lVar8,param_6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
                        puVar11 = &DAT_091ee530;
                        goto LAB_041ba6ac;
                      }
                    }
                  }
                }
              }
              goto LAB_041ba710;
            }
          }
          return 0;
        }
        lVar8 = *(long *)(param_5 + 0xf0);
        *(undefined1 *)(param_5 + 0xe9) = 1;
        lVar5 = DAT_091ac7d8;
        if (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
            }
            else {
              FUN_05799adc(lVar8,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              plVar14 = (long *)*puVar11;
            }
            if (*(long *)(param_5 + 0x98) != 0) {
              uVar17 = UnityEngine_Transform__get_position(*(long *)(param_5 + 0x98),0);
              if ((*(long *)(param_5 + 0x98) != 0) &&
                 (fVar16 = param_2, fVar19 = param_3,
                 uVar18 = UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x98),0),
                 plVar14 != (long *)0x0)) {
                (**(code **)(*plVar14 + 0x3c8))
                          (uVar17,param_2,param_3,uVar18,fVar16,fVar19,param_4,0x3e4ccccd,plVar14,
                           *(undefined8 *)(*plVar14 + 0x3d0));
                uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
                puVar11 = &DAT_091ee528;
                goto LAB_041ba6ac;
              }
            }
          }
        }
      }
      else {
        lVar5 = *(long *)(param_5 + 0xf0);
        if (lVar5 != 0) {
          lVar12 = *(long *)(lVar5 + 0x10);
          uVar17 = *(undefined4 *)(lVar9 + 0x88);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar3 = *(uint *)(lVar5 + 0x18);
            if (uVar3 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = uVar17;
              *(undefined1 *)(param_5 + 0xe8) = 1;
            }
            else {
              FUN_05799adc(lVar5,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              lVar9 = *plVar15;
              *(undefined1 *)(param_5 + 0xe8) = 1;
              if (lVar9 == 0) goto LAB_041ba710;
            }
            *(undefined4 *)(lVar9 + 0x3c) = 0x32;
            Datpt_Cook_Order_ItemMovingBase__set_OrderLayer(lVar9,0x32,0);
            if (*(long *)(param_5 + 0x90) != 0) {
              plVar14 = (long *)*plVar15;
              uVar17 = UnityEngine_Transform__get_position(*(long *)(param_5 + 0x90),0);
              if ((*(long *)(param_5 + 0x90) != 0) &&
                 (fVar16 = param_2, fVar19 = param_3,
                 uVar18 = UnityEngine_Transform__get_rotation(*(long *)(param_5 + 0x90),0),
                 plVar14 != (long *)0x0)) {
                (**(code **)(*plVar14 + 0x3c8))
                          (uVar17,param_2,param_3,uVar18,fVar16,fVar19,param_4,0x3e4ccccd,plVar14,
                           *(undefined8 *)(*plVar14 + 0x3d0));
                if (*plVar15 != 0) {
                  *(undefined1 *)(*plVar15 + 0xe0) = 1;
                  uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
                  puVar11 = &DAT_091ee520;
                  goto LAB_041ba6ac;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar5 = *(long *)(param_5 + 0xf0);
      if (lVar5 != 0) {
        lVar9 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar3 = *(uint *)(lVar5 + 0x18);
          if (uVar3 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar3 + 1;
            *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
          }
          else {
            FUN_05799adc(lVar5,iVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            plVar14 = (long *)*puVar11;
          }
          lVar5 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_5,0);
          if (lVar5 != 0) {
            fVar16 = (float)UnityEngine_Transform__get_position(lVar5,0);
            if (DAT_09515faa == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515faa = '\x01';
            }
            lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
            fVar21 = *(float *)(lVar5 + 0x18);
            fVar19 = *(float *)(lVar5 + 0x1c);
            fVar20 = *(float *)(lVar5 + 0x20);
            if (DAT_09515ed5 == '\0') {
              FUN_03f5c2a4(&DAT_091898c0);
              DAT_09515ed5 = '\x01';
            }
            if (plVar14 != (long *)0x0) {
              puVar10 = *(undefined4 **)(DAT_091898c0 + 0xb8);
              (**(code **)(*plVar14 + 0x3c8))
                        (fVar16 + fVar21,param_2 + fVar19,param_3 + fVar20,*puVar10,puVar10[1],
                         puVar10[2],puVar10[3],0x3e4ccccd,plVar14,*(undefined8 *)(*plVar14 + 0x3d0))
              ;
              uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
              puVar11 = &DAT_091ee518;
LAB_041ba6ac:
              DG_Tweening_TweenCallback___ctor(uVar7,lVar4,*puVar11,0);
              if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Datpt_Utilities__DelayedCallScaled(0x3e4ccccd,uVar7,0);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_041ba710:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

