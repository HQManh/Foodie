// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$TryGetKeyboardTop
// address: 0x7794fb4
// body: available
// range: 0x7794fb4-0x7795853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77957f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77957fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779580c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795814 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779581c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7795830 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0779561c) */
/* WARNING: Removing unreachable block (ram,0x077953a4) */
/* WARNING: Removing unreachable block (ram,0x07795810) */
/* WARNING: Removing unreachable block (ram,0x07795848) */
/* WARNING: Removing unreachable block (ram,0x07795428) */
/* WARNING: Removing unreachable block (ram,0x0779583c) */
/* WARNING: Removing unreachable block (ram,0x07795840) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 _GAME_Team_TeamChatInputBarUICtrl__TryGetKeyboardTop(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_09522dbe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181130);
    FUN_03f5c2a4(&DAT_091bfa40);
    FUN_03f5c2a4(&DAT_091bfa78);
    FUN_03f5c2a4(&DAT_091bfb60);
    FUN_03f5c2a4(&DAT_091bfb38);
    FUN_03f5c2a4(&DAT_09181140);
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09218458);
    FUN_03f5c2a4(&DAT_0921c200);
    FUN_03f5c2a4(&DAT_0921c698);
    FUN_03f5c2a4(&DAT_09219540);
    FUN_03f5c2a4(&DAT_0921c678);
    FUN_03f5c2a4(&DAT_091f8260);
    FUN_03f5c2a4(&DAT_0921c2d8);
    FUN_03f5c2a4(&DAT_0921c688);
    FUN_03f5c2a4(&DAT_0921c120);
    FUN_03f5c2a4(&DAT_092175d0);
    FUN_03f5c2a4(&DAT_09219f78);
    FUN_03f5c2a4(&DAT_091808f0);
    DAT_09522dbe = 1;
  }
  *param_2 = 0.0;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return 0;
  }
  plVar16 = (long *)(param_1 + 0x98);
  lVar17 = *plVar16;
  if (lVar17 == 0) {
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_09181130);
    UnityEngine_AndroidJavaClass___ctor(plVar6,DAT_09219540,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar7 = (long *)FUN_04ccb67c(plVar6,DAT_09219f78,DAT_091bfb60);
    lVar17 = DAT_091c0270;
    lVar13 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar13 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar13 = *(long *)(lVar17 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_03f95a6c();
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar8 = (long *)FUN_04cc9350(plVar7,DAT_0921c688,**(undefined8 **)(lVar17 + 0xb8),DAT_091bfa40)
    ;
    lVar17 = DAT_091c0270;
    lVar13 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar13 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar13 = *(long *)(lVar17 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_03f95a6c();
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar17 = FUN_04cc9350(plVar8,DAT_0921c120,**(undefined8 **)(lVar17 + 0xb8),DAT_091bfa40);
    *plVar16 = lVar17;
    thunk_FUN_03f5d7b8(plVar16);
    if (plVar8 != (long *)0x0) {
      lVar17 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_09185a58) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07795314;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_07795314:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
    if (plVar7 != (long *)0x0) {
      lVar17 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_09185a58) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07795388;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_07795388:
      (*(code *)*puVar9)(plVar7,puVar9[1]);
    }
    if (plVar6 != (long *)0x0) {
      lVar17 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_09185a58) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0779540c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_0779540c:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
    }
    lVar17 = DAT_091c0270;
    lVar13 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar13 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar13 = *(long *)(lVar17 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_03f95a6c();
    }
    uVar18 = **(undefined8 **)(lVar17 + 0xb8);
    uVar10 = thunk_FUN_03f9944c(DAT_09181140);
    UnityEngine_AndroidJavaObject___ctor(uVar10,DAT_092175d0,uVar18,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar10;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),uVar10);
    lVar17 = *plVar16;
  }
  plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar6 != (long *)0x0) {
    lVar13 = *(long *)(param_1 + 0xa0);
    if ((lVar13 != 0) &&
       (lVar11 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
      uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar6[4] = lVar13;
    thunk_FUN_03f5d7b8(plVar6 + 4,lVar13);
    if (lVar17 != 0) {
      UnityEngine_AndroidJavaObject___Call(lVar17,DAT_0921c698,plVar6,0);
      uVar10 = UnityEngine_AndroidJNI__NewIntArray(2,0);
      if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar18 = UnityEngine_AndroidJavaObject__GetRawClass(*plVar16,0);
      uVar18 = UnityEngine_AndroidJNI__GetMethodID(uVar18,DAT_0921c2d8,DAT_091f8260,0);
      if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar12 = UnityEngine_AndroidJavaObject__GetRawObject(*plVar16,0);
      lVar17 = FUN_03f5c394(DAT_091808f0,1);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar17 + 0x20) = uVar10;
      UnityEngine_AndroidJNI__CallVoidMethod(uVar12,uVar18,lVar17,0);
      lVar17 = UnityEngine_AndroidJNI__FromIntArray(uVar10,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      iVar4 = *(int *)(lVar17 + 0x24);
      UnityEngine_AndroidJNI__DeleteLocalRef(uVar10,0);
      lVar17 = DAT_091c0270;
      lVar11 = *plVar16;
      lVar13 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar13 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar13 = *(long *)(lVar17 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c();
      }
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_03f95a6c();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = FUN_04cc9210(lVar11,DAT_0921c678,**(undefined8 **)(lVar17 + 0xb8),DAT_091bfa78);
      lVar17 = DAT_091c0270;
      lVar11 = *plVar16;
      lVar13 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar13 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar13 = *(long *)(lVar17 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c();
      }
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_03f95a6c();
      }
      if (lVar11 != 0) {
        iVar2 = FUN_04cc9210(lVar11,DAT_0921c200,**(undefined8 **)(lVar17 + 0xb8),DAT_091bfa78);
        if (iVar1 < 1) {
          return 0;
        }
        if (iVar2 < 1) {
          return 0;
        }
        if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = FUN_04ccb33c(*(long *)(param_1 + 0xa0),DAT_09218458,DAT_091bfb38);
        iVar3 = iVar3 - iVar4;
        if (((float)(iVar2 - iVar3) < (float)iVar2 * 0.15) &&
           (uVar14 = UnityEngine_TouchScreenKeyboard__get_visible(0), (uVar14 & 1) == 0)) {
          return 0;
        }
        iVar4 = UnityEngine_Screen__get_height(0);
        iVar2 = UnityEngine_Screen__get_width(0);
        iVar5 = UnityEngine_Screen__get_height(0);
        fVar19 = (float)iVar4 - ((float)iVar2 / (float)iVar1) * (float)iVar3;
        fVar21 = (float)iVar5;
        if (fVar19 <= (float)iVar5) {
          fVar21 = fVar19;
        }
        fVar20 = 0.0;
        if (0.0 <= fVar19) {
          fVar20 = fVar21;
        }
        *param_2 = fVar20;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

