// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$FilteredOperation
// address: 0x45754e8
// body: available
// range: 0x45754e8-0x4575de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4575de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4575de4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int DG_Tweening_Core_TweenManager__FilteredOperation
              (float param_1,undefined4 param_2,int param_3,long *param_4,uint param_5,long *param_6
              ,long param_7)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  uint local_80;
  int local_78;
  int local_74;
  
  if ((DAT_095188cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_091b1130);
    FUN_03f5c2a4(&DAT_091b1158);
    FUN_03f5c2a4(&DAT_091b1160);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188cc = 1;
  }
  if (param_7 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = *(uint *)(param_7 + 0x18);
  }
  local_74 = 0;
  bVar4 = false;
  bVar3 = false;
  plVar17 = (long *)0x0;
  if ((0xfffffffd < param_3 - 3U) && (param_4 != (long *)0x0)) {
    if (*param_4 == DAT_09535468) {
      local_74 = 0;
      bVar4 = false;
      bVar3 = true;
      plVar17 = param_4;
    }
    else if (*param_4 == DAT_09535420) {
      piVar9 = (int *)thunk_FUN_03f99594(param_4);
      local_74 = *piVar9;
      bVar3 = false;
      bVar4 = true;
      plVar17 = (long *)0x0;
    }
    else {
      local_74 = 0;
      bVar4 = false;
      bVar3 = false;
      plVar17 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = *(uint *)(*(long *)(DAT_0918c158 + 0xb8) + 0x74);
  if ((int)uVar7 < 0) {
    return 0;
  }
  local_78 = 0;
  bVar5 = false;
  uVar16 = (ulong)uVar7;
LAB_0457565c:
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar12 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x48);
  if (lVar12 == 0) goto LAB_04575de0;
  if (*(uint *)(lVar12 + 0x18) <= uVar16) {
LAB_04575de4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar12 = *(long *)(lVar12 + uVar16 * 8 + 0x20);
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0xe8) == '\0')) goto switchD_04575990_default;
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_0457596c;
    if (param_3 != 1) goto switchD_04575990_default;
    if (bVar3) {
      if (*(long *)(lVar12 + 0x38) == 0) goto LAB_045758ac;
      uVar8 = System_String__op_Equality(*(long *)(lVar12 + 0x38),plVar17,0);
LAB_04575834:
      bVar3 = true;
joined_r0x045758a4:
      if ((uVar8 & 1) != 0) goto LAB_0457596c;
      goto switchD_04575990_default;
    }
    if (!bVar4) {
      plVar14 = param_4;
      if (*(long *)(lVar12 + 0x30) == 0) {
        lVar11 = *(long *)(lVar12 + 0x48);
        if (lVar11 == 0) goto LAB_04575a24;
        if (param_4 == (long *)0x0) goto LAB_04575de0;
      }
      else {
        if (param_4 == (long *)0x0) goto LAB_04575de0;
        uVar8 = (**(code **)(*param_4 + 0x138))
                          (param_4,*(long *)(lVar12 + 0x30),*(undefined8 *)(*param_4 + 0x140));
        if ((uVar8 & 1) != 0) {
          bVar3 = false;
          bVar4 = false;
          goto LAB_0457596c;
        }
        lVar11 = *(long *)(lVar12 + 0x48);
        if (lVar11 == 0) goto LAB_04575a24;
      }
LAB_04575954:
      uVar8 = (**(code **)(*plVar14 + 0x138))(plVar14,lVar11,*(undefined8 *)(*plVar14 + 0x140));
      bVar3 = false;
      bVar4 = false;
      if ((uVar8 & 1) != 0) goto LAB_0457596c;
      bVar4 = false;
      goto switchD_04575990_default;
    }
    bVar3 = false;
    bVar4 = true;
    if (*(int *)(lVar12 + 0x40) != local_74) goto switchD_04575990_default;
  }
  else {
    if (param_3 == 2) {
      if (bVar3) {
        if (*(long *)(lVar12 + 0x48) == 0) {
LAB_045758ac:
          bVar3 = true;
        }
        else {
          uVar8 = System_String__op_Equality(*(undefined8 *)(lVar12 + 0x38),plVar17,0);
          bVar3 = true;
          if ((param_6 != (long *)0x0) && ((uVar8 & 1) != 0)) {
            uVar8 = (**(code **)(*param_6 + 0x138))
                              (param_6,*(undefined8 *)(lVar12 + 0x48),
                               *(undefined8 *)(*param_6 + 0x140));
            goto LAB_04575834;
          }
        }
      }
      else if (bVar4) {
        if (*(long *)(lVar12 + 0x48) == 0) {
          bVar3 = false;
          bVar4 = true;
        }
        else {
          bVar3 = false;
          bVar4 = true;
          if ((param_6 != (long *)0x0) && (*(int *)(lVar12 + 0x40) == local_74)) {
            uVar8 = (**(code **)(*param_6 + 0x138))
                              (param_6,*(long *)(lVar12 + 0x48),*(undefined8 *)(*param_6 + 0x140));
            bVar3 = false;
            bVar4 = true;
            goto joined_r0x045758a4;
          }
        }
      }
      else {
        if (*(long *)(lVar12 + 0x30) != 0) {
          bVar4 = false;
          if ((param_6 == (long *)0x0) || (*(long *)(lVar12 + 0x48) == 0)) {
            bVar3 = false;
            goto switchD_04575990_default;
          }
          if (param_4 == (long *)0x0) goto LAB_04575de0;
          uVar8 = (**(code **)(*param_4 + 0x138))
                            (param_4,*(long *)(lVar12 + 0x30),*(undefined8 *)(*param_4 + 0x140));
          if ((uVar8 & 1) != 0) {
            lVar11 = *(long *)(lVar12 + 0x48);
            plVar14 = param_6;
            goto LAB_04575954;
          }
        }
LAB_04575a24:
        bVar4 = false;
        bVar3 = false;
      }
      goto switchD_04575990_default;
    }
    if (param_3 != 3) goto switchD_04575990_default;
    if ((int)local_80 < 1) goto LAB_0457596c;
    if (param_7 == 0) goto LAB_04575de0;
    uVar8 = 0;
    plVar14 = plVar17;
    do {
      if (*(uint *)(param_7 + 0x18) <= uVar8) goto LAB_04575de4;
      plVar18 = *(long **)(param_7 + 0x20 + uVar8 * 8);
      if (plVar18 == (long *)0x0) {
LAB_04575728:
        plVar17 = plVar14;
        if (bVar3) {
LAB_04575754:
          uVar10 = System_String__op_Equality(*(undefined8 *)(lVar12 + 0x38),plVar17,0);
          bVar3 = true;
          if ((uVar10 & 1) != 0) goto switchD_04575990_default;
        }
        else {
          bVar3 = false;
        }
        if (bVar4) goto LAB_04575770;
        bVar4 = false;
      }
      else {
        plVar17 = plVar18;
        if (*plVar18 == DAT_09535468) goto LAB_04575754;
        if (*plVar18 != DAT_09535420) goto LAB_04575728;
        piVar9 = (int *)thunk_FUN_03f99594(plVar18);
        local_74 = *piVar9;
        if (bVar3) {
          bVar4 = true;
          plVar17 = plVar14;
          goto LAB_04575754;
        }
        bVar3 = false;
        plVar17 = plVar14;
LAB_04575770:
        bVar4 = true;
        if (*(int *)(lVar12 + 0x40) == local_74) goto switchD_04575990_default;
      }
      if (*(long *)(lVar12 + 0x30) == 0) {
        lVar11 = *(long *)(lVar12 + 0x48);
        if (lVar11 != 0) {
          if (plVar18 != (long *)0x0) goto LAB_045757c4;
          goto LAB_04575de0;
        }
      }
      else {
        if (plVar18 == (long *)0x0) goto LAB_04575de0;
        uVar10 = (**(code **)(*plVar18 + 0x138))
                           (plVar18,*(long *)(lVar12 + 0x30),*(undefined8 *)(*plVar18 + 0x140));
        if ((uVar10 & 1) != 0) goto switchD_04575990_default;
        lVar11 = *(long *)(lVar12 + 0x48);
        if (lVar11 != 0) {
LAB_045757c4:
          uVar10 = (**(code **)(*plVar18 + 0x138))(plVar18,lVar11,*(undefined8 *)(*plVar18 + 0x140))
          ;
          if ((uVar10 & 1) != 0) goto switchD_04575990_default;
        }
      }
      uVar8 = uVar8 + 1;
      plVar14 = plVar17;
    } while (local_80 != uVar8);
  }
LAB_0457596c:
  lVar11 = DAT_0918c158;
  switch(param_2) {
  case 0:
    bVar2 = *(byte *)(lVar12 + 0x9c);
    if (*(char *)(lVar12 + 0x101) == '\0') {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      DG_Tweening_Core_TweenManager__ForceInit(lVar12,0);
    }
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = DG_Tweening_Core_TweenManager__Complete(lVar12,0,param_1 <= 0.0);
    if ((uVar8 & 1) != 0) {
      uVar7 = (uint)bVar2;
      if ((param_5 & 1) == 0) {
        uVar7 = 1;
      }
      local_78 = uVar7 + local_78;
      if (bVar2 != 0) {
        if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar11 = *(long *)(DAT_0918c158 + 0xb8);
        if (*(char *)(lVar11 + 0x44) == '\0') {
          if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
            FUN_03f5c424();
            goto LAB_04575b7c;
          }
          goto LAB_04575b84;
        }
        *(undefined1 *)(lVar12 + 0xe8) = 0;
      }
    }
    goto switchD_04575990_default;
  case 1:
    *(undefined1 *)(lVar12 + 0xe8) = 0;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar11 = DAT_0918c158;
    }
    local_78 = local_78 + 1;
    if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x44) != '\0') goto switchD_04575990_default;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__Despawn(lVar12,0);
LAB_04575b7c:
    lVar11 = *(long *)(DAT_0918c158 + 0xb8);
LAB_04575b84:
    lVar6 = DAT_091b1128;
    lVar11 = *(long *)(lVar11 + 0x60);
    if (lVar11 == 0) goto LAB_04575de0;
    lVar13 = *(long *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_04575de0;
    uVar7 = *(uint *)(lVar11 + 0x18);
    if (uVar7 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar7 + 1;
      plVar14 = (long *)(lVar13 + (long)(int)uVar7 * 8 + 0x20);
      *plVar14 = lVar12;
      thunk_FUN_03f5d7b8(plVar14,lVar12);
    }
    else {
      FUN_057e0c68(lVar11,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    bVar5 = true;
    goto switchD_04575990_default;
  case 2:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(byte *)(lVar12 + 0x2c) = *(byte *)(lVar12 + 0x2c) ^ 1;
    goto LAB_04575c38;
  case 3:
    if (*(char *)(lVar12 + 0x101) == '\0') {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      DG_Tweening_Core_TweenManager__ForceInit(lVar12,0);
    }
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__Goto(param_1,lVar12,param_5 & 1,1);
    goto LAB_04575c38;
  case 4:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DG_Tweening_Core_TweenManager__Pause(lVar12);
    break;
  case 5:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DG_Tweening_Core_TweenManager__Play(lVar12);
    break;
  case 6:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DG_Tweening_Core_TweenManager__PlayForward(lVar12);
    break;
  case 7:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DG_Tweening_Core_TweenManager__PlayBackwards(lVar12);
    break;
  case 8:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DG_Tweening_Core_TweenManager__Rewind(lVar12,param_5 & 1);
    break;
  case 9:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DG_Tweening_Core_TweenManager__SmoothRewind(lVar12);
    break;
  case 10:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__Restart(param_1,lVar12,param_5 & 1);
LAB_04575c38:
    local_78 = local_78 + 1;
    goto switchD_04575990_default;
  case 0xb:
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = DG_Tweening_Core_TweenManager__TogglePause(lVar12);
    break;
  case 0xc:
    if (((*(char *)(lVar12 + 0x111) == '\0') || (*(char *)(lVar12 + 0x9c) == '\0')) &&
       (((param_5 & 1) == 0 || (*(char *)(lVar12 + 0x110) != '\0')))) goto LAB_04575c38;
  default:
    goto switchD_04575990_default;
  }
  local_78 = local_78 + (uVar7 & 1);
switchD_04575990_default:
  bVar1 = (long)uVar16 < 1;
  uVar16 = uVar16 - 1;
  if (bVar1) goto LAB_04575cc0;
  goto LAB_0457565c;
LAB_04575cc0:
  if (!bVar5) {
    return local_78;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar12 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x60);
  if (lVar12 != 0) {
    iVar15 = *(int *)(lVar12 + 0x18);
    if (-1 < iVar15 + -1) {
      do {
        if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar12 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x60);
        if (lVar12 == 0) goto LAB_04575de0;
        iVar15 = iVar15 + -1;
        lVar12 = FUN_057e0998(lVar12,iVar15,DAT_091b1160);
        if (lVar12 == 0) goto LAB_04575de0;
        if (*(int *)(lVar12 + 0xf8) != -1) {
          if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          DG_Tweening_Core_TweenManager__RemoveActiveTween(lVar12);
        }
      } while (0 < iVar15);
    }
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar12 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x60);
    if (lVar12 != 0) {
      iVar15 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (iVar15 < 1) {
        return local_78;
      }
      System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar15,0);
      return local_78;
    }
  }
LAB_04575de0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

