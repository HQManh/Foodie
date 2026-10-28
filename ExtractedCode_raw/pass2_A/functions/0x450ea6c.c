// rea decompile_all
// name: Utilities.CrossFadeLoopAudio.<TransitionToNewMusic>d__16$$MoveNext
// address: 0x450ea6c
// body: available
// range: 0x450ea6c-0x450ef93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450ef90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_CrossFadeLoopAudio_<TransitionToNewMusic>d__16__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 extraout_d0;
  float fVar11;
  undefined4 uVar12;
  
  if ((DAT_0951851a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951851a = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) goto LAB_0450ef90;
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      uVar7 = UnityEngine_AudioSource__get_clip(*(long *)(lVar4 + 0x20),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 != 2) {
        if ((uVar2 & 1) == 0) {
          *(undefined1 *)(lVar4 + 0x38) = 1;
          uVar2 = 0;
          if (*(long *)(lVar4 + 0x28) != 0) {
            UnityEngine_AudioSource__Stop(*(long *)(lVar4 + 0x28),0);
            uVar2 = 0;
            if (*(long *)(lVar4 + 0x28) != 0) {
              UnityEngine_AudioSource__set_generatorObject(*(long *)(lVar4 + 0x28),0,0);
              uVar2 = 0;
              if (*(long *)(lVar4 + 0x20) != 0) {
                UnityEngine_AudioSource__set_generatorObject
                          (*(long *)(lVar4 + 0x20),*(undefined8 *)(param_1 + 0x30),0);
                uVar2 = 0;
                if (*(long *)(lVar4 + 0x20) != 0) {
                  UnityEngine_AudioSource__set_volume(0,*(long *)(lVar4 + 0x20),0);
                  uVar2 = 0;
                  if (*(long *)(lVar4 + 0x20) != 0) {
                    uVar7 = UnityEngine_AudioSource__Play(*(long *)(lVar4 + 0x20),0);
                    uVar7 = Utilities_CrossFadeLoopAudio__FadeSource
                                      (0,*(undefined4 *)(param_1 + 0x38),
                                       *(undefined4 *)(lVar4 + 0x30),uVar7,
                                       *(undefined8 *)(lVar4 + 0x20));
                    *(undefined8 *)(param_1 + 0x18) = uVar7;
                    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar7);
                    *(undefined4 *)(param_1 + 0x10) = 1;
                    return 1;
                  }
                }
              }
            }
          }
          goto LAB_0450ef90;
        }
        *(undefined1 *)(lVar4 + 0x38) = 1;
        if (iVar1 != 0) {
          lVar3 = *(long *)(lVar4 + 0x20);
          if (lVar3 == 0) goto LAB_0450ef90;
          uVar7 = UnityEngine_AudioSource__get_volume(lVar3,0);
          uVar7 = Utilities_CrossFadeLoopAudio__FadeSource
                            (extraout_d0,0,*(undefined4 *)(lVar4 + 0x34),uVar7,lVar3);
          *(undefined8 *)(param_1 + 0x18) = uVar7;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar7);
          uVar10 = 3;
          goto LAB_0450eca8;
        }
        uVar2 = 0;
        if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
        UnityEngine_AudioSource__set_generatorObject
                  (*(long *)(lVar4 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
        uVar2 = 0;
        if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
        UnityEngine_AudioSource__set_volume(0,*(long *)(lVar4 + 0x28),0);
        uVar2 = 0;
        if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
        UnityEngine_AudioSource__Play(*(long *)(lVar4 + 0x28),0);
        lVar3 = *(long *)(lVar4 + 0x20);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        uVar2 = 0;
        if (lVar3 == 0) goto LAB_0450ef90;
        uVar10 = UnityEngine_AudioSource__get_volume(lVar3,0);
        *(undefined4 *)(param_1 + 0x40) = uVar10;
        goto LAB_0450eb08;
      }
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__Stop(*(long *)(lVar4 + 0x28),0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__set_generatorObject(*(long *)(lVar4 + 0x28),0,0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__Stop(*(long *)(lVar4 + 0x20),0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__set_generatorObject
                (*(long *)(lVar4 + 0x20),*(undefined8 *)(param_1 + 0x30),0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__set_volume(*(undefined4 *)(param_1 + 0x38),*(long *)(lVar4 + 0x20),0)
      ;
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__Play(*(long *)(lVar4 + 0x20),0);
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
LAB_0450eae8:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) {
LAB_0450ef90:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar2);
      }
      *(undefined1 *)(lVar4 + 0x38) = 0;
    }
LAB_0450edc8:
    *(undefined8 *)(lVar4 + 0x50) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x50),0);
    uVar7 = *(undefined8 *)(lVar4 + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      uVar12 = *(undefined4 *)(lVar4 + 0x48);
      uVar10 = *(undefined4 *)(lVar4 + 0x4c);
      *(undefined8 *)(lVar4 + 0x40) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x40),0);
      *(undefined8 *)(lVar4 + 0x48) = 0x13f800000;
      Utilities_CrossFadeLoopAudio__ChangeMusic(uVar12,lVar4,uVar7,uVar10);
    }
    uVar7 = 0;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) goto LAB_0450ef90;
LAB_0450eb08:
      fVar11 = *(float *)(param_1 + 0x3c);
      if (*(float *)(lVar4 + 0x30) <= fVar11) {
        plVar5 = (long *)(lVar4 + 0x20);
        uVar2 = 0;
        if (*plVar5 == 0) goto LAB_0450ef90;
        UnityEngine_AudioSource__Stop(*plVar5,0);
        uVar2 = 0;
        if (*plVar5 == 0) goto LAB_0450ef90;
        UnityEngine_AudioSource__set_generatorObject(*plVar5,0,0);
        puVar6 = (undefined8 *)(lVar4 + 0x28);
        uVar7 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar4 + 0x20) = *puVar6;
        thunk_FUN_03f5d7b8(plVar5);
        *puVar6 = uVar7;
        thunk_FUN_03f5d7b8(puVar6,uVar7);
        *(undefined1 *)(lVar4 + 0x38) = 0;
        goto LAB_0450edc8;
      }
      fVar8 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      fVar11 = fVar11 + fVar8;
      lVar3 = *(long *)(lVar4 + 0x20);
      *(float *)(param_1 + 0x3c) = fVar11;
      uVar2 = 0;
      if (lVar3 == 0) goto LAB_0450ef90;
      fVar11 = fVar11 / *(float *)(lVar4 + 0x30);
      fVar8 = 1.0;
      if (fVar11 <= 1.0) {
        fVar8 = fVar11;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar11) {
        fVar9 = fVar8;
      }
      fVar11 = fVar9 * fVar9 * 3.0 - fVar9 * fVar9 * (fVar9 + fVar9);
      UnityEngine_AudioSource__set_volume
                (fVar11 * 0.0 + *(float *)(param_1 + 0x40) * (1.0 - fVar11),lVar3,0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
      fVar8 = *(float *)(param_1 + 0x3c) / *(float *)(lVar4 + 0x30);
      fVar11 = 1.0;
      if (fVar8 <= 1.0) {
        fVar11 = fVar8;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar11;
      }
      fVar11 = fVar9 * fVar9 * 3.0 - fVar9 * fVar9 * (fVar9 + fVar9);
      UnityEngine_AudioSource__set_volume
                (*(float *)(param_1 + 0x38) * fVar11 + (1.0 - fVar11) * 0.0,*(long *)(lVar4 + 0x28),
                 0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar10 = 2;
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 != 4) {
          return 0;
        }
        goto LAB_0450eae8;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) goto LAB_0450ef90;
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__Stop(*(long *)(lVar4 + 0x20),0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__set_generatorObject(*(long *)(lVar4 + 0x20),0,0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__Stop(*(long *)(lVar4 + 0x28),0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__set_generatorObject(*(long *)(lVar4 + 0x28),0,0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__set_generatorObject
                (*(long *)(lVar4 + 0x20),*(undefined8 *)(param_1 + 0x30),0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      UnityEngine_AudioSource__set_volume(0,*(long *)(lVar4 + 0x20),0);
      uVar2 = 0;
      if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0450ef90;
      uVar7 = UnityEngine_AudioSource__Play(*(long *)(lVar4 + 0x20),0);
      uVar7 = Utilities_CrossFadeLoopAudio__FadeSource
                        (0,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(lVar4 + 0x30),uVar7,
                         *(undefined8 *)(lVar4 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar7);
      uVar10 = 4;
    }
LAB_0450eca8:
    *(undefined4 *)(param_1 + 0x10) = uVar10;
    uVar7 = 1;
  }
  return uVar7;
}

