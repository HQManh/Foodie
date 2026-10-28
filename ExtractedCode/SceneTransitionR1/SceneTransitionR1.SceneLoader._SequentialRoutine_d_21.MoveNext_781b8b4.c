// rea decompile_all
// name: SceneTransitionR1.SceneLoader.<SequentialRoutine>d__21$$MoveNext
// address: 0x781b8b4
// body: available
// range: 0x781b8b4-0x781c5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781c5d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781c5dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781c5e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 SceneTransitionR1_SceneLoader_<SequentialRoutine>d__21__MoveNext(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_095232d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09175068);
    FUN_03f5c2a4(&DAT_09184a48);
    FUN_03f5c2a4(&DAT_091cda20);
    FUN_03f5c2a4(&DAT_091b3950);
    FUN_03f5c2a4(&DAT_091b3958);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a648);
    FUN_03f5c2a4(&DAT_0918a650);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_09202a80);
    FUN_03f5c2a4(&DAT_0920c198);
    FUN_03f5c2a4(&DAT_0920c828);
    FUN_03f5c2a4(&DAT_0920c818);
    FUN_03f5c2a4(&DAT_0920c820);
    DAT_095232d3 = 1;
  }
  if (0xd < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_0781c5d8;
    uVar3 = *(undefined8 *)(lVar10 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar5 & 1) != 0) {
      uVar3 = *(undefined8 *)(lVar10 + 0x20);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04b711d8(&local_60,uVar3,DAT_091bf638);
      *(undefined8 *)(lVar10 + 0x48) = uStack_58;
      *(undefined8 *)(lVar10 + 0x40) = local_60;
      *(undefined8 *)(lVar10 + 0x50) = local_50;
      thunk_FUN_03f5d7b8(lVar10 + 0x40,0);
      uStack_78 = *(undefined8 *)(lVar10 + 0x48);
      local_80 = *(undefined8 *)(lVar10 + 0x40);
      local_70 = *(undefined8 *)(lVar10 + 0x50);
      uVar3 = FUN_03f5c42c(DAT_09175068,&local_80);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_0781c5d8;
    uVar3 = FUN_0640f7ac(lVar10 + 0x40,DAT_09197800);
    uVar8 = *(undefined8 *)(lVar10 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar2 = FUN_04c35338(uVar3,uVar8,DAT_091d4bc0);
    if (lVar2 == 0) goto LAB_0781c5d8;
    uVar3 = FUN_04b7c324(lVar2,DAT_091cda20);
    *(undefined8 *)(lVar10 + 0x38) = uVar3;
    thunk_FUN_03f5d7b8();
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_0781c5d8;
    goto LAB_0781bd2c;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    UnityEngine_Resources__UnloadUnusedAssets(0);
    if (*(int *)(DAT_09184a48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_GC__Collect(0);
    uVar3 = thunk_FUN_03f9944c(DAT_0918ce98);
    UnityEngine_WaitForSecondsRealtime___ctor(0x3dcccccd,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
    uVar7 = 4;
    goto LAB_0781c5b8;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x30) != 0) {
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095232e6 == '\0') {
        FUN_03f5c2a4(&DAT_0918a648);
        DAT_095232e6 = '\x01';
      }
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918a648 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__Log(**(long **)(DAT_0918a648 + 0xb8),DAT_0920c198,0);
      }
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) goto LAB_0781c5d8;
      lVar4 = *(long *)(lVar2 + 0x28);
      if (lVar4 != 0) {
        uVar3 = (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
        uVar7 = 5;
        goto LAB_0781c5b8;
      }
      goto LAB_0781bdb0;
    }
    goto LAB_0781bef8;
  case 5:
    lVar2 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_0781c5d8;
LAB_0781bdb0:
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 != 0) {
      uVar3 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      thunk_FUN_03f5d7b8();
      goto LAB_0781beb0;
    }
    goto LAB_0781bee0;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_0781beb0:
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 == 0) goto LAB_0781c5d8;
    uVar5 = System_Threading_Tasks_Task__get_IsCompleted(lVar2,0);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar7 = 6;
      goto LAB_0781c5b8;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),0);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) goto LAB_0781c5d8;
LAB_0781bee0:
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    }
LAB_0781bef8:
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
LAB_0781bf00:
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      if (iVar6 < *(int *)(lVar2 + 0x18)) {
        lVar2 = FUN_057e0998(lVar2,iVar6,DAT_091b3958);
        plVar9 = (long *)(param_1 + 0x58);
        *plVar9 = lVar2;
        thunk_FUN_03f5d7b8(plVar9,lVar2);
        lVar2 = *plVar9;
        bVar1 = *(int *)(param_1 + 0x50) != 0;
        if (lVar2 != 0) {
          uVar3 = *(undefined8 *)(lVar2 + 0x10);
          if (*(int *)(lVar2 + 0x30) == 0) {
            if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar2 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(uVar3,bVar1,0);
          }
          else {
            local_60 = 0;
            UnityEngine_SceneManagement_LoadSceneParameters___ctor
                      (&local_60,bVar1,*(int *)(lVar2 + 0x30),0);
            if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar2 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(uVar3,local_60,0);
          }
          plVar9 = (long *)(param_1 + 0x60);
          *plVar9 = lVar2;
          thunk_FUN_03f5d7b8(plVar9,lVar2);
          if (*plVar9 != 0) {
            UnityEngine_AsyncOperation__set_allowSceneActivation(*plVar9,0,0);
            if (*(long *)(param_1 + 0x38) != 0) {
              fVar11 = (float)*(int *)(*(long *)(param_1 + 0x38) + 0x18);
              *(float *)(param_1 + 0x68) = (float)*(int *)(param_1 + 0x50) / fVar11;
              *(float *)(param_1 + 0x6c) = (float)(*(int *)(param_1 + 0x50) + 1) / fVar11;
LAB_0781c4ec:
              if (*(long *)(param_1 + 0x60) != 0) {
                uVar5 = UnityEngine_AsyncOperation__get_isDone(*(long *)(param_1 + 0x60),0);
                if ((uVar5 & 1) != 0) {
                  *(undefined8 *)(param_1 + 0x18) = 0;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
                  uVar7 = 8;
                  goto LAB_0781c5b8;
                }
                if (*(long *)(param_1 + 0x60) != 0) {
                  fVar12 = (float)UnityEngine_AsyncOperation__get_progress
                                            (*(long *)(param_1 + 0x60),0);
                  fVar11 = 1.0;
                  if (fVar12 <= 1.0) {
                    fVar11 = fVar12;
                  }
                  fVar13 = 0.0;
                  if (0.0 <= fVar12) {
                    fVar13 = fVar11;
                  }
                  fVar11 = 0.0;
                  if (0.0 <= fVar13) {
                    fVar11 = fVar13;
                  }
                  if ((lVar10 != 0) && (plVar9 = *(long **)(lVar10 + 0x38), plVar9 != (long *)0x0))
                  {
                    (**(code **)(*plVar9 + 0x198))
                              (*(float *)(param_1 + 0x68) +
                               (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68)) * fVar11,
                               plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
                    if (*(long *)(param_1 + 0x60) != 0) {
                      fVar11 = (float)UnityEngine_AsyncOperation__get_progress
                                                (*(long *)(param_1 + 0x60),0);
                      if (0.9 <= fVar11) {
                        if (*(long *)(param_1 + 0x60) == 0) goto LAB_0781c5d8;
                        UnityEngine_AsyncOperation__set_allowSceneActivation
                                  (*(long *)(param_1 + 0x60),1,0);
                      }
                      *(undefined8 *)(param_1 + 0x18) = 0;
                      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
                      uVar7 = 7;
                      goto LAB_0781c5b8;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0781c5d8;
      }
      if ((lVar10 == 0) || (plVar9 = *(long **)(lVar10 + 0x38), plVar9 == (long *)0x0))
      goto LAB_0781c5d8;
      (**(code **)(*plVar9 + 0x198))(0x3f800000,plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      *(undefined4 *)(lVar10 + 0x58) = 3;
      if (*(long *)(lVar10 + 0x38) == 0) goto LAB_0781c5d8;
      SceneTransitionR1_SceneTransitionBehaviorBase__TransitionOut
                (0xbf800000,*(long *)(lVar10 + 0x38),0);
LAB_0781bfd0:
      if (*(long *)(lVar10 + 0x38) == 0) goto LAB_0781c5d8;
      if (*(int *)(*(long *)(lVar10 + 0x38) + 0x30) == 0) {
        *(undefined4 *)(lVar10 + 0x58) = 4;
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar7 = 0xd;
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar7 = 0xc;
      }
      goto LAB_0781c5b8;
    }
    goto LAB_0781c5d8;
  case 7:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_0781c4ec;
  case 8:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095232e6 == '\0') {
      FUN_03f5c2a4(&DAT_0918a648);
      DAT_095232e6 = '\x01';
    }
    if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = **(long **)(DAT_0918a648 + 0xb8);
    if (lVar10 != 0) {
      plVar9 = (long *)FUN_03f5c394(DAT_09180318,1);
      if ((*(long *)(param_1 + 0x58) == 0) || (plVar9 == (long *)0x0)) goto LAB_0781c5d8;
      lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0))
      goto LAB_0781c5e0;
      if ((int)plVar9[3] == 0) goto LAB_0781c5dc;
      plVar9[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar9 + 4,lVar2);
      EssentialSystemR1_R1Logger__LogFormat(lVar10,DAT_09202a80,plVar9,0);
    }
    lVar10 = *(long *)(param_1 + 0x58);
    if (lVar10 == 0) goto LAB_0781c5d8;
    if (*(long *)(lVar10 + 0x28) != 0) {
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095232e6 == '\0') {
        FUN_03f5c2a4(&DAT_0918a648);
        DAT_095232e6 = '\x01';
      }
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = **(long **)(DAT_0918a648 + 0xb8);
      if (lVar10 != 0) {
        plVar9 = (long *)FUN_03f5c394(DAT_09180318,1);
        if ((*(long *)(param_1 + 0x58) == 0) || (plVar9 == (long *)0x0)) goto LAB_0781c5d8;
        lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0))
        goto LAB_0781c5e0;
        if ((int)plVar9[3] == 0) goto LAB_0781c5dc;
        plVar9[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar9 + 4,lVar2);
        EssentialSystemR1_R1Logger__LogFormat(lVar10,DAT_0920c820,plVar9,0);
      }
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 0x28), lVar10 != 0)) {
        uVar3 = (**(code **)(lVar10 + 0x18))
                          (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
        uVar7 = 9;
        goto LAB_0781c5b8;
      }
      goto LAB_0781c5d8;
    }
    goto LAB_0781c1e0;
  case 9:
    lVar10 = *(long *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_0781c5d8;
LAB_0781c1e0:
    if (*(long *)(lVar10 + 0x20) != 0) {
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095232e6 == '\0') {
        FUN_03f5c2a4(&DAT_0918a648);
        DAT_095232e6 = '\x01';
      }
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = **(long **)(DAT_0918a648 + 0xb8);
      if (lVar10 != 0) {
        plVar9 = (long *)FUN_03f5c394(DAT_09180318,1);
        if ((*(long *)(param_1 + 0x58) == 0) || (plVar9 == (long *)0x0)) goto LAB_0781c5d8;
        lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0))
        goto LAB_0781c5e0;
        if ((int)plVar9[3] == 0) goto LAB_0781c5dc;
        plVar9[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar9 + 4,lVar2);
        EssentialSystemR1_R1Logger__LogFormat(lVar10,DAT_0920c828,plVar9,0);
      }
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 0x20), lVar10 == 0)) goto LAB_0781c5d8;
      uVar3 = (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      thunk_FUN_03f5d7b8();
LAB_0781c2e4:
      lVar10 = *(long *)(param_1 + 0x48);
      if (lVar10 == 0) goto LAB_0781c5d8;
      uVar5 = System_Threading_Tasks_Task__get_IsCompleted(lVar10,0);
      if ((uVar5 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar7 = 10;
        goto LAB_0781c5b8;
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),0);
      lVar10 = *(long *)(param_1 + 0x58);
      if (lVar10 == 0) goto LAB_0781c5d8;
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095232e6 == '\0') {
        FUN_03f5c2a4(&DAT_0918a648);
        DAT_095232e6 = '\x01';
      }
      if (*(int *)(DAT_0918a648 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = **(long **)(DAT_0918a648 + 0xb8);
      if (lVar10 != 0) {
        plVar9 = (long *)FUN_03f5c394(DAT_09180318,1);
        if ((*(long *)(param_1 + 0x58) == 0) || (plVar9 == (long *)0x0)) goto LAB_0781c5d8;
        lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
LAB_0781c5e0:
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if ((int)plVar9[3] == 0) {
LAB_0781c5dc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar9[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar9 + 4,lVar2);
        EssentialSystemR1_R1Logger__LogFormat(lVar10,DAT_0920c818,plVar9,0);
      }
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 0x18), lVar10 == 0)) goto LAB_0781c5d8;
      (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar7 = 0xb;
    goto LAB_0781c5b8;
  case 10:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_0781c2e4;
  case 0xb:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x58) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
    *(undefined8 *)(param_1 + 0x60) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),0);
    iVar6 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar6;
    goto LAB_0781bf00;
  case 0xc:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_0781c5d8;
    goto LAB_0781bfd0;
  case 0xd:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      lVar2 = *(long *)(lVar10 + 0x38);
      if (lVar2 != 0) {
        uVar3 = UnityEngine_Component__get_gameObject(lVar2,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        UnityEngine_Object__Destroy(uVar3,0);
        *(undefined8 *)(lVar10 + 0x38) = 0;
        thunk_FUN_03f5d7b8((long *)(lVar10 + 0x38),0);
        uStack_58 = *(undefined8 *)(lVar10 + 0x48);
        local_60 = *(undefined8 *)(lVar10 + 0x40);
        local_50 = *(undefined8 *)(lVar10 + 0x50);
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04b71ee0(&local_60,DAT_091bf690);
        *(undefined4 *)(lVar10 + 0x58) = 0;
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 == 0) {
          return 0;
        }
        (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
        return 0;
      }
    }
    goto LAB_0781c5d8;
  }
  plVar9 = *(long **)(lVar10 + 0x38);
  if (plVar9 != (long *)0x0) {
    plVar9[5] = *(long *)(param_1 + 0x28);
    thunk_FUN_03f5d7b8();
    (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    lVar2 = *(long *)(lVar10 + 0x38);
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 0x30) == 3) || (*(int *)(lVar2 + 0x30) == 0)) {
        SceneTransitionR1_SceneTransitionBehaviorBase__TransitionIn(0xbf800000,lVar2,0);
      }
LAB_0781bd2c:
      if (*(long *)(lVar10 + 0x38) != 0) {
        if (*(int *)(*(long *)(lVar10 + 0x38) + 0x30) == 2) {
          *(undefined4 *)(lVar10 + 0x58) = 2;
          uVar3 = *(undefined8 *)(lVar10 + 0x30);
          if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_SceneManagement_SceneManager__LoadScene(uVar3,0);
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          uVar7 = 3;
        }
        else {
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          uVar7 = 2;
        }
LAB_0781c5b8:
        *(undefined4 *)(param_1 + 0x10) = uVar7;
        return 1;
      }
    }
  }
LAB_0781c5d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

