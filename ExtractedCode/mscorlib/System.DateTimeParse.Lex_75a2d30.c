// rea decompile_all
// name: System.DateTimeParse$$Lex
// address: 0x75a2d30
// body: available
// range: 0x75a2d30-0x75a3a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a3a88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a3a8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a3a90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a3a94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a3a98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_DateTimeParse__Lex
          (uint param_1,long *param_2,undefined8 *param_3,long param_4,long param_5,long *param_6,
          undefined4 param_7)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar9;
  long lVar10;
  undefined4 local_74 [3];
  undefined4 local_68;
  undefined2 local_5c [2];
  undefined8 local_58;
  int local_48;
  undefined4 local_44;
  
  local_44 = param_7;
  if ((DAT_09521c3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_0918db18);
    FUN_03f5c2a4(&DAT_09202db8);
    DAT_09521c3b = 1;
  }
  lVar10 = *param_6;
  local_48 = 0;
  iVar2 = *(int *)(DAT_0918db18 + 0xe4);
  local_58 = 0;
  local_5c[0] = 0;
  local_68 = 0;
  *(undefined4 *)param_3 = 0x12;
  if (iVar2 == 0) {
    FUN_03f5c424();
  }
  System___DTString__GetRegularToken(param_2,&local_48,(long)&local_58 + 4,lVar10,0);
  lVar10 = DAT_0918db18;
  if (local_48 < 7) {
    if (4 < local_48) {
      if (local_48 != 5) {
        if (local_48 == 6) {
          *(undefined4 *)param_3 = 0;
        }
        goto LAB_075a39c0;
      }
      if (*(int *)(param_4 + 0xc) != -1) goto LAB_075a37b0;
      lVar10 = *param_6;
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System___DTString__GetSeparatorToken(param_2,lVar10,&local_58,local_5c,0);
      if (iVar2 < 0x301) {
        if (iVar2 == 0x200) {
          uVar4 = 6;
        }
        else {
          if (iVar2 != 0x300) goto LAB_075a37b0;
LAB_075a3748:
          uVar4 = 7;
        }
LAB_075a3838:
        *(undefined4 *)param_3 = uVar4;
        *(uint *)(param_4 + 0xc) = local_58._4_4_;
        goto LAB_075a39c0;
      }
      if (iVar2 == 0x600) {
LAB_075a3834:
        uVar4 = 8;
        goto LAB_075a3838;
      }
      if (iVar2 == 0x700) {
        if (*(char *)(param_4 + 0x28) != '\0') goto LAB_075a3834;
      }
      else if (iVar2 == 0xf00) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_075a3a90;
        if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
        lVar9 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_075a3a90;
        if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_075a3a8c;
        if (*(int *)(lVar9 + 0x40) == 0x14) {
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
            if (lVar10 == 0) goto LAB_075a3a90;
          }
          if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
          lVar10 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_075a3a90;
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) == 0) goto LAB_075a3a8c;
          if (0x14 < *(int *)(lVar10 + 0x3c)) {
            *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
            *(undefined2 *)((long)param_2 + 0x14) = local_5c[0];
            goto LAB_075a3748;
          }
        }
        goto LAB_075a3834;
      }
      goto LAB_075a37b0;
    }
    if (1 < local_48 - 1U) {
      if (1 < local_48 - 3U) goto LAB_075a39c0;
      if (*(int *)(param_4 + 0x1c) != -1) goto LAB_075a37b0;
LAB_075a2f7c:
      *(uint *)(param_4 + 0x1c) = local_58._4_4_;
      goto LAB_075a39c0;
    }
    if ((*(int *)(param_4 + 8) == 3) || (local_58._4_4_ == 0xffffffff)) goto LAB_075a37b0;
    if (param_1 == 0x12) {
LAB_075a3100:
      lVar10 = param_2[2];
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System___DTString__get_Length(param_2,0);
      if ((int)lVar10 < iVar2 + -1) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_DateTimeParse__HandleTimeZone(param_2,param_5);
        if ((uVar5 & 1) == 0) goto LAB_075a37bc;
      }
    }
    else if (param_1 == 0x13) {
      lVar10 = param_2[2];
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System___DTString__get_Length(param_2,0);
      if ((int)lVar10 < iVar2 + -1) {
        if (*(uint *)(param_2 + 1) <= *(uint *)(param_2 + 2)) goto LAB_075a3a8c;
        if (*(short *)(*param_2 + (long)(int)*(uint *)(param_2 + 2) * 2) == 0x2e) {
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_DateTimeParse__ParseFraction(param_2,param_4 + 0x20);
        }
      }
      goto LAB_075a3100;
    }
    *(uint *)(param_3 + 1) = local_58._4_4_;
    lVar10 = DAT_0918db18;
    if (local_48 == 2) {
      if (*(int *)(param_4 + 0x10) == -1) {
        lVar9 = *param_6;
        *(uint *)(param_4 + 0x10) = local_58._4_4_;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System___DTString__GetSeparatorToken(param_2,lVar9,&local_58,local_5c,0);
        if ((int)uVar3 < 0x701) {
          if ((int)uVar3 < 0x401) {
            if (uVar3 == 0x200) {
LAB_075a35ac:
              uVar4 = 0xe;
              goto LAB_075a39bc;
            }
            if (uVar3 == 0x300) goto LAB_075a39b8;
            if (uVar3 == 0x400) goto LAB_075a399c;
          }
          else {
            if (uVar3 == 0x500) {
LAB_075a399c:
              if (*(int *)(param_4 + 0x1c) != -1) goto LAB_075a39a8;
              local_58._4_4_ = (uint)(uVar3 != 0x400);
              *(undefined4 *)param_3 = 0xc;
              goto LAB_075a2f7c;
            }
            if ((uVar3 == 0x600) || ((uVar3 == 0x700 && (*(char *)(param_4 + 0x28) != '\0')))) {
LAB_075a37f4:
              uVar4 = 0xd;
              goto LAB_075a39bc;
            }
          }
        }
        else if (uVar3 < 0xa01) {
          if (((uVar3 == 0x800) || (uVar3 == 0x900)) || (uVar3 == 0xa00)) goto LAB_075a3978;
        }
        else if (uVar3 < 0xc01) {
          if ((uVar3 == 0xb00) || (uVar3 == 0xc00)) goto LAB_075a3810;
        }
        else {
          if (uVar3 == 0xd00) {
LAB_075a3810:
            uVar4 = 10;
            goto LAB_075a397c;
          }
          if (uVar3 == 0xf00) {
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
            if (lVar10 == 0) goto LAB_075a3a90;
            if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
            lVar9 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_075a3a90;
            if (*(uint *)(lVar9 + 0x18) < 0xe) goto LAB_075a3a8c;
            if (*(int *)(lVar9 + 0x54) == 0x14) {
              if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
                if (lVar10 == 0) goto LAB_075a3a90;
              }
              if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
              lVar10 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_075a3a90;
              if (*(uint *)(lVar10 + 0x18) < 0xd) goto LAB_075a3a8c;
              if (0x14 < *(int *)(lVar10 + 0x50)) goto LAB_075a38a0;
            }
            goto LAB_075a37f4;
          }
        }
      }
    }
    else {
      lVar10 = *param_6;
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System___DTString__GetSeparatorToken(param_2,lVar10,&local_58,local_5c,0);
      if ((int)uVar3 < 0x801) {
        if ((int)uVar3 < 0x401) {
          if (uVar3 == 0x200) {
            uVar4 = 1;
          }
          else {
            if (uVar3 != 0x300) {
              if (uVar3 == 0x400) goto LAB_075a38b8;
              goto LAB_075a37b0;
            }
LAB_075a39e0:
            uVar4 = 3;
          }
LAB_075a3a24:
          *(undefined4 *)param_3 = uVar4;
          System_DateTimeRawInfo__AddNumber(param_4,*(undefined4 *)(param_3 + 1),0);
          goto LAB_075a39c0;
        }
        if (uVar3 < 0x601) {
          if (uVar3 == 0x500) {
LAB_075a38b8:
            if (*(int *)(param_4 + 0x1c) == -1) {
              *(undefined4 *)param_3 = 2;
              *(uint *)(param_4 + 0x1c) = (uint)(uVar3 != 0x400);
              if (param_1 == 4) {
                lVar10 = *param_6;
                uVar7 = extraout_x1;
                if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                  FUN_03f5c424();
                  uVar7 = extraout_x1_00;
                }
                uVar5 = System_DateTimeParse__ProcessTerminalState
                                  (0x15,uVar7,param_5,&local_44,param_4,lVar10);
                if ((uVar5 & 1) == 0) goto LAB_075a37bc;
              }
              System_DateTimeRawInfo__AddNumber(param_4,*(undefined4 *)(param_3 + 1),0);
              if ((param_1 & 0xfffffffe) == 0x12) {
                if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = System_DateTimeParse__HandleTimeZone(param_2,param_5);
                if ((uVar5 & 1) == 0) goto LAB_075a37bc;
              }
              goto LAB_075a39c0;
            }
LAB_075a39a8:
            System_DateTimeResult__SetBadDateTimeFailure(param_5,0);
            goto LAB_075a39c0;
          }
          if (uVar3 == 0x600) goto LAB_075a3a20;
        }
        else {
          if (uVar3 == 0x700) {
            if ((param_1 - 0xb < 5) && (*(char *)(param_4 + 0x28) != '\0')) {
LAB_075a3a20:
              uVar4 = 4;
            }
            else {
              uVar4 = 5;
            }
            goto LAB_075a3a24;
          }
          if (uVar3 == 0x800) {
            if (*param_6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar6 = *(long **)(*param_6 + 0x78);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = (**(code **)(*plVar6 + 0x348))
                              (plVar6,local_58._4_4_,*(undefined8 *)(*plVar6 + 0x350));
            *(undefined4 *)(param_3 + 1) = uVar4;
            *param_3 = 0x80000000009;
            goto LAB_075a39c0;
          }
        }
      }
      else if (uVar3 < 0xb01) {
        if ((uVar3 == 0x900) || (uVar3 == 0xa00)) {
LAB_075a3978:
          uVar4 = 9;
LAB_075a397c:
          *(undefined4 *)param_3 = uVar4;
          *(uint *)((long)param_3 + 4) = uVar3;
          goto LAB_075a39c0;
        }
        if (uVar3 == 0xb00) goto LAB_075a3810;
      }
      else if (uVar3 < 0xd01) {
        if ((uVar3 | 0x100) == 0xd00) goto LAB_075a3810;
      }
      else {
        if (uVar3 == 0xe00) {
          uVar4 = 0x13;
          goto LAB_075a3a24;
        }
        if (uVar3 == 0xf00) {
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
          if (lVar10 == 0) {
LAB_075a3a90:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar10 + 0x18) <= param_1) {
LAB_075a3a8c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar9 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_075a3a90;
          if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_075a3a8c;
          if (*(int *)(lVar9 + 0x30) == 0x14) {
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
              if (lVar10 == 0) goto LAB_075a3a90;
            }
            if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
            lVar10 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_075a3a90;
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_075a3a8c;
            if (0x14 < *(int *)(lVar10 + 0x2c)) {
              *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
              *(undefined2 *)((long)param_2 + 0x14) = local_5c[0];
              goto LAB_075a39e0;
            }
          }
          goto LAB_075a3a20;
        }
      }
    }
LAB_075a37b0:
    System_DateTimeResult__SetBadDateTimeFailure(param_5,0);
LAB_075a37bc:
    uVar7 = 0;
  }
  else {
    if (local_48 < 0xb) {
      if (local_48 == 7) {
        if (*(int *)(param_4 + 0x14) != -1) goto LAB_075a37b0;
        *(undefined4 *)param_3 = 0xb;
        *(uint *)(param_4 + 0x14) = local_58._4_4_;
      }
      else if (local_48 == 8) {
        if ((*(byte *)(param_5 + 0x25) & 1) != 0) goto LAB_075a37b0;
        *(undefined8 *)(param_5 + 0x28) = 0;
        *(undefined4 *)param_3 = 0xf;
        uVar3 = *(uint *)(param_5 + 0x24) | 0x300;
LAB_075a33e4:
        *(uint *)(param_5 + 0x24) = uVar3;
      }
      else if (local_48 == 9) goto LAB_075a3388;
    }
    else if (local_48 < 0xd) {
      if (local_48 == 0xb) {
        uVar1 = *(undefined2 *)((long)param_2 + 0x14);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Char__IsLetter(uVar1,0);
        if ((uVar5 & 1) == 0) {
          if (((*(short *)((long)param_2 + 0x14) == 0x2d) ||
              (*(short *)((long)param_2 + 0x14) == 0x2b)) && ((*(byte *)(param_5 + 0x25) & 1) == 0))
          {
            lVar10 = param_2[2];
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_DateTimeParse__ParseTimeZone(param_2,param_5 + 0x28);
            if ((uVar5 & 1) != 0) {
              uVar3 = *(uint *)(param_5 + 0x24) | 0x100;
              goto LAB_075a33e4;
            }
            *(int *)(param_2 + 2) = (int)lVar10;
          }
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_DateTimeParse__VerifyValidPunctuation(param_2);
          if ((uVar5 & 1) == 0) goto LAB_075a37b0;
          goto LAB_075a39c0;
        }
        local_74[0] = (undefined4)param_2[2];
        uVar7 = FUN_03f5c42c(DAT_09535420,local_74);
        System_DateTimeResult__SetFailure(param_5,6,DAT_09202db8,uVar7,0);
        goto LAB_075a37bc;
      }
      if (local_48 != 0xc) goto LAB_075a39c0;
      if ((int)local_58._4_4_ < 100) {
        *(uint *)(param_3 + 1) = local_58._4_4_;
        System_DateTimeRawInfo__AddNumber(param_4,local_58._4_4_,0);
        lVar10 = *param_6;
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System___DTString__GetSeparatorToken(param_2,lVar10,&local_58,local_5c,0);
        if (iVar2 < 0x301) {
          if (iVar2 != 0x200) {
            if (iVar2 != 0x300) goto LAB_075a37b0;
            goto LAB_075a36d8;
          }
          uVar4 = 1;
        }
        else {
          if (iVar2 == 0x600) {
LAB_075a36d8:
            uVar4 = 4;
            goto LAB_075a39bc;
          }
          if (iVar2 != 0xf00) goto LAB_075a37b0;
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
          if (lVar10 == 0) goto LAB_075a3a90;
          if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
          lVar9 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_075a3a90;
          if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_075a3a8c;
          if (*(int *)(lVar9 + 0x30) != 0x14) goto LAB_075a36d8;
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
            if (lVar10 == 0) goto LAB_075a3a90;
          }
          if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
          lVar10 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_075a3a90;
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_075a3a8c;
          if (*(int *)(lVar10 + 0x2c) < 0x15) goto LAB_075a36d8;
          *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
          uVar4 = 3;
LAB_075a38b0:
          *(undefined2 *)((long)param_2 + 0x14) = local_5c[0];
        }
      }
      else {
        if (*(int *)(param_4 + 0x10) != -1) goto LAB_075a37b0;
        lVar9 = *param_6;
        *(uint *)(param_4 + 0x10) = local_58._4_4_;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System___DTString__GetSeparatorToken(param_2,lVar9,&local_58,local_5c,0);
        if (iVar2 == 0xf00) {
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar10 = *(long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
          if (lVar10 == 0) goto LAB_075a3a90;
          if (*(uint *)(lVar10 + 0x18) <= param_1) goto LAB_075a3a8c;
          lVar10 = *(long *)(lVar10 + (long)(int)param_1 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_075a3a90;
          if (*(uint *)(lVar10 + 0x18) < 0xd) goto LAB_075a3a8c;
          if (*(int *)(lVar10 + 0x50) < 0x15) goto LAB_075a37b0;
LAB_075a38a0:
          *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
          uVar4 = 0xc;
          goto LAB_075a38b0;
        }
        if (iVar2 != 0x300) {
          if (iVar2 != 0x200) goto LAB_075a37b0;
          goto LAB_075a35ac;
        }
LAB_075a39b8:
        uVar4 = 0xc;
      }
LAB_075a39bc:
      *(undefined4 *)param_3 = uVar4;
    }
    else {
      if (local_48 == 0xd) {
        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095216cd == '\0') {
          FUN_03f5c2a4(&DAT_09184c68);
          DAT_095216cd = '\x01';
        }
        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(char **)(DAT_09184c68 + 0xb8) != '\0') {
LAB_075a3a58:
          thunk_FUN_03fc39d4(&DAT_091891d0);
          uVar7 = thunk_FUN_03f9944c();
          System_PlatformNotSupportedException___ctor(uVar7,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091c7ad8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar8);
        }
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_DateTimeParse__GetJapaneseCalendarDefaultInstance();
        *(undefined8 *)(param_5 + 0x30) = uVar7;
        if (*(int *)(DAT_09183570 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183570);
        }
        lVar10 = System_Globalization_DateTimeFormatInfo__GetJapaneseCalendarDTFI(0);
      }
      else {
        if (local_48 != 0xe) goto LAB_075a39c0;
        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095216cd == '\0') {
          FUN_03f5c2a4(&DAT_09184c68);
          DAT_095216cd = '\x01';
        }
        if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(char **)(DAT_09184c68 + 0xb8) != '\0') goto LAB_075a3a58;
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_DateTimeParse__GetTaiwanCalendarDefaultInstance();
        *(undefined8 *)(param_5 + 0x30) = uVar7;
        if (*(int *)(DAT_09183570 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183570);
        }
        lVar10 = System_Globalization_DateTimeFormatInfo__GetTaiwanCalendarDTFI(0);
      }
      *param_6 = lVar10;
      thunk_FUN_03f5d7b8(param_6,lVar10);
LAB_075a3388:
      if (*(int *)(param_5 + 0x20) == -1) goto LAB_075a37b0;
      *(undefined4 *)param_3 = 0x10;
      *(uint *)(param_5 + 0x20) = local_58._4_4_;
    }
LAB_075a39c0:
    uVar7 = 1;
  }
  return uVar7;
}

