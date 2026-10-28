// rea decompile_all
// name: _GAME.R1Boot.<StartAsync>d__14$$MoveNext
// address: 0x773a6e4
// body: available
// range: 0x773a6e4-0x773ae4f inclusive
// range: 0x773aea8-0x773b33b inclusive
// range: 0x773b390-0x773b5c3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x773ae44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773ae48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773ae4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_R1Boot_<StartAsync>d__14__MoveNext(int *param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_70 [16];
  
  if ((DAT_09522abb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_091bf668);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197610);
    FUN_03f5c2a4(&DAT_09197618);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_09175060);
    FUN_03f5c2a4(&DAT_09175068);
    FUN_03f5c2a4(&DAT_091c2850);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cd9f0);
    FUN_03f5c2a4(&DAT_09171908);
    FUN_03f5c2a4(&DAT_0917a090);
    FUN_03f5c2a4(&DAT_091d4b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189930);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_09214100);
    FUN_03f5c2a4(&DAT_09214110);
    FUN_03f5c2a4(&DAT_0920b310);
    FUN_03f5c2a4(&DAT_09214108);
    FUN_03f5c2a4(&DAT_09214010);
    DAT_09522abb = 1;
  }
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  iVar2 = *param_1;
  local_a8 = 0;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      local_a0 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      goto LAB_0773b488;
    }
    if (iVar2 == 1) {
      local_a0 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      goto LAB_0773aea8;
    }
LAB_0773a8dc:
    if (*(int *)(DAT_09189930 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_09189930 + 0xb8);
    if (*(char *)(lVar6 + 1) == '\0') {
      if (*(int *)(DAT_09189930 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_09189930 + 0xb8);
      }
      *(undefined1 *)(lVar6 + 1) = 1;
      do {
        uVar7 = _GAME_Bridge_CookOrderBridge__get_IsCoreReady(0);
        if ((uVar7 & 1) != 0) {
          iVar2 = UnityEngine_Time__get_realtimeSinceStartup(0);
          param_1[4] = iVar2;
          goto LAB_0773af4c;
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar11 = Cysharp_Threading_Tasks_UniTask__Delay(200,1,8,0,0,0);
        local_90 = auVar11;
        thunk_FUN_03f5d7b8(local_90,0);
        local_a0 = local_90;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar5 = local_a0._0_8_;
        if ((long *)local_a0._0_8_ != (long *)0x0) {
          lVar6 = *(long *)local_a0._0_8_;
          uVar9 = local_a0._8_8_ & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_091868c0) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0773b474;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,0);
LAB_0773b474:
          iVar2 = (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
          if (iVar2 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0x12) = local_a0;
            thunk_FUN_03f5d7b8(param_1 + 0x12,0);
            FUN_049d1798(param_1 + 2,local_a0,param_1,DAT_091c2850);
            return;
          }
        }
LAB_0773b488:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar5 = local_a0._0_8_;
        if ((long *)local_a0._0_8_ != (long *)0x0) {
          lVar6 = *(long *)local_a0._0_8_;
          uVar9 = local_a0._8_8_ & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_091868c0) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_0773b500;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_0773b500:
          (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
        }
        if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Application__get_isPlaying(0);
      } while ((uVar7 & 1) != 0);
    }
    goto LAB_0773b548;
  }
  if (iVar2 == 2) {
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
    goto LAB_0773a950;
  }
  if (iVar2 != 3) goto LAB_0773a8dc;
  local_a0 = *(undefined1 (*) [16])(param_1 + 0x12);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = -1;
  goto LAB_0773ac70;
LAB_0773af4c:
  do {
    if (*(int *)(DAT_09189970 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = _GAME_Bridge_R1RemoteConfig__get_IsReady(0);
    if ((uVar7 & 1) != 0) {
LAB_0773b0b8:
      if (*(int *)(DAT_09189970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = _GAME_Bridge_R1RemoteConfig__get_Enable(0);
      uVar5 = DAT_09171908;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(DAT_09189938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522bd8 == '\0') {
          FUN_03f5c2a4(&DAT_09189938);
          DAT_09522bd8 = '\x01';
        }
        if (*(int *)(DAT_09189938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = DAT_091835d0;
        *(undefined1 *)(*(long *)(DAT_09189938 + 0xb8) + 9) = 1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = &DAT_09214110;
        goto LAB_0773b2d0;
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_AddressableAssets_Addressables__LoadResourceLocationsAsync
                (&local_d0,DAT_0920b310,uVar5,0);
      local_90._8_8_ = uStack_c8;
      local_90._0_8_ = local_d0;
      local_80 = local_c0;
      *(undefined8 *)(param_1 + 8) = uStack_c8;
      *(long **)(param_1 + 6) = local_d0;
      *(undefined8 *)(param_1 + 10) = local_c0;
      thunk_FUN_03f5d7b8(param_1 + 6,0);
      uStack_c8 = *(undefined8 *)(param_1 + 8);
      local_d0 = *(long **)(param_1 + 6);
      local_c0 = *(undefined8 *)(param_1 + 10);
      uVar5 = FUN_03f5c42c(DAT_09175060,&local_d0);
      local_70 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask(uVar5,8,0,0);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(local_70,0);
      local_a0 = local_70;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar5 = local_a0._0_8_;
      if ((long *)local_a0._0_8_ == (long *)0x0) goto LAB_0773a950;
      lVar6 = *(long *)local_a0._0_8_;
      uVar9 = local_a0._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0773b248;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_0773b230;
    }
    fVar10 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if (10.0 <= fVar10 - (float)param_1[4]) goto LAB_0773b0b8;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar11 = Cysharp_Threading_Tasks_UniTask__Delay(200,1,8,0,0,0);
    local_90 = auVar11;
    thunk_FUN_03f5d7b8(local_90,0);
    local_a0 = local_90;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar5 = local_a0._0_8_;
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_a0._0_8_;
      uVar9 = local_a0._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0773b068;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,0);
LAB_0773b068:
      iVar2 = (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_a0;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        FUN_049d1798(param_1 + 2,local_a0,param_1,DAT_091c2850);
        return;
      }
    }
LAB_0773aea8:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar5 = local_a0._0_8_;
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_a0._0_8_;
      uVar9 = local_a0._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0773af20;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_0773af20:
      (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
    }
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Application__get_isPlaying(0);
  } while ((uVar7 & 1) != 0);
  goto LAB_0773b548;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0773b230:
    if (*(long *)(piVar8 + -2) == DAT_091868c0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0773b2ec;
    }
  }
LAB_0773b248:
  puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,0);
LAB_0773b2ec:
  iVar2 = (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
  if (iVar2 == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x12) = local_a0;
    thunk_FUN_03f5d7b8(param_1 + 0x12,0);
    FUN_049d1798(param_1 + 2,local_a0,param_1,DAT_091c2850);
    return;
  }
LAB_0773a950:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_a0._0_8_;
  if ((long *)local_a0._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_a0._0_8_;
    uVar9 = local_a0._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0773a9c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_0773a9c8:
    (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
  }
  iVar2 = FUN_0640f818(param_1 + 6,DAT_09197618);
  if (iVar2 == 1) {
    lVar6 = FUN_0640f7ac(param_1 + 6,DAT_09197610);
    if (lVar6 == 0) goto LAB_0773aa68;
    plVar3 = (long *)FUN_0640f7ac(param_1 + 6,DAT_09197610);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917a090) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0773aa7c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a090,0);
LAB_0773aa7c:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    bVar1 = 0 < iVar2;
  }
  else {
LAB_0773aa68:
    bVar1 = false;
  }
  uStack_c8 = *(undefined8 *)(param_1 + 8);
  local_d0 = *(long **)(param_1 + 6);
  local_c0 = *(undefined8 *)(param_1 + 10);
  if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_90._8_8_ = uStack_c8;
  local_90._0_8_ = local_d0;
  local_80 = local_c0;
  FUN_04b71ee0(local_90,DAT_091bf668);
  if (!bVar1) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = &DAT_09214108;
LAB_0773b2d0:
    UnityEngine_Debug__LogWarning(*puVar4,0);
    goto LAB_0773b548;
  }
  if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04b711d8(&local_d0,DAT_0920b310,DAT_091bf638);
  local_90._8_8_ = uStack_c8;
  local_90._0_8_ = local_d0;
  local_80 = local_c0;
  *(undefined8 *)(param_1 + 0xe) = uStack_c8;
  *(long **)(param_1 + 0xc) = local_d0;
  *(undefined8 *)(param_1 + 0x10) = local_c0;
  thunk_FUN_03f5d7b8(param_1 + 0xc,0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xe);
  local_d0 = *(long **)(param_1 + 0xc);
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = FUN_03f5c42c(DAT_09175068,&local_d0);
  auVar11 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask(uVar5,8,0,0);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_70 = auVar11;
  thunk_FUN_03f5d7b8(local_70,0);
  local_a0 = local_70;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  uVar5 = local_a0._0_8_;
  if ((long *)local_a0._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_a0._0_8_;
    uVar9 = local_a0._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0773ac5c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,0);
LAB_0773ac5c:
    iVar2 = (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
    if (iVar2 == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_a0;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      FUN_049d1798(param_1 + 2,local_a0,param_1,DAT_091c2850);
      return;
    }
  }
LAB_0773ac70:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_a0._0_8_;
  if ((long *)local_a0._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_a0._0_8_;
    uVar9 = local_a0._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0773ace8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_0773ace8:
    (*(code *)*puVar4)(uVar5,uVar9,puVar4[1]);
  }
  iVar2 = FUN_0640f818(param_1 + 0xc,DAT_09197808);
  if (iVar2 == 1) {
    uVar5 = FUN_0640f7ac(param_1 + 0xc,DAT_09197800);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar7 & 1) == 0) {
      uVar5 = FUN_0640f7ac(param_1 + 0xc,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = FUN_04c350c8(uVar5,DAT_091d4b10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Object__SetName(lVar6,DAT_09214010,0);
      UnityEngine_Object__DontDestroyOnLoad(lVar6,0);
      lVar6 = FUN_04b7c324(lVar6,DAT_091cd9f0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_R1Boot__Boot();
      goto LAB_0773b548;
    }
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogError(DAT_09214100,0);
LAB_0773b548:
  *param_1 = -2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_042dada8(param_1 + 2,0);
  return;
}

