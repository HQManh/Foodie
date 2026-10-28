// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport.<SetupFontsAsync>d__12$$MoveNext
// address: 0x776a31c
// body: available
// range: 0x776a31c-0x776a6fb inclusive
// range: 0x776a720-0x776ae7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776ae24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776ae50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1UserTextSupport_<SetupFontsAsync>d__12__MoveNext(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68;
  int local_64;
  
  if ((DAT_09522c81 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2898);
    FUN_03f5c2a4(&DAT_091c27e0);
    FUN_03f5c2a4(&DAT_0919a720);
    FUN_03f5c2a4(&DAT_0919a728);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b09c0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0598);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_0917e070);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918b778);
    FUN_03f5c2a4(&DAT_0918b7d0);
    FUN_03f5c2a4(&DAT_091eed10);
    FUN_03f5c2a4(&DAT_091938a8);
    FUN_03f5c2a4(&DAT_091bdf20);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091facc8);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09200878);
    FUN_03f5c2a4(&DAT_091fad58);
    FUN_03f5c2a4(&DAT_0920ea18);
    FUN_03f5c2a4(&DAT_092140d8);
    FUN_03f5c2a4(&DAT_09214188);
    DAT_09522c81 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  if (*param_1 == 0) {
    local_64 = param_1[0xf];
    param_1[0xf] = 0;
    *param_1 = -1;
    local_68 = 0;
    goto LAB_0776a7c0;
  }
  if (*param_1 == 1) {
    local_70 = *(ulong *)(param_1 + 0x14);
    uStack_78 = *(undefined8 *)(param_1 + 0x12);
    local_80 = *(long **)(param_1 + 0x10);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    do {
      plVar8 = local_80;
      uVar7 = uStack_78;
      if (local_80 != (long *)0x0) {
        uVar15 = local_70 & 0xffff;
        lVar5 = *(long *)(DAT_0919a720 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c(lVar5);
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0776aaec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar8,lVar5,0);
LAB_0776aaec:
        uVar7 = (*(code *)*puVar6)(plVar8,uVar15,puVar6[1]);
      }
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(char *)(*(long *)(DAT_09189998 + 0xb8) + 0x30) == '\0') goto LAB_0776ac6c;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar15 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar15 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 4);
        if (lVar5 != 0) goto LAB_0776abb0;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Bridge_R1UserTextSupport__AddToGlobalFallback(uVar7);
      if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 4) + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *(long *)(param_1 + 10);
      uVar7 = System_String__Concat
                        (DAT_091f5a98,*(undefined8 *)(lVar5 + 0x10),DAT_091facc8,
                         *(undefined8 *)(lVar5 + 0x30),0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar7,uVar7);
      }
      System_Text_StringBuilder__Append(lVar11,uVar7,0);
LAB_0776abfc:
      do {
        iVar3 = param_1[0xe] + 1;
        param_1[0xe] = iVar3;
LAB_0776ac08:
        plVar8 = (long *)(param_1 + 0xc);
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(*plVar8 + 0x18) <= iVar3) {
          *plVar8 = 0;
          thunk_FUN_03f5d7b8(plVar8,0);
          plVar8 = *(long **)(param_1 + 10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__Log(uVar7,0);
          goto LAB_0776ac6c;
        }
        lVar5 = thunk_FUN_03f9944c(DAT_091938a8);
        System_Object___ctor(lVar5,0);
        plVar14 = (long *)(param_1 + 4);
        *plVar14 = lVar5;
        thunk_FUN_03f5d7b8(plVar14,lVar5);
        lVar5 = *plVar8;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar5 + 0x18) <= (uint)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(*plVar14 + 0x10) = *(undefined8 *)(lVar5 + (long)param_1[0xe] * 8 + 0x20);
        thunk_FUN_03f5d7b8();
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = Cysharp_Threading_Tasks_UniTask__Yield(8,0);
        _local_68 = CONCAT44(local_64,uVar2);
        iVar3 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_68,0);
        local_64 = iVar3;
        uVar15 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&local_64,0);
        if ((uVar15 & 1) == 0) {
          *param_1 = 0;
          uVar7 = DAT_091c2898;
          param_1[0xf] = local_64;
          FUN_049d1eec(param_1 + 2,&local_64,param_1,uVar7);
          return;
        }
LAB_0776a7c0:
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&local_64,0);
        if (*(int *)(DAT_09189998 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(char *)(*(long *)(DAT_09189998 + 0xb8) + 0x30) == '\0') goto LAB_0776ac6c;
        lVar5 = *(long *)(param_1 + 8);
        uVar16 = *(undefined8 *)(param_1 + 4);
        uVar7 = thunk_FUN_03f9944c(DAT_0917e070);
        FUN_05d78cfc(uVar7,uVar16,DAT_091eed10,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar15 = FUN_057e1304(lVar5,uVar7,DAT_091b0598);
      } while ((uVar15 & 1) != 0);
      if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = *(undefined8 *)(param_1 + 6);
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x10);
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = _GAME_Bridge_R1UserTextSupport__PickDeviceFont(uVar7,uVar16);
      if (lVar5 != 0) {
        if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(*(long *)(param_1 + 4) + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = 0x40;
        if (*(char *)(lVar11 + 0x28) != '\0') {
          uVar2 = 0x30;
        }
        if (*(int *)(DAT_0918b778 + 0xe4) == 0) {
          FUN_03f5c424(0x30);
        }
        lVar11 = TMPro_TMP_FontAsset__CreateFontAsset(lVar5,0,uVar2,5,0x1045,0x400,0x400,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = UnityEngine_Object__op_Inequality(lVar11,0,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_IO_Path__GetFileNameWithoutExtension(lVar5,0);
          uVar7 = System_String__Concat(DAT_09200878,uVar7,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar7,uVar7);
          }
          UnityEngine_Object__SetName(lVar11,uVar7,0);
          if (*(int *)(DAT_09189998 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar9 = DAT_091b09c0;
          lVar4 = *(long *)(*(long *)(DAT_09189998 + 0xb8) + 0x20);
          if (lVar4 != 0) {
            lVar10 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = lVar11;
                thunk_FUN_03f5d7b8(plVar8,lVar11);
              }
              else {
                FUN_057e0c68(lVar4,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              _GAME_Bridge_R1UserTextSupport__AddToGlobalFallback(lVar11);
              lVar11 = DAT_091b0570;
              lVar9 = *(long *)(param_1 + 8);
              if (lVar9 != 0) {
                lVar4 = *(long *)(lVar9 + 0x10);
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar8 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar8 = lVar5;
                    thunk_FUN_03f5d7b8(plVar8,lVar5);
                  }
                  else {
                    FUN_057e0c68(lVar9,lVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar11 = *(long *)(*(long *)(param_1 + 4) + 0x10);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar9 = *(long *)(param_1 + 10);
                  uVar16 = *(undefined8 *)(lVar11 + 0x10);
                  uVar7 = System_IO_Path__GetFileName(lVar5,0);
                  uVar7 = System_String__Concat(DAT_091f5a98,uVar16,DAT_091facc8,uVar7,0);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550(uVar7,uVar7);
                  }
                  System_Text_StringBuilder__Append(lVar9,uVar7,0);
                  goto LAB_0776abfc;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      lVar5 = *(long *)(param_1 + 4);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *(long *)(*(long *)(lVar5 + 0x10) + 0x30);
      if (lVar11 == 0) {
LAB_0776abb0:
        if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(param_1 + 10);
        uVar7 = System_String__Concat
                          (DAT_091f5a98,*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10),DAT_091fad58
                           ,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar7,uVar7);
        }
        System_Text_StringBuilder__Append(lVar11,uVar7,0);
        param_1[4] = 0;
        param_1[5] = 0;
        thunk_FUN_03f5d7b8(param_1 + 4,0);
        goto LAB_0776abfc;
      }
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Bridge_R1UserTextSupport__LoadGameFontAsync(&local_d0,lVar11);
      local_90 = local_c0;
      uStack_98 = uStack_c8;
      uStack_c8 = 0;
      local_c0 = 0;
      local_a0 = local_d0;
      local_d0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdf20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_c8 = uStack_98;
      local_d0 = local_a0;
      local_c0 = local_90;
      thunk_FUN_03f5d7b8(&local_d0,0);
      uStack_78 = uStack_c8;
      local_80 = local_d0;
      local_70 = local_c0;
      uVar15 = FUN_041e5390(&local_80,DAT_0919a728);
    } while ((uVar15 & 1) != 0);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x12) = uStack_78;
    *(long **)(param_1 + 0x10) = local_80;
    *(ulong *)(param_1 + 0x14) = local_70;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    FUN_049b4dc0(param_1 + 2,&local_80,param_1,DAT_091c27e0);
  }
  else {
    if (*(int *)(DAT_0918b7d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = TMPro_TMP_Settings__get_fallbackFontAssets(0);
    if (lVar5 != 0) {
      uVar7 = UnityEngine_Shader__Find(DAT_0920ea18,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar15 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      lVar5 = DAT_091c0310;
      if ((uVar15 & 1) == 0) {
        lVar11 = *(long *)(DAT_091c0310 + 0x38);
        if (lVar11 == 0) {
          FUN_03f95ac8(DAT_091c0310);
          lVar11 = *(long *)(lVar5 + 0x38);
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03f95a6c();
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      }
      else {
        if (*(int *)(DAT_09189998 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = _GAME_Bridge_R1UserTextSupport__ListDeviceFonts();
      }
      *(undefined8 *)(param_1 + 6) = uVar7;
      thunk_FUN_03f5d7b8();
      uVar7 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(uVar7,DAT_091b0558);
      *(undefined8 *)(param_1 + 8) = uVar7;
      thunk_FUN_03f5d7b8(param_1 + 8,uVar7);
      uVar7 = thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(uVar7,DAT_092140d8,0);
      *(undefined8 *)(param_1 + 10) = uVar7;
      thunk_FUN_03f5d7b8(param_1 + 10,uVar7);
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined8 *)(param_1 + 0xc) = **(undefined8 **)(DAT_09189998 + 0xb8);
      thunk_FUN_03f5d7b8();
      iVar3 = 0;
      param_1[0xe] = 0;
      goto LAB_0776ac08;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09214188,0);
LAB_0776ac6c:
    *param_1 = -2;
    piVar13 = param_1 + 6;
    piVar13[0] = 0;
    piVar13[1] = 0;
    thunk_FUN_03f5d7b8(piVar13,0);
    piVar13 = param_1 + 8;
    piVar13[0] = 0;
    piVar13[1] = 0;
    thunk_FUN_03f5d7b8(piVar13,0);
    piVar13 = param_1 + 10;
    piVar13[0] = 0;
    piVar13[1] = 0;
    thunk_FUN_03f5d7b8(piVar13,0);
    FUN_042dada8(param_1 + 2,0);
  }
  return;
}

