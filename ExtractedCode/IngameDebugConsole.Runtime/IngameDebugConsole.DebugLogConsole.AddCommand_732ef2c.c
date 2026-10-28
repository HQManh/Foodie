// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$AddCommand
// address: 0x732ef2c
// body: available
// range: 0x732ef2c-0x732fa7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732f14c to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x732f974 to 0x57e1b20 FUN_057e1b20 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x732fa6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732fa70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732fa7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogConsole__AddCommand
               (long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  
  if ((DAT_0952061a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171268);
    FUN_03f5c2a4(&DAT_09182a50);
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a0ee0);
    FUN_03f5c2a4(&DAT_091abcf8);
    FUN_03f5c2a4(&DAT_091abd00);
    FUN_03f5c2a4(&DAT_091abd08);
    FUN_03f5c2a4(&DAT_091abd10);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09180370);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091f9f60);
    FUN_03f5c2a4(&DAT_091f6770);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091fecf8);
    FUN_03f5c2a4(&DAT_091fed00);
    FUN_03f5c2a4(&DAT_091fece8);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_0920a408);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_091f7d60);
    DAT_0952061a = 1;
  }
  uVar4 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar17 = &DAT_091fecf8;
LAB_0732f0c0:
    uVar5 = *puVar17;
LAB_0732f12c:
    UnityEngine_Debug__LogError(uVar5,0);
    return;
  }
  if ((param_1 != 0) && (lVar6 = System_String__Trim(param_1,0), lVar6 != 0)) {
    iVar1 = System_String__IndexOf(lVar6,0x20,0);
    if (-1 < iVar1) {
      uVar5 = System_String__Concat(DAT_091fed00,lVar6,0);
LAB_0732f108:
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      goto LAB_0732f12c;
    }
    if ((param_3 != (long *)0x0) &&
       ((lVar7 = (**(code **)(*param_3 + 600))(param_3,*(undefined8 *)(*param_3 + 0x260)),
        lVar7 != 0 || (lVar7 = FUN_03f5c394(DAT_09180370,0), lVar7 != 0)))) {
      plVar8 = (long *)FUN_03f5c394(DAT_09180748,*(undefined4 *)(lVar7 + 0x18));
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar2) {
        uVar20 = 0;
        lVar23 = 0x20;
        do {
          if (uVar2 <= uVar20) goto LAB_0732fa70;
          plVar9 = *(long **)(lVar7 + lVar23);
          if ((plVar9 == (long *)0x0) ||
             (lVar10 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0)),
             lVar10 == 0)) goto LAB_0732fa6c;
          uVar4 = System_Type__get_IsByRef(lVar10,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar17 = &DAT_091fece8;
            goto LAB_0732f0c0;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar20) goto LAB_0732fa70;
          plVar9 = *(long **)(lVar7 + lVar23);
          if (plVar9 == (long *)0x0) goto LAB_0732fa6c;
          plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183668);
          }
          lVar10 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 0x10);
          if (lVar10 == 0) goto LAB_0732fa6c;
          uVar4 = FUN_06fd8648(lVar10,plVar9,DAT_091a0ee0);
          uVar5 = DAT_09171268;
          if ((uVar4 & 1) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar11 = (long *)System_Type__GetTypeFromHandle(uVar5,0);
            if (plVar11 == (long *)0x0) goto LAB_0732fa6c;
            uVar4 = (**(code **)(*plVar11 + 0x2b8))
                              (plVar11,plVar9,*(undefined8 *)(*plVar11 + 0x2c0));
            if ((uVar4 & 1) == 0) {
              if (plVar9 == (long *)0x0) goto LAB_0732fa6c;
              uVar4 = (**(code **)(*plVar9 + 0x5d8))(plVar9,*(undefined8 *)(*plVar9 + 0x5e0));
              if ((uVar4 & 1) == 0) {
                if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = IngameDebugConsole_DebugLogConsole__IsSupportedArrayType(plVar9);
                if ((uVar4 & 1) == 0) {
                  lVar6 = FUN_03f5c394(DAT_09180318,5);
                  if (lVar6 == 0) goto LAB_0732fa6c;
                  FUN_039b0da0(lVar6,DAT_0920a408);
                  FUN_039af17c(lVar6,0,DAT_0920a408);
                  if (*(uint *)(lVar7 + 0x18) <= uVar20) goto LAB_0732fa70;
                  plVar8 = *(long **)(lVar7 + lVar23);
                  if (plVar8 == (long *)0x0) goto LAB_0732fa6c;
                  uVar5 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                  FUN_039b0da0(lVar6,uVar5);
                  FUN_039af17c(lVar6,1,uVar5);
                  FUN_039b0da0(lVar6,DAT_091f7d60);
                  FUN_039af17c(lVar6,2,DAT_091f7d60);
                  FUN_039b0da0(lVar6,plVar9);
                  FUN_039af17c(lVar6,3,plVar9);
                  FUN_039b0da0(lVar6,DAT_091f6770);
                  FUN_039af17c(lVar6,4,DAT_091f6770);
                  uVar5 = System_String__Concat(lVar6,0);
                  goto LAB_0732f108;
                }
              }
            }
          }
          if (plVar8 == (long *)0x0) goto LAB_0732fa6c;
          if ((plVar9 != (long *)0x0) &&
             (lVar10 = thunk_FUN_03f99350(plVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar20) goto LAB_0732fa70;
          *(long **)((long)plVar8 + lVar23) = plVar9;
          thunk_FUN_03f5d7b8((long)plVar8 + lVar23,plVar9);
          uVar2 = *(uint *)(lVar7 + 0x18);
          uVar20 = uVar20 + 1;
          lVar23 = lVar23 + 8;
        } while ((int)uVar20 < (int)uVar2);
      }
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = IngameDebugConsole_DebugLogConsole__FindCommandIndex(lVar6);
      uVar20 = uVar2;
      if ((int)uVar2 < 0) {
        uVar22 = ~uVar2;
      }
      else {
        do {
          uVar22 = uVar20;
          if ((int)uVar22 < 1) {
            uVar22 = 0;
            break;
          }
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar23 = **(long **)(DAT_09183668 + 0xb8);
          if (lVar23 == 0) goto LAB_0732fa6c;
          plVar9 = (long *)(*(long **)(DAT_09183668 + 0xb8))[6];
          lVar23 = FUN_057e0998(lVar23,uVar22 - 1,DAT_091abd10);
          if ((lVar23 == 0) || (plVar9 == (long *)0x0)) goto LAB_0732fa6c;
          iVar1 = (**(code **)(*plVar9 + 0x1a8))
                            (plVar9,*(undefined8 *)(lVar23 + 0x28),lVar6,3,
                             *(undefined8 *)(*plVar9 + 0x1b0));
          uVar20 = uVar22 - 1;
        } while (iVar1 == 0);
        do {
          uVar20 = uVar2;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar9 = *(long **)(DAT_09183668 + 0xb8);
          lVar23 = *plVar9;
          if (lVar23 == 0) goto LAB_0732fa6c;
          if (*(int *)(lVar23 + 0x18) + -1 <= (int)uVar20) break;
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
            plVar9 = *(long **)(DAT_09183668 + 0xb8);
            lVar23 = *plVar9;
            if (lVar23 == 0) goto LAB_0732fa6c;
          }
          plVar9 = (long *)plVar9[6];
          lVar23 = FUN_057e0998(lVar23,uVar20 + 1,DAT_091abd10);
          if ((lVar23 == 0) || (plVar9 == (long *)0x0)) goto LAB_0732fa6c;
          iVar1 = (**(code **)(*plVar9 + 0x1a8))
                            (plVar9,*(undefined8 *)(lVar23 + 0x28),lVar6,3,
                             *(undefined8 *)(*plVar9 + 0x1b0));
          uVar2 = uVar20 + 1;
        } while (iVar1 == 0);
        uVar2 = uVar22;
        if ((int)uVar22 <= (int)uVar20) {
          do {
            if (*(int *)(DAT_09183668 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((((**(long **)(DAT_09183668 + 0xb8) == 0) ||
                 (lVar23 = FUN_057e0998(**(long **)(DAT_09183668 + 0xb8),uVar2,DAT_091abd10),
                 lVar23 == 0)) || (*(long *)(lVar23 + 0x18) == 0)) || (plVar8 == (long *)0x0))
            goto LAB_0732fa6c;
            uVar4 = *(ulong *)(*(long *)(lVar23 + 0x18) + 0x18);
            uVar16 = *(uint *)(plVar8 + 3);
            uVar18 = (uint)uVar4;
            uVar19 = uVar2;
            if (((int)(uVar18 - uVar16) < 1) && (uVar22 = uVar2 + 1, uVar18 == uVar16)) {
              if ((int)uVar18 < 1) {
                uVar13 = 0;
              }
              else {
                uVar4 = uVar4 & 0xffffffff;
                lVar23 = 4;
                do {
                  lVar10 = lVar23;
                  uVar13 = lVar10 - 4;
                  if (uVar4 <= uVar13) goto LAB_0732fa70;
                  lVar23 = plVar8[lVar10];
                  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (((**(long **)(DAT_09183668 + 0xb8) == 0) ||
                      (lVar21 = FUN_057e0998(**(long **)(DAT_09183668 + 0xb8),uVar2,DAT_091abd10),
                      lVar21 == 0)) || (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0))
                  goto LAB_0732fa6c;
                  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_0732fa70;
                  uVar5 = *(undefined8 *)(lVar21 + lVar10 * 8);
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar12 = System_Type__op_Equality(lVar23,uVar5,0);
                  uVar16 = *(uint *)(plVar8 + 3);
                  uVar4 = (ulong)uVar16;
                  if ((uVar12 & 1) == 0) goto LAB_0732f5d4;
                  lVar23 = lVar10 + 1;
                } while (lVar10 + -3 < (long)(int)uVar16);
                uVar13 = lVar10 - 3;
              }
LAB_0732f5d4:
              if ((int)uVar16 <= (int)uVar13) {
                if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (**(long **)(DAT_09183668 + 0xb8) == 0) goto LAB_0732fa6c;
                uVar20 = uVar20 - 1;
                FUN_057e251c(**(long **)(DAT_09183668 + 0xb8),uVar2,DAT_091abd00);
                uVar19 = uVar2 - 1;
                uVar22 = uVar2;
              }
            }
            uVar2 = uVar19 + 1;
          } while ((int)(uVar19 + 1) <= (int)uVar20);
        }
      }
      plVar9 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar9,0x100,0);
      if ((plVar8 != (long *)0x0) &&
         (lVar23 = FUN_03f5c394(DAT_091805f8,(int)plVar8[3]), plVar9 != (long *)0x0)) {
        System_Text_StringBuilder__Append(plVar9,lVar6,0);
        if ((plVar8[3] != 0) &&
           (System_Text_StringBuilder__Append(plVar9,DAT_091f5a98,0), 0 < (int)plVar8[3])) {
          uVar4 = 0;
          plVar11 = plVar8 + 4;
          puVar17 = (undefined8 *)(param_5 + 0x20);
          plVar24 = (long *)(lVar7 + 0x20);
          puVar25 = (undefined8 *)(lVar23 + 0x20);
          do {
            iVar1 = System_Text_StringBuilder__get_Length(plVar9,0);
            lVar10 = System_Text_StringBuilder__Append(plVar9,DAT_092139f8,0);
            if (*(uint *)(plVar8 + 3) <= uVar4) {
LAB_0732fa70:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar21 = *plVar11;
            if (*(int *)(DAT_09183668 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = IngameDebugConsole_DebugLogConsole__GetTypeReadableName(lVar21);
            if ((lVar10 == 0) ||
               (lVar10 = System_Text_StringBuilder__Append(lVar10,uVar5,0), lVar10 == 0))
            goto LAB_0732fa6c;
            lVar10 = System_Text_StringBuilder__Append(lVar10,DAT_091f5a98,0);
            if ((param_5 == 0) || ((long)(int)*(uint *)(param_5 + 0x18) <= (long)uVar4)) {
LAB_0732f790:
              if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_0732fa70;
              plVar14 = (long *)*plVar24;
              if (plVar14 == (long *)0x0) goto LAB_0732fa6c;
              uVar5 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
            }
            else {
              if (*(uint *)(param_5 + 0x18) <= uVar4) goto LAB_0732fa70;
              uVar13 = System_String__IsNullOrEmpty(*puVar17,0);
              if ((uVar13 & 1) != 0) goto LAB_0732f790;
              if (*(uint *)(param_5 + 0x18) <= uVar4) goto LAB_0732fa70;
              uVar5 = *puVar17;
            }
            if ((lVar10 == 0) ||
               (lVar10 = System_Text_StringBuilder__Append(lVar10,uVar5,0), lVar10 == 0))
            goto LAB_0732fa6c;
            System_Text_StringBuilder__Append(lVar10,DAT_09214720,0);
            if ((long)uVar4 < (long)((int)plVar8[3] + -1)) {
              System_Text_StringBuilder__Append(plVar9,DAT_091f5a98,0);
            }
            iVar3 = System_Text_StringBuilder__get_Length(plVar9,0);
            uVar5 = System_Text_StringBuilder__ToString(plVar9,iVar1,iVar3 - iVar1,0);
            if (lVar23 == 0) goto LAB_0732fa6c;
            if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_0732fa70;
            *puVar25 = uVar5;
            thunk_FUN_03f5d7b8(puVar25,uVar5);
            uVar4 = uVar4 + 1;
            plVar11 = plVar11 + 1;
            puVar17 = puVar17 + 1;
            plVar24 = plVar24 + 1;
            puVar25 = puVar25 + 1;
          } while ((long)uVar4 < (long)(int)plVar8[3]);
        }
        uVar4 = System_String__IsNullOrEmpty(param_2,0);
        if ((uVar4 & 1) == 0) {
          lVar7 = System_Text_StringBuilder__Append(plVar9,DAT_091f9f60,0);
          if (lVar7 == 0) goto LAB_0732fa6c;
          System_Text_StringBuilder__Append(lVar7,param_2,0);
        }
        if (*(int *)(DAT_09183668 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = **(long **)(DAT_09183668 + 0xb8);
        uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        uVar15 = thunk_FUN_03f9944c(DAT_09182a50);
        IngameDebugConsole_ConsoleMethodInfo___ctor
                  (uVar15,param_3,plVar8,param_4,lVar6,uVar5,lVar23);
        if (lVar7 != 0) {
          FUN_057e1b20(lVar7,uVar22,uVar15,DAT_091abcf8);
          return;
        }
      }
    }
  }
LAB_0732fa6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

