// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$GetCommandSuggestions
// address: 0x733384c
// body: available
// range: 0x733384c-0x73340bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73340b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07333e14) */

void IngameDebugConsole_DebugLogConsole__GetCommandSuggestions
               (long param_1,long param_2,long param_3,long *param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  if ((DAT_09520623 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091abce8);
    FUN_03f5c2a4(&DAT_091abd08);
    FUN_03f5c2a4(&DAT_091abd10);
    DAT_09520623 = 1;
  }
  *param_5 = -1;
  if (param_1 == 0) goto LAB_073340b8;
  if (*(int *)(param_1 + 0x10) < 1) {
    bVar1 = false;
LAB_07333c28:
    *param_4 = **(long **)(DAT_09535468 + 0xb8);
    thunk_FUN_03f5d7b8(param_4);
  }
  else {
    uVar10 = 0;
    bVar3 = false;
    bVar1 = false;
    do {
      uVar5 = System_String__get_Chars(param_1,uVar10,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar11 = System_Char__IsWhiteSpace(uVar5,0);
      if ((uVar11 & 1) == 0) {
        uVar5 = System_String__get_Chars(param_1,uVar10,0);
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183668);
        }
        iVar6 = IngameDebugConsole_DebugLogConsole__IndexOfDelimiterGroup(uVar5);
        if (iVar6 < 0) {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = IngameDebugConsole_DebugLogConsole__IndexOfChar(param_1,0x20,uVar10 + 1);
          if (!bVar3) {
            bVar1 = (int)uVar7 < *(int *)(param_1 + 0x10);
            sVar4 = System_String__get_Chars(param_1,uVar7 - 1,0);
            uVar9 = uVar7 - 1;
            if (sVar4 != 0x2c) {
              uVar9 = uVar7;
            }
            iVar6 = uVar9 - uVar10;
            if (((*param_4 != 0) && (uVar9 != uVar10)) && (*(int *)(*param_4 + 0x10) == iVar6)) {
              if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              plVar12 = *(long **)(*(long *)(DAT_09183668 + 0xb8) + 0x30);
              if (plVar12 == (long *)0x0) goto LAB_073340b8;
              uVar9 = (**(code **)(*plVar12 + 0x218))
                                (plVar12,param_1,*param_4,uVar10,iVar6,3,
                                 *(undefined8 *)(*plVar12 + 0x220));
              if (uVar9 == uVar10) goto LAB_07333b94;
            }
            lVar13 = System_String__Substring(param_1,uVar10,iVar6,0);
            *param_4 = lVar13;
            thunk_FUN_03f5d7b8(param_4,lVar13);
          }
LAB_07333b94:
          lVar13 = DAT_091adc88;
          if (param_3 == 0) goto LAB_073340b8;
          lVar15 = *(long *)(param_3 + 0x10);
          *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_073340b8;
          uVar10 = *(uint *)(param_3 + 0x18);
          if (*(uint *)(lVar15 + 0x18) <= uVar10) {
            lVar13 = *(long *)(lVar13 + 0x20);
            uVar10 = uVar7;
            goto LAB_07333bf4;
          }
          *(uint *)(param_3 + 0x18) = uVar10 + 1;
          *(uint *)(lVar15 + (long)(int)uVar10 * 4 + 0x20) = uVar7;
          uVar10 = uVar7;
        }
        else {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = uVar10 + 1;
          uVar7 = IngameDebugConsole_DebugLogConsole__IndexOfDelimiterGroupEnd(param_1,iVar6,iVar2);
          if (!bVar3) {
            bVar1 = (int)uVar7 < *(int *)(param_1 + 0x10);
            iVar6 = uVar7 + ~uVar10;
            if (((iVar6 != 0) && (*param_4 != 0)) && (*(int *)(*param_4 + 0x10) == iVar6)) {
              if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              plVar12 = *(long **)(*(long *)(DAT_09183668 + 0xb8) + 0x30);
              if (plVar12 == (long *)0x0) goto LAB_073340b8;
              iVar8 = (**(code **)(*plVar12 + 0x218))
                                (plVar12,param_1,*param_4,iVar2,iVar6,3,
                                 *(undefined8 *)(*plVar12 + 0x220));
              if (iVar8 == iVar2) goto LAB_07333a3c;
            }
            lVar13 = System_String__Substring(param_1,iVar2,iVar6,0);
            *param_4 = lVar13;
            thunk_FUN_03f5d7b8(param_4,lVar13);
          }
LAB_07333a3c:
          if (((int)uVar7 < *(int *)(param_1 + 0x10) + -1) &&
             (sVar4 = System_String__get_Chars(param_1,uVar7 + 1,0), sVar4 == 0x2c)) {
            uVar7 = uVar7 + 1;
          }
          lVar13 = DAT_091adc88;
          if (param_3 == 0) goto LAB_073340b8;
          lVar15 = *(long *)(param_3 + 0x10);
          *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_073340b8;
          uVar10 = *(uint *)(param_3 + 0x18);
          if (uVar10 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(param_3 + 0x18) = uVar10 + 1;
            *(uint *)(lVar15 + (long)(int)uVar10 * 4 + 0x20) = uVar7 + 1;
            uVar10 = uVar7;
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x20);
            uVar10 = uVar7 + 1;
LAB_07333bf4:
            FUN_057971a8(param_3,uVar10,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x70));
            uVar10 = uVar7;
          }
        }
        bVar3 = true;
        *param_5 = *param_5 + 1;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(param_1 + 0x10));
    if (!bVar3) goto LAB_07333c28;
  }
  uVar11 = System_String__IsNullOrEmpty(*param_4,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  lVar13 = *param_4;
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = IngameDebugConsole_DebugLogConsole__FindCommandIndex(lVar13);
  uVar10 = uVar10 ^ (int)uVar10 >> 0x1f;
  if (bVar1) {
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = *(long **)(DAT_09183668 + 0xb8);
    lVar13 = *plVar12;
    if (lVar13 == 0) {
LAB_073340b8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((int)uVar10 < *(int *)(lVar13 + 0x18)) {
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar12 = *(long **)(DAT_09183668 + 0xb8);
        lVar13 = *plVar12;
        if (lVar13 == 0) goto LAB_073340b8;
      }
      plVar12 = (long *)plVar12[6];
      lVar13 = FUN_057e0998(lVar13,uVar10,DAT_091abd10);
      if ((lVar13 == 0) || (plVar12 == (long *)0x0)) goto LAB_073340b8;
      iVar6 = (**(code **)(*plVar12 + 0x1a8))
                        (plVar12,*(undefined8 *)(lVar13 + 0x28),*param_4,3,
                         *(undefined8 *)(*plVar12 + 0x1b0));
      uVar7 = uVar10;
      if (iVar6 == 0) {
        do {
          uVar9 = uVar7;
          if ((int)uVar9 < 1) break;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = **(long **)(DAT_09183668 + 0xb8);
          if (lVar13 == 0) goto LAB_073340b8;
          plVar12 = (long *)(*(long **)(DAT_09183668 + 0xb8))[6];
          lVar13 = FUN_057e0998(lVar13,uVar9 - 1,DAT_091abd10);
          if ((lVar13 == 0) || (plVar12 == (long *)0x0)) goto LAB_073340b8;
          iVar6 = (**(code **)(*plVar12 + 0x1a8))
                            (plVar12,*(undefined8 *)(lVar13 + 0x28),*param_4,3,
                             *(undefined8 *)(*plVar12 + 0x1b0));
          uVar7 = uVar9 - 1;
        } while (iVar6 == 0);
        do {
          uVar7 = uVar10;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar12 = *(long **)(DAT_09183668 + 0xb8);
          lVar13 = *plVar12;
          if (lVar13 == 0) goto LAB_073340b8;
          if (*(int *)(lVar13 + 0x18) + -1 <= (int)uVar7) break;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
            plVar12 = *(long **)(DAT_09183668 + 0xb8);
            lVar13 = *plVar12;
            if (lVar13 == 0) goto LAB_073340b8;
          }
          plVar12 = (long *)plVar12[6];
          lVar13 = FUN_057e0998(lVar13,uVar7 + 1,DAT_091abd10);
          if ((lVar13 == 0) || (plVar12 == (long *)0x0)) goto LAB_073340b8;
          iVar6 = (**(code **)(*plVar12 + 0x1a8))
                            (plVar12,*(undefined8 *)(lVar13 + 0x28),*param_4,3,
                             *(undefined8 *)(*plVar12 + 0x1b0));
          uVar10 = uVar7 + 1;
        } while (iVar6 == 0);
        goto joined_r0x07333fa8;
      }
    }
  }
  else {
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar12 = *(long **)(DAT_09183668 + 0xb8);
    lVar13 = *plVar12;
    if (lVar13 == 0) goto LAB_073340b8;
    if ((int)uVar10 < *(int *)(lVar13 + 0x18)) {
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar12 = *(long **)(DAT_09183668 + 0xb8);
        lVar13 = *plVar12;
        if (lVar13 == 0) goto LAB_073340b8;
      }
      plVar12 = (long *)plVar12[6];
      lVar13 = FUN_057e0998(lVar13,uVar10,DAT_091abd10);
      if ((lVar13 == 0) || (plVar12 == (long *)0x0)) goto LAB_073340b8;
      uVar11 = (**(code **)(*plVar12 + 0x1c8))
                         (plVar12,*(undefined8 *)(lVar13 + 0x28),*param_4,3,
                          *(undefined8 *)(*plVar12 + 0x1d0));
      uVar7 = uVar10;
      if ((uVar11 & 1) != 0) {
        do {
          uVar9 = uVar7;
          if ((int)uVar9 < 1) break;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = **(long **)(DAT_09183668 + 0xb8);
          if (lVar13 == 0) goto LAB_073340b8;
          plVar12 = (long *)(*(long **)(DAT_09183668 + 0xb8))[6];
          lVar13 = FUN_057e0998(lVar13,uVar9 - 1,DAT_091abd10);
          if ((lVar13 == 0) || (plVar12 == (long *)0x0)) goto LAB_073340b8;
          uVar11 = (**(code **)(*plVar12 + 0x1c8))
                             (plVar12,*(undefined8 *)(lVar13 + 0x28),*param_4,3,
                              *(undefined8 *)(*plVar12 + 0x1d0));
          uVar7 = uVar9 - 1;
        } while ((uVar11 & 1) != 0);
        do {
          uVar7 = uVar10;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar12 = *(long **)(DAT_09183668 + 0xb8);
          lVar13 = *plVar12;
          if (lVar13 == 0) goto LAB_073340b8;
          if (*(int *)(lVar13 + 0x18) + -1 <= (int)uVar7) break;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
            plVar12 = *(long **)(DAT_09183668 + 0xb8);
            lVar13 = *plVar12;
            if (lVar13 == 0) goto LAB_073340b8;
          }
          plVar12 = (long *)plVar12[6];
          lVar13 = FUN_057e0998(lVar13,uVar7 + 1,DAT_091abd10);
          if ((lVar13 == 0) || (plVar12 == (long *)0x0)) goto LAB_073340b8;
          uVar11 = (**(code **)(*plVar12 + 0x1c8))
                             (plVar12,*(undefined8 *)(lVar13 + 0x28),*param_4,3,
                              *(undefined8 *)(*plVar12 + 0x1d0));
          uVar10 = uVar7 + 1;
        } while ((uVar11 & 1) != 0);
        goto joined_r0x07333fa8;
      }
    }
  }
  uVar7 = 0xffffffff;
  uVar9 = uVar10;
joined_r0x07333fa8:
  do {
    if ((int)uVar7 < (int)uVar9) {
      return;
    }
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (((**(long **)(DAT_09183668 + 0xb8) == 0) ||
        (lVar13 = FUN_057e0998(**(long **)(DAT_09183668 + 0xb8),uVar9,DAT_091abd10), lVar13 == 0))
       || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_073340b8;
    if (*param_5 <= *(int *)(*(long *)(lVar13 + 0x18) + 0x18)) {
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((**(long **)(DAT_09183668 + 0xb8) == 0) ||
         (uVar14 = FUN_057e0998(**(long **)(DAT_09183668 + 0xb8),uVar9,DAT_091abd10),
         lVar13 = DAT_091abce8, param_2 == 0)) goto LAB_073340b8;
      lVar15 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_073340b8;
      uVar10 = *(uint *)(param_2 + 0x18);
      if (uVar10 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar10 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar10 * 8 + 0x20) = uVar14;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(param_2,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

