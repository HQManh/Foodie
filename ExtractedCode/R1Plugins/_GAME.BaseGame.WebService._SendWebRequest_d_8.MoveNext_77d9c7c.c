// rea decompile_all
// name: _GAME.BaseGame.WebService.<SendWebRequest>d__8$$MoveNext
// address: 0x77d9c7c
// body: available
// range: 0x77d9c7c-0x77da493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77da42c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da44c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077da42c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_BaseGame_WebService_<SendWebRequest>d__8__MoveNext(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 auStack_68 [2];
  int local_58;
  undefined1 local_50 [16];
  int local_34;
  
  if ((DAT_09523008 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091998d0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_09183c88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0918c7d8);
    FUN_03f5c2a4(&DAT_0918c908);
    FUN_03f5c2a4(&DAT_0920a288);
    FUN_03f5c2a4(&DAT_0920a150);
    FUN_03f5c2a4(&DAT_091ff040);
    FUN_03f5c2a4(&DAT_09217840);
    DAT_09523008 = 1;
  }
  local_34 = *param_1;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_58 = 0;
  if (local_34 == 0) {
LAB_077da0c8:
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    local_34 = -1;
    *param_1 = -1;
LAB_077da0e0:
    Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__GetResult
              (local_50,0);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(param_1 + 8);
    uVar2 = UnityEngine_Networking_UnityWebRequest__get_result(*(long *)(param_1 + 10),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar8 + 0x28) = uVar2;
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(param_1 + 8);
    uVar4 = UnityEngine_Networking_UnityWebRequest__get_responseCode(*(long *)(param_1 + 10),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar8 + 0x30) = uVar4;
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(*(long *)(param_1 + 10),0);
    if (iVar3 == 1) {
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(param_1 + 8);
      uVar4 = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(*(long *)(param_1 + 10),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar7 = (undefined8 *)(lVar8 + 0x38);
      *puVar7 = uVar4;
      thunk_FUN_03f5d7b8(puVar7);
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *(long *)(param_1 + 8);
      lVar8 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*(long *)(param_1 + 10),0)
      ;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_Networking_DownloadHandler__get_text(lVar8,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar7 = (undefined8 *)(lVar9 + 0x40);
      *puVar7 = uVar4;
      thunk_FUN_03f5d7b8(puVar7);
    }
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(*(long *)(param_1 + 10),0);
    bVar1 = iVar3 == 1;
    iVar3 = 10;
  }
  else {
    piVar10 = param_1 + 10;
    piVar10[0] = 0;
    piVar10[1] = 0;
    thunk_FUN_03f5d7b8(piVar10,0);
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        uVar4 = UnityEngine_Networking_UnityWebRequest__Get(*(undefined8 *)(lVar8 + 0x10),0);
        *(undefined8 *)(param_1 + 10) = uVar4;
        thunk_FUN_03f5d7b8();
      }
      else {
        if (iVar3 != 1) {
LAB_077d9ec0:
          bVar1 = false;
          *(undefined4 *)(lVar8 + 0x28) = 3;
          goto LAB_077da318;
        }
        uVar11 = *(undefined8 *)(lVar8 + 0x10);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c7d8);
        UnityEngine_Networking_UnityWebRequest___ctor(uVar4,uVar11,DAT_0920a150,0);
        *(undefined8 *)(param_1 + 10) = uVar4;
        thunk_FUN_03f5d7b8(param_1 + 10,uVar4);
        lVar8 = *(long *)(param_1 + 10);
        plVar5 = (long *)System_Text_Encoding__get_UTF8(0);
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = (**(code **)(*plVar5 + 600))
                          (plVar5,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),
                           *(undefined8 *)(*plVar5 + 0x260));
        uVar11 = thunk_FUN_03f9944c(DAT_0918c908);
        UnityEngine_Networking_UploadHandlerRaw___ctor(uVar11,uVar4,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Networking_UnityWebRequest__set_uploadHandler(lVar8,uVar11,0);
        lVar8 = *(long *)(param_1 + 10);
        uVar4 = thunk_FUN_03f9944c(DAT_09183c88);
        UnityEngine_Networking_DownloadHandlerBuffer___ctor(uVar4,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Networking_UnityWebRequest__set_downloadHandler(lVar8,uVar4,0);
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Networking_UnityWebRequest__SetRequestHeader
                  (*(long *)(param_1 + 10),DAT_091ff040,DAT_09217840,0);
      }
    }
    else if (iVar3 == 2) {
      uVar11 = *(undefined8 *)(lVar8 + 0x10);
      uVar4 = thunk_FUN_03f9944c(DAT_0918c7d8);
      UnityEngine_Networking_UnityWebRequest___ctor(uVar4,uVar11,DAT_0920a288,0);
      *(undefined8 *)(param_1 + 10) = uVar4;
      thunk_FUN_03f5d7b8(param_1 + 10,uVar4);
      lVar8 = *(long *)(param_1 + 10);
      plVar5 = (long *)System_Text_Encoding__get_UTF8(0);
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = (**(code **)(*plVar5 + 600))
                        (plVar5,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20),
                         *(undefined8 *)(*plVar5 + 0x260));
      uVar11 = thunk_FUN_03f9944c(DAT_0918c908);
      UnityEngine_Networking_UploadHandlerRaw___ctor(uVar11,uVar4,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Networking_UnityWebRequest__set_uploadHandler(lVar8,uVar11,0);
      lVar8 = *(long *)(param_1 + 10);
      uVar4 = thunk_FUN_03f9944c(DAT_09183c88);
      UnityEngine_Networking_DownloadHandlerBuffer___ctor(uVar4,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Networking_UnityWebRequest__set_downloadHandler(lVar8,uVar4,0);
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader
                (*(long *)(param_1 + 10),DAT_091ff040,DAT_09217840,0);
    }
    else {
      if (iVar3 != 3) goto LAB_077d9ec0;
      uVar4 = UnityEngine_Networking_UnityWebRequest__Delete(*(undefined8 *)(lVar8 + 0x10),0);
      *(undefined8 *)(param_1 + 10) = uVar4;
      thunk_FUN_03f5d7b8();
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    if (local_34 == 0) goto LAB_077da0c8;
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout
              (*(long *)(param_1 + 10),*(undefined4 *)(*(long *)(param_1 + 8) + 0x1c),0);
    if (local_34 == 0) goto LAB_077da0c8;
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*(long *)(param_1 + 10),0);
    local_50 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter(uVar4,0);
    uVar6 = Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__get_IsCompleted
                      (local_50,0);
    if ((uVar6 & 1) != 0) goto LAB_077da0e0;
    local_34 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    FUN_047908ec(param_1 + 2,local_50,param_1,DAT_091998d0);
    bVar1 = false;
    iVar3 = 0xe;
  }
  if ((local_34 < 0) && (plVar5 = *(long **)(param_1 + 0xc), plVar5 != (long *)0x0)) {
    lVar8 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185a58) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077da244;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_077da244:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
  if (iVar3 != 10) {
    if (iVar3 != 0) {
      return;
    }
    uVar4 = auStack_68[local_58 + -1];
    *param_1 = -2;
    piVar10 = param_1 + 10;
    piVar10[0] = 0;
    piVar10[1] = 0;
    thunk_FUN_03f5d7b8(piVar10,0);
    lVar8 = thunk_FUN_03fc39d4(&DAT_09199a18);
    plVar5 = *(long **)(param_1 + 2);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_1 + 4) = uVar4;
      thunk_FUN_03f5d7b8(param_1 + 4,uVar4);
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar9 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_077da404;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar5,lVar8,3);
LAB_077da404:
    (*(code *)*puVar7)(plVar5,uVar4,puVar7[1]);
    return;
  }
LAB_077da318:
  *param_1 = -2;
  piVar10 = param_1 + 10;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  plVar5 = *(long **)(param_1 + 2);
  if (plVar5 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar1;
  }
  else {
    lVar8 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar9 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077da3e0;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar5,lVar8,2);
LAB_077da3e0:
    (*(code *)*puVar7)(plVar5,bVar1,puVar7[1]);
  }
  return;
}

