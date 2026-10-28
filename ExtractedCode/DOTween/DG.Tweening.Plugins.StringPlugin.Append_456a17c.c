// rea decompile_all
// name: DG.Tweening.Plugins.StringPlugin$$Append
// address: 0x456a17c
// body: available
// range: 0x456a17c-0x456a873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456a86c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456a870 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_Plugins_StringPlugin__Append
          (undefined8 param_1,long param_2,int param_3,int param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  
  if ((DAT_09518863 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04d8);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091ab918);
    FUN_03f5c2a4(&DAT_091ab920);
    FUN_03f5c2a4(&DAT_091ab930);
    FUN_03f5c2a4(&DAT_091ab940);
    FUN_03f5c2a4(&DAT_091ab948);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_0918b3d8);
    FUN_03f5c2a4(&DAT_091fa1a0);
    FUN_03f5c2a4(&DAT_091f8038);
    DAT_09518863 = 1;
  }
  if ((param_5 & 1) == 0) {
    if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918b3d8 + 0xb8) != 0) {
      System_Text_StringBuilder__Append(**(long **)(DAT_0918b3d8 + 0xb8),param_2,param_3,param_4,0);
LAB_0456a840:
      return **(undefined8 **)(DAT_0918b3d8 + 0xb8);
    }
  }
  else {
    if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar19 = DAT_0918b3d8;
    lVar20 = *(long *)(*(long *)(DAT_0918b3d8 + 0xb8) + 8);
    if (lVar20 != 0) {
      *(undefined4 *)(lVar20 + 0x18) = 0;
      *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
      if (param_2 != 0) {
        iVar4 = *(int *)(param_2 + 0x10);
        if (param_4 < 1) {
          iVar22 = 0;
        }
        else {
          bVar9 = false;
          iVar22 = 0;
          iVar5 = iVar4 + -1;
          do {
            lVar19 = DAT_0918b3d8;
            if (iVar5 < iVar22) break;
            uVar13 = System_String__get_Chars(param_2,iVar22,0);
            if ((uVar13 & 0xffff) == 0x3c) {
              uVar13 = System_String__get_Chars(param_2,iVar22 + 1,0);
              bVar10 = (uVar13 & 0xffff) == 0x2f;
              bVar7 = iVar22 >= iVar5;
              bVar8 = !bVar10;
              bVar1 = bVar7 || bVar8;
              if (iVar22 < iVar5 && bVar10) {
                if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar19 = *(long *)(*(long *)(DAT_0918b3d8 + 0xb8) + 8);
                if (lVar19 == 0) goto LAB_0456a86c;
                FUN_0572d97c(lVar19,*(int *)(lVar19 + 0x18) + -1,DAT_091ab930);
              }
              else {
                if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar19 = DAT_091ab918;
                lVar20 = *(long *)(*(long *)(DAT_0918b3d8 + 0xb8) + 8);
                uVar3 = 99;
                if ((uVar13 & 0xffff) != 0x23) {
                  uVar3 = uVar13;
                }
                if (lVar20 == 0) goto LAB_0456a86c;
                lVar21 = *(long *)(lVar20 + 0x10);
                *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                if (lVar21 == 0) goto LAB_0456a86c;
                uVar13 = *(uint *)(lVar20 + 0x18);
                if (uVar13 < *(uint *)(lVar21 + 0x18)) {
                  *(uint *)(lVar20 + 0x18) = uVar13 + 1;
                  *(short *)(lVar21 + (long)(int)uVar13 * 2 + 0x20) = (short)uVar3;
                }
                else {
                  FUN_0572c118(lVar20,uVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar16 = System_String__Substring(param_2,iVar22,0);
              if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09189db0);
              }
              plVar17 = (long *)System_Text_RegularExpressions_Regex__Match(uVar16,DAT_091fa1a0,0);
              if (plVar17 == (long *)0x0) goto LAB_0456a86c;
              uVar18 = System_Text_RegularExpressions_Group__get_Success(plVar17,0);
              if ((uVar18 & 1) != 0) {
                if ((!bVar7 && !bVar8) && !bVar9) {
                  sVar11 = System_String__get_Chars(param_2,iVar22 + 1,0);
                  if (sVar11 == 99) {
                    lVar19 = FUN_03f5c394(DAT_0917fcc8,2);
                    if (lVar19 == 0) goto LAB_0456a86c;
                    if ((*(int *)(lVar19 + 0x18) == 0) ||
                       (*(undefined2 *)(lVar19 + 0x20) = 0x23, *(int *)(lVar19 + 0x18) == 1)) {
LAB_0456a870:
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    *(undefined2 *)(lVar19 + 0x22) = 99;
                  }
                  else {
                    lVar19 = FUN_03f5c394(DAT_0917fcc8,1);
                    if (lVar19 == 0) goto LAB_0456a86c;
                    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0456a870;
                    *(short *)(lVar19 + 0x20) = sVar11;
                  }
                  iVar2 = iVar22;
                  if (-1 < iVar22 + -1) {
                    do {
                      iVar6 = iVar2 + -1;
                      sVar11 = System_String__get_Chars(param_2,iVar6,0);
                      if ((sVar11 == 0x3c) &&
                         (sVar11 = System_String__get_Chars(param_2,iVar2,0), sVar11 != 0x2f)) {
                        uVar14 = System_String__get_Chars(param_2,iVar2 + 1,0);
                        iVar15 = FUN_04ee5694(lVar19,uVar14,DAT_091c04d8);
                        if (iVar15 != -1) {
                          if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          lVar19 = **(long **)(DAT_0918b3d8 + 0xb8);
                          iVar15 = System_String__IndexOf(param_2,0x3e,iVar6,0);
                          uVar16 = System_String__Substring(param_2,iVar6,(iVar15 - iVar2) + 2,0);
                          if (lVar19 == 0) goto LAB_0456a86c;
                          System_Text_StringBuilder__Insert(lVar19,0,uVar16,0);
                          break;
                        }
                      }
                      iVar2 = iVar6;
                    } while (0 < iVar6);
                  }
                }
                if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar19 = **(long **)(DAT_0918b3d8 + 0xb8);
                uVar16 = System_Text_RegularExpressions_Capture__get_Value(plVar17,0);
                if (lVar19 == 0) goto LAB_0456a86c;
                System_Text_StringBuilder__Append(lVar19,uVar16,0);
                lVar19 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
                if ((lVar19 == 0) ||
                   (lVar19 = System_Text_RegularExpressions_GroupCollection__GetGroup(lVar19,1,0),
                   lVar19 == 0)) goto LAB_0456a86c;
                iVar2 = *(int *)(lVar19 + 0x10) + 1;
                iVar22 = *(int *)(lVar19 + 0x10) + iVar22;
                param_4 = iVar2 + param_4;
                param_3 = iVar2 + param_3;
              }
            }
            else {
              bVar1 = bVar9;
              if (param_3 <= iVar22) {
                if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (**(long **)(DAT_0918b3d8 + 0xb8) == 0) goto LAB_0456a86c;
                System_Text_StringBuilder__Append(**(long **)(DAT_0918b3d8 + 0xb8),uVar13,0);
              }
            }
            bVar9 = bVar1;
            iVar22 = iVar22 + 1;
            lVar19 = DAT_0918b3d8;
          } while (iVar22 < param_4);
        }
        if (*(int *)(lVar19 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar19 = DAT_0918b3d8;
        }
        lVar20 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
        if (lVar20 != 0) {
          if ((*(int *)(lVar20 + 0x18) < 1) || (iVar4 = iVar4 + -1, iVar4 <= iVar22)) {
LAB_0456a834:
            if (*(int *)(lVar19 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            goto LAB_0456a840;
          }
          while( true ) {
            if (*(int *)(lVar19 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar19 = DAT_0918b3d8;
            }
            lVar20 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
            if (lVar20 == 0) break;
            if ((*(int *)(lVar20 + 0x18) < 1) || (iVar4 <= iVar22)) goto LAB_0456a834;
            uVar16 = System_String__Substring(param_2,iVar22,0);
            if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189db0);
            }
            lVar20 = System_Text_RegularExpressions_Regex__Match(uVar16,DAT_091f8038,0);
            if (lVar20 == 0) break;
            uVar18 = System_Text_RegularExpressions_Group__get_Success(lVar20,0);
            lVar19 = DAT_0918b3d8;
            if ((uVar18 & 1) == 0) goto LAB_0456a834;
            lVar19 = System_Text_RegularExpressions_Capture__get_Value(lVar20,0);
            if (lVar19 == 0) break;
            sVar11 = System_String__get_Chars(lVar19,2,0);
            if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918b3d8);
            }
            lVar19 = *(long *)(*(long *)(DAT_0918b3d8 + 0xb8) + 8);
            if (lVar19 == 0) break;
            sVar12 = FUN_0572be20(lVar19,*(int *)(lVar19 + 0x18) + -1,DAT_091ab948);
            if (sVar11 == sVar12) {
              if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar19 = **(long **)(DAT_0918b3d8 + 0xb8);
              uVar16 = System_Text_RegularExpressions_Capture__get_Value(lVar20,0);
              if (lVar19 == 0) break;
              System_Text_StringBuilder__Append(lVar19,uVar16,0);
              lVar19 = *(long *)(*(long *)(DAT_0918b3d8 + 0xb8) + 8);
              if (lVar19 == 0) break;
              FUN_0572d97c(lVar19,*(int *)(lVar19 + 0x18) + -1,DAT_091ab930);
            }
            lVar19 = System_Text_RegularExpressions_Capture__get_Value(lVar20,0);
            if (lVar19 == 0) break;
            iVar22 = *(int *)(lVar19 + 0x10) + iVar22;
            lVar19 = DAT_0918b3d8;
          }
        }
      }
    }
  }
LAB_0456a86c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

