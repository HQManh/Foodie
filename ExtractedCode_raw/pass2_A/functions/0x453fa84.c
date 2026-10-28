// rea decompile_all
// name: DG.Tweening.Sequence$$ApplyInternalCycle
// address: 0x453fa84
// body: available
// range: 0x453fa84-0x45401d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45401c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45401d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_Sequence__ApplyInternalCycle
          (float param_1,float param_2,long param_3,int param_4,byte param_5,byte param_6,
          uint param_7)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  if ((DAT_09518705 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091aae40);
    FUN_03f5c2a4(&DAT_091b1140);
    FUN_03f5c2a4(&DAT_091aae48);
    FUN_03f5c2a4(&DAT_091b1158);
    FUN_03f5c2a4(&DAT_091aae50);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_0918c140);
    DAT_09518705 = 1;
  }
  if (param_3 != 0) {
    bVar2 = *(byte *)(param_3 + 0x110);
    lVar7 = *(long *)(param_3 + 0x128);
    if (param_1 <= param_2) {
      if (lVar7 != 0) {
        iVar9 = *(int *)(lVar7 + 0x18);
        if (iVar9 < 1) {
          return 0;
        }
        iVar10 = 0;
        do {
          if (*(char *)(param_3 + 0xe8) == '\0') {
            return 1;
          }
          if ((bVar2 & (*(byte *)(param_3 + 0x110) ^ 0xff)) != 0) {
            return 0;
          }
          if ((*(long *)(param_3 + 0x128) == 0) ||
             (plVar4 = (long *)FUN_057e0998(*(long *)(param_3 + 0x128),iVar10,DAT_091aae50),
             plVar4 == (long *)0x0)) break;
          fVar13 = *(float *)((long)plVar4 + 0x14);
          if (((fVar13 <= param_2) && ((fVar13 <= 0.0 || (param_1 < *(float *)(plVar4 + 3))))) &&
             ((0.0 < fVar13 || (param_1 <= *(float *)(plVar4 + 3))))) {
            if ((int)plVar4[2] == 2) {
              if ((param_4 == 0) &&
                 ((((*(char *)(param_3 + 0x2c) == '\0' && ((param_5 & 1) == 0)) &&
                   ((param_6 & 1) == 0)) ||
                  (((*(char *)(param_3 + 0x2c) != '\0' && ((param_5 & 1) != 0)) &&
                   ((param_6 & 1) == 0)))))) {
                DG_Tweening_Tween__OnTweenCallback(plVar4[4],param_3);
              }
            }
            else {
              fVar11 = 0.0;
              if (0.0 <= param_2 - fVar13) {
                fVar11 = param_2 - fVar13;
              }
              if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918c140 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918c140 + 0x130) * 8 +
                           -8) != DAT_0918c140)) goto LAB_045401cc;
              if (*(float *)(plVar4 + 3) <= param_2) {
                if (*(char *)((long)plVar4 + 0x101) == '\0') {
                  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  DG_Tweening_Core_TweenManager__ForceInit(plVar4,1,0);
                }
                if (fVar11 < *(float *)(plVar4 + 0x21)) {
                  fVar11 = *(float *)(plVar4 + 0x21);
                }
              }
              cVar6 = *(char *)(param_3 + 0x2d);
              *(undefined1 *)((long)plVar4 + 0x2c) = 0;
              if (cVar6 != '\0') {
                fVar11 = *(float *)(plVar4 + 0x21) - fVar11;
              }
              if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = DG_Tweening_Core_TweenManager__Goto(fVar11,plVar4,0,param_4,0);
              if ((uVar5 & 1) == 0) {
                if (((param_7 & 1) != 0) && ((int)plVar4[2] == 1)) {
                  iVar1 = *(int *)(param_3 + 0x10c);
                  if (*(float *)(param_3 + 0x104) <= 0.0) {
                    if (iVar1 != 0) {
                      cVar6 = *(char *)(param_3 + 0x2c);
                      goto LAB_0454010c;
                    }
                    *(undefined4 *)((long)plVar4 + 0x104) = 0;
                  }
                  else {
                    cVar6 = *(char *)(param_3 + 0x2c);
                    if (iVar1 == 0) {
                      bVar8 = 1;
LAB_04540118:
                      bVar8 = bVar8 ^ param_5 ^ *(char *)((long)plVar4 + 0x2c) != '\0';
                      if ((cVar6 == '\0') || ((param_5 & 1) != 0)) {
                        uVar12 = 0;
                        if ((bVar8 & 1) == 0) goto LAB_0454014c;
                      }
                      else {
                        uVar12 = 0;
                        if (((bVar8 ^ param_6) & 1) != 0) {
LAB_0454014c:
                          uVar12 = (undefined4)plVar4[0x14];
                        }
                      }
                    }
                    else {
LAB_0454010c:
                      if (cVar6 != '\0') {
                        bVar8 = 0;
                        cVar6 = '\x01';
                        goto LAB_04540118;
                      }
                      uVar12 = 0;
                      if (((iVar1 < *(int *)(param_3 + 0xa4) || *(int *)(param_3 + 0xa4) == -1) !=
                          (*(char *)((long)plVar4 + 0x2c) != '\0')) == (bool)(param_5 & 1))
                      goto LAB_0454014c;
                    }
                    *(undefined4 *)((long)plVar4 + 0x104) = uVar12;
                  }
                }
              }
              else {
                if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (*(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x10) == 1) {
                  return 1;
                }
                if (*(long *)(param_3 + 0x120) == 0) break;
                if (*(int *)(*(long *)(param_3 + 0x120) + 0x18) == 1) {
                  if (*(long *)(param_3 + 0x128) == 0) break;
                  if ((*(int *)(*(long *)(param_3 + 0x128) + 0x18) == 1) &&
                     (uVar5 = DG_Tweening_Sequence__IsAnyCallbackSet(param_3), (uVar5 & 1) == 0)) {
                    return 1;
                  }
                }
                if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                DG_Tweening_Core_TweenManager__Despawn(plVar4,0,0);
                if (*(long *)(param_3 + 0x128) == 0) break;
                FUN_057e251c(*(long *)(param_3 + 0x128),iVar10,DAT_091aae40);
                if (*(long *)(param_3 + 0x120) == 0) break;
                FUN_057e2274(*(long *)(param_3 + 0x120),plVar4,DAT_091b1140);
                iVar10 = iVar10 + -1;
                iVar9 = iVar9 + -1;
              }
            }
          }
          iVar10 = iVar10 + 1;
          if (iVar9 <= iVar10) {
            return 0;
          }
        } while( true );
      }
    }
    else if (lVar7 != 0) {
      iVar9 = *(int *)(lVar7 + 0x18) + -1;
      if (-1 < iVar9) {
        do {
          if (*(char *)(param_3 + 0xe8) == '\0') {
            return 1;
          }
          if ((bVar2 & (*(byte *)(param_3 + 0x110) ^ 0xff)) != 0) {
            return 0;
          }
          if ((*(long *)(param_3 + 0x128) == 0) ||
             (plVar4 = (long *)FUN_057e0998(*(long *)(param_3 + 0x128),iVar9,DAT_091aae50),
             plVar4 == (long *)0x0)) goto LAB_045401c8;
          if ((param_2 <= *(float *)(plVar4 + 3)) && (*(float *)((long)plVar4 + 0x14) <= param_1)) {
            if ((int)plVar4[2] == 2) {
              if ((param_4 == 0 & param_6) != 0) {
                DG_Tweening_Tween__OnTweenCallback(plVar4[4],param_3);
              }
            }
            else {
              fVar11 = param_2 - *(float *)((long)plVar4 + 0x14);
              fVar13 = 0.0;
              if (0.0 <= fVar11) {
                fVar13 = fVar11;
              }
              if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918c140 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918c140 + 0x130) * 8 +
                           -8) != DAT_0918c140)) {
LAB_045401cc:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar4);
              }
              if (*(char *)((long)plVar4 + 0x101) != '\0') {
                cVar6 = *(char *)(param_3 + 0x2d);
                *(undefined1 *)((long)plVar4 + 0x2c) = 1;
                if (cVar6 != '\0') {
                  fVar13 = *(float *)(plVar4 + 0x21) - fVar13;
                }
                if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = DG_Tweening_Core_TweenManager__Goto(fVar13,plVar4,0,param_4,0);
                if ((uVar5 & 1) == 0) {
                  if (((param_7 & 1) != 0) && ((int)plVar4[2] == 1)) {
                    iVar10 = *(int *)(param_3 + 0x10c);
                    if (*(float *)(param_3 + 0x104) <= 0.0) {
                      if (iVar10 != 0) {
                        cVar6 = *(char *)(param_3 + 0x2c);
                        goto LAB_0453fdb8;
                      }
                      *(undefined4 *)((long)plVar4 + 0x104) = 0;
                    }
                    else {
                      cVar6 = *(char *)(param_3 + 0x2c);
                      if (iVar10 == 0) {
                        bVar3 = true;
LAB_0453fdd0:
                        bVar8 = bVar3 ^ param_5 ^ *(char *)((long)plVar4 + 0x2c) != '\0';
                        if ((cVar6 == '\0') || ((param_5 & 1) != 0)) goto joined_r0x0453fe24;
                        uVar12 = 0;
                        if (((bVar8 ^ param_6) & 1) != 0) goto LAB_0453fe04;
                      }
                      else {
LAB_0453fdb8:
                        if (cVar6 != '\0') {
                          bVar3 = iVar10 < *(int *)(param_3 + 0xa4) ||
                                  *(int *)(param_3 + 0xa4) == -1;
                          cVar6 = '\x01';
                          goto LAB_0453fdd0;
                        }
                        bVar8 = *(char *)((long)plVar4 + 0x2c) != '\0' ^ param_5;
joined_r0x0453fe24:
                        uVar12 = 0;
                        if ((bVar8 & 1) == 0) {
LAB_0453fe04:
                          uVar12 = (undefined4)plVar4[0x14];
                        }
                      }
                      *(undefined4 *)((long)plVar4 + 0x104) = uVar12;
                    }
                  }
                }
                else {
                  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (*(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x10) == 1) {
                    return 1;
                  }
                  if (*(long *)(param_3 + 0x120) == 0) goto LAB_045401c8;
                  if (*(int *)(*(long *)(param_3 + 0x120) + 0x18) == 1) {
                    if (*(long *)(param_3 + 0x128) == 0) goto LAB_045401c8;
                    if ((*(int *)(*(long *)(param_3 + 0x128) + 0x18) == 1) &&
                       (uVar5 = DG_Tweening_Sequence__IsAnyCallbackSet(param_3), (uVar5 & 1) == 0))
                    {
                      return 1;
                    }
                  }
                  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  DG_Tweening_Core_TweenManager__Despawn(plVar4,0,0);
                  if (*(long *)(param_3 + 0x128) == 0) goto LAB_045401c8;
                  FUN_057e251c(*(long *)(param_3 + 0x128),iVar9,DAT_091aae40);
                  if (*(long *)(param_3 + 0x120) == 0) goto LAB_045401c8;
                  FUN_057e2274(*(long *)(param_3 + 0x120),plVar4,DAT_091b1140);
                  iVar9 = iVar9 + -1;
                }
              }
            }
          }
          bVar3 = 0 < iVar9;
          iVar9 = iVar9 + -1;
        } while (bVar3);
      }
      return 0;
    }
  }
LAB_045401c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

