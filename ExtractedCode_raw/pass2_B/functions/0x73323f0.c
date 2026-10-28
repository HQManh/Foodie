// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$ExecuteCommand
// address: 0x73323f0
// body: available
// range: 0x73323f0-0x733298f inclusive
// range: 0x7332994-0x7332997 inclusive
// range: 0x733299c-0x733299f inclusive
// range: 0x73329a4-0x73329a7 inclusive
// range: 0x73329ac-0x73329af inclusive
// range: 0x73329b4-0x73329bf inclusive
// range: 0x7332a7c-0x7333173 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733298c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7332994 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733299c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73329a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73329ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73329bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7332f28 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73330f4 to 0x732fde0 IngameDebugConsole.DebugLogManager$$AdjustLatestPendingLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7333170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogConsole__ExecuteCommand(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  long local_68;
  
  if ((DAT_09520620 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091abce8);
    FUN_03f5c2a4(&DAT_091abcf0);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091abd00);
    FUN_03f5c2a4(&DAT_091abd08);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091abd10);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_092010b8);
    FUN_03f5c2a4(&DAT_091f5888);
    FUN_03f5c2a4(&DAT_092010c0);
    FUN_03f5c2a4(&DAT_091f7320);
    FUN_03f5c2a4(&DAT_091f7b88);
    FUN_03f5c2a4(&DAT_092010a0);
    FUN_03f5c2a4(&DAT_091f6a80);
    FUN_03f5c2a4(&DAT_091f74d0);
    FUN_03f5c2a4(&DAT_091f68f8);
    FUN_03f5c2a4(&DAT_0920bfa0);
    FUN_03f5c2a4(&DAT_092010b0);
    FUN_03f5c2a4(&DAT_0920bfa8);
    DAT_09520620 = 1;
  }
  local_68 = 0;
  if (param_1 == 0) {
    return;
  }
  lVar5 = System_String__Trim(param_1,0);
  if (lVar5 == 0) goto LAB_07333170;
  if (*(int *)(lVar5 + 0x10) == 0) {
    return;
  }
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 0x20);
  if (lVar11 == 0) goto LAB_07333170;
  iVar3 = *(int *)(lVar11 + 0x18);
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (0 < iVar3) {
    System_Array__Clear(*(undefined8 *)(lVar11 + 0x10),0,iVar3,0);
    lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 0x20);
  }
  IngameDebugConsole_DebugLogConsole__FetchArgumentsFromCommand(lVar5,lVar11);
  lVar5 = *(long *)(DAT_09183668 + 0xb8);
  lVar11 = *(long *)(lVar5 + 8);
  if (lVar11 == 0) goto LAB_07333170;
  iVar3 = *(int *)(lVar11 + 0x18);
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (0 < iVar3) {
    System_Array__Clear(*(undefined8 *)(lVar11 + 0x10),0,iVar3,0);
    lVar5 = *(long *)(DAT_09183668 + 0xb8);
  }
  if (*(long *)(lVar5 + 0x20) == 0) goto LAB_07333170;
  FUN_057e0998(*(long *)(lVar5 + 0x20),0,DAT_091b0610);
  iVar3 = IngameDebugConsole_DebugLogConsole__FindCommandIndex();
  if (iVar3 < 0) {
LAB_07332780:
    bVar2 = false;
  }
  else {
    if (*(int *)(DAT_09183668 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 0x20);
    if (lVar5 == 0) goto LAB_07333170;
    uVar6 = FUN_057e0998(lVar5,0,DAT_091b0610);
    iVar14 = iVar3;
    do {
      iVar15 = iVar14;
      if (iVar15 < 1) break;
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = **(long **)(DAT_09183668 + 0xb8);
      if (lVar5 == 0) goto LAB_07333170;
      plVar16 = (long *)(*(long **)(DAT_09183668 + 0xb8))[6];
      lVar5 = FUN_057e0998(lVar5,iVar15 + -1,DAT_091abd10);
      if ((lVar5 == 0) || (plVar16 == (long *)0x0)) goto LAB_07333170;
      iVar4 = (**(code **)(*plVar16 + 0x1a8))
                        (plVar16,*(undefined8 *)(lVar5 + 0x28),uVar6,3,
                         *(undefined8 *)(*plVar16 + 0x1b0));
      iVar14 = iVar15 + -1;
    } while (iVar4 == 0);
    do {
      iVar14 = iVar3;
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar16 = *(long **)(DAT_09183668 + 0xb8);
      lVar5 = *plVar16;
      if (lVar5 == 0) goto LAB_07333170;
      if (*(int *)(lVar5 + 0x18) + -1 <= iVar14) break;
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar16 = *(long **)(DAT_09183668 + 0xb8);
        lVar5 = *plVar16;
        if (lVar5 == 0) goto LAB_07333170;
      }
      plVar16 = (long *)plVar16[6];
      lVar5 = FUN_057e0998(lVar5,iVar14 + 1,DAT_091abd10);
      if ((lVar5 == 0) || (plVar16 == (long *)0x0)) goto LAB_07333170;
      iVar4 = (**(code **)(*plVar16 + 0x1a8))
                        (plVar16,*(undefined8 *)(lVar5 + 0x28),uVar6,3,
                         *(undefined8 *)(*plVar16 + 0x1b0));
      iVar3 = iVar14 + 1;
    } while (iVar4 == 0);
    if (iVar14 < iVar15) goto LAB_07332780;
    bVar2 = false;
    do {
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((**(long **)(DAT_09183668 + 0xb8) == 0) ||
         (lVar5 = FUN_057e0998(**(long **)(DAT_09183668 + 0xb8),iVar15,DAT_091abd10), lVar5 == 0))
      goto LAB_07333170;
      uVar10 = IngameDebugConsole_ConsoleMethodInfo__IsValid();
      if ((uVar10 & 1) == 0) {
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_09183668 + 0xb8) == 0) goto LAB_07333170;
        FUN_057e251c(**(long **)(DAT_09183668 + 0xb8),iVar15,DAT_091abd00);
        iVar14 = iVar14 + -1;
      }
      else {
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (((**(long **)(DAT_09183668 + 0xb8) == 0) ||
            (lVar5 = FUN_057e0998(**(long **)(DAT_09183668 + 0xb8),iVar15,DAT_091abd10), lVar5 == 0)
            ) || (*(long *)(lVar5 + 0x18) == 0)) goto LAB_07333170;
        plVar16 = *(long **)(DAT_09183668 + 0xb8);
        if (plVar16[4] == 0) goto LAB_07333170;
        if (*(int *)(plVar16[4] + 0x18) + -1 == *(int *)(*(long *)(lVar5 + 0x18) + 0x18)) {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
            plVar16 = *(long **)(DAT_09183668 + 0xb8);
          }
          if (*plVar16 == 0) goto LAB_07333170;
          lVar11 = plVar16[1];
          uVar6 = FUN_057e0998(*plVar16,iVar15,DAT_091abd10);
          lVar5 = DAT_091abce8;
          if (lVar11 == 0) goto LAB_07333170;
          lVar9 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_07333170;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar11,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          bVar2 = true;
        }
        iVar15 = iVar15 + 1;
      }
    } while (iVar15 <= iVar14);
  }
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(DAT_09183668 + 0xb8);
  if (*(long *)(lVar5 + 8) != 0) {
    if (*(int *)(*(long *)(lVar5 + 8) + 0x18) == 0) {
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = *(long *)(DAT_09183668 + 0xb8);
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        lVar5 = FUN_057e0998(*(long *)(lVar5 + 0x20),0,DAT_091b0610);
        IngameDebugConsole_DebugLogConsole__FindCommands
                  (lVar5,bVar2 ^ 1,*(undefined8 *)(*(long *)(DAT_09183668 + 0xb8) + 8));
        lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x18) == 0) {
            uVar6 = System_String__Concat(DAT_092010b0,lVar5,DAT_091f7320,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogWarning(uVar6,0);
            return;
          }
          if (lVar5 != 0) {
            iVar14 = 0;
            iVar3 = *(int *)(lVar5 + 0x10) + 0x4b;
            while( true ) {
              if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
              if (lVar11 == 0) goto LAB_07333170;
              if (*(int *)(lVar11 + 0x18) <= iVar14) break;
              if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
                if (lVar11 == 0) goto LAB_07333170;
              }
              lVar11 = FUN_057e0998(lVar11,iVar14,DAT_091abd10);
              if ((lVar11 == 0) || (*(long *)(lVar11 + 0x30) == 0)) goto LAB_07333170;
              iVar14 = iVar14 + 1;
              iVar3 = iVar3 + *(int *)(*(long *)(lVar11 + 0x30) + 0x10) + 7;
            }
            plVar16 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
            System_Text_StringBuilder___ctor(plVar16,iVar3,0);
            if (bVar2) {
              if (((plVar16 != (long *)0x0) &&
                  (lVar11 = System_Text_StringBuilder__Append(plVar16,DAT_092010a0,0), lVar11 != 0))
                 && (lVar5 = System_Text_StringBuilder__Append(lVar11,lVar5,0), lVar5 != 0)) {
                lVar5 = System_Text_StringBuilder__Append(lVar5,DAT_091f74d0,0);
                if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09183668);
                }
                lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 0x20);
                if (((lVar11 != 0) && (lVar5 != 0)) &&
                   (lVar5 = System_Text_StringBuilder__Append(lVar5,*(int *)(lVar11 + 0x18) + -1,0),
                   lVar5 != 0)) {
                  puVar13 = &DAT_091f68f8;
                  goto LAB_07332f64;
                }
              }
            }
            else if (((plVar16 != (long *)0x0) &&
                     (lVar11 = System_Text_StringBuilder__Append(plVar16,DAT_092010b0,0),
                     lVar11 != 0)) &&
                    (lVar5 = System_Text_StringBuilder__Append(lVar11,lVar5,0), lVar5 != 0)) {
              puVar13 = &DAT_091f7b88;
LAB_07332f64:
              System_Text_StringBuilder__Append(lVar5,*puVar13,0);
              iVar3 = 0;
              goto LAB_07332f7c;
            }
          }
        }
      }
    }
    else {
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = *(long *)(DAT_09183668 + 0xb8);
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        plVar16 = (long *)FUN_03f5c394(DAT_09180318,*(int *)(*(long *)(lVar5 + 0x20) + 0x18) + -1);
        iVar3 = 0;
        uVar6 = 0;
        lVar5 = 0;
        while( true ) {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_07333170;
          if (*(int *)(lVar11 + 0x18) <= iVar3 || lVar5 != 0) break;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
            if (lVar11 == 0) goto LAB_07333170;
          }
          lVar5 = FUN_057e0998(lVar11,iVar3,DAT_091abd10);
          if ((lVar5 == 0) || (lVar11 = *(long *)(lVar5 + 0x18), lVar11 == 0)) goto LAB_07333170;
          bVar2 = true;
          uVar10 = 0;
          while ((bVar2 && ((long)uVar10 < (long)*(int *)(lVar11 + 0x18)))) {
            if (*(int *)(DAT_09183668 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 0x20);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = FUN_057e0998(lVar11,uVar10 + 1 & 0xffffffff,DAT_091b0610);
            lVar11 = *(long *)(lVar5 + 0x18);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar17 = *(undefined8 *)(lVar11 + uVar10 * 8 + 0x20);
            uVar8 = IngameDebugConsole_DebugLogConsole__ParseArgument(uVar7,uVar17,&local_68);
            lVar11 = local_68;
            if ((uVar8 & 1) == 0) {
              if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = IngameDebugConsole_DebugLogConsole__GetTypeReadableName(uVar17);
              uVar6 = System_String__Concat(DAT_092010b8,uVar7,DAT_091f6a80,uVar6,0);
              bVar2 = false;
            }
            else {
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((local_68 != 0) &&
                 (lVar9 = thunk_FUN_03f99350(local_68,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0)
                 ) {
                uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar6,0);
              }
              if (*(uint *)(plVar16 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar16[uVar10 + 4] = lVar11;
              thunk_FUN_03f5d7b8(plVar16 + uVar10 + 4,lVar11);
              bVar2 = true;
            }
            lVar11 = *(long *)(lVar5 + 0x18);
            uVar10 = uVar10 + 1;
            if (lVar11 == 0) goto LAB_07333170;
          }
          if (!bVar2) {
            lVar5 = 0;
          }
          iVar3 = iVar3 + 1;
        }
        if (lVar5 == 0) {
          uVar10 = System_String__IsNullOrEmpty(uVar6,0);
          uVar7 = DAT_092010c0;
          if ((uVar10 & 1) == 0) {
            uVar7 = uVar6;
          }
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(uVar7,0);
          return;
        }
        if (*(long *)(lVar5 + 0x10) != 0) {
          plVar16 = (long *)System_Reflection_MethodBase__Invoke
                                      (*(long *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x20),plVar16
                                       ,0);
          plVar12 = *(long **)(lVar5 + 0x10);
          if (plVar12 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar12 + 0x3f8))(plVar12,*(undefined8 *)(*plVar12 + 0x400));
            lVar5 = DAT_095353f8;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar7 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
            uVar10 = System_Type__op_Inequality(uVar6,uVar7,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
            if ((plVar16 == (long *)0x0) ||
               (uVar10 = (**(code **)(*plVar16 + 0x138))
                                   (plVar16,0,*(undefined8 *)(*plVar16 + 0x140)), (uVar10 & 1) != 0)
               ) {
              uVar6 = DAT_0920bfa8;
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
                uVar6 = DAT_0920bfa8;
              }
            }
            else {
              uVar6 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
              uVar6 = System_String__Concat(DAT_0920bfa0,uVar6,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
            }
            UnityEngine_Debug__Log(uVar6,0);
            return;
          }
        }
      }
    }
  }
LAB_07333170:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_07332f7c:
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_07333170;
  if (*(int *)(lVar5 + 0x18) <= iVar3) {
    uVar6 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar6,0);
    if (DAT_0952068d == '\0') {
      FUN_03f5c2a4(&DAT_09183690);
      DAT_0952068d = '\x01';
    }
    uVar6 = **(undefined8 **)(DAT_09183690 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (DAT_0952068d == '\0') {
      FUN_03f5c2a4(&DAT_09183690);
      DAT_0952068d = '\x01';
    }
    if (**(long **)(DAT_09183690 + 0xb8) != 0) {
      IngameDebugConsole_DebugLogManager__AdjustLatestPendingLog
                (**(long **)(DAT_09183690 + 0xb8),1,1);
      return;
    }
    goto LAB_07333170;
  }
  lVar5 = System_Text_StringBuilder__Append(plVar16,DAT_091f5888,0);
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183668);
  }
  lVar11 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 8);
  if (((lVar11 == 0) || (lVar11 = FUN_057e0998(lVar11,iVar3,DAT_091abd10), lVar11 == 0)) ||
     (lVar5 == 0)) goto LAB_07333170;
  System_Text_StringBuilder__Append(lVar5,*(undefined8 *)(lVar11 + 0x30),0);
  iVar3 = iVar3 + 1;
  goto LAB_07332f7c;
}

