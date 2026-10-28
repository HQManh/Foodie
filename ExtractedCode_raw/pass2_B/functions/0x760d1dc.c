// rea decompile_all
// name: System.ParameterizedStrings$$EvaluateInternal
// address: 0x760d1dc
// body: available
// range: 0x760d1dc-0x760dabb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760da6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760dab4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760dab8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_ParameterizedStrings__EvaluateInternal
               (long param_1,int *param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined1 auVar17 [16];
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  
  if ((DAT_0952201d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_0952201d = 1;
  }
  local_78 = 0;
  if (param_1 != 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    plVar11 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar11,uVar10,0);
    iVar7 = *param_2;
    if (iVar7 < *(int *)(param_1 + 0x10)) {
      bVar1 = false;
LAB_0760d280:
      sVar3 = System_String__get_Chars(param_1,iVar7,0);
      if (sVar3 != 0x25) {
        uVar12 = System_String__get_Chars(param_1,*param_2,0);
        if (plVar11 != (long *)0x0) {
          uVar12 = uVar12 & 0xffffffff;
LAB_0760d30c:
          System_Text_StringBuilder__Append(plVar11,uVar12,0);
          bVar2 = bVar1;
          goto switchD_0760d2e0_caseD_3f;
        }
        goto LAB_0760da6c;
      }
      iVar7 = *param_2 + 1;
      *param_2 = iVar7;
      uVar4 = System_String__get_Chars(param_1,iVar7,0);
      if (0x58 < uVar4) {
        switch(uVar4) {
        case 0x5e:
        case 0x6d:
        case 0x7c:
          goto switchD_0760d2e0_caseD_26;
        default:
          goto switchD_0760d2e0_caseD_22;
        case 99:
          if ((param_4 != 0) &&
             (uVar12 = System_ParameterizedStrings_LowLevelStack__Pop(param_4),
             plVar11 != (long *)0x0)) goto LAB_0760d30c;
          goto LAB_0760da6c;
        case 100:
          if ((param_4 != 0) &&
             (uVar15 = System_ParameterizedStrings_LowLevelStack__Pop(param_4),
             plVar11 != (long *)0x0)) {
            System_Text_StringBuilder__Append(plVar11,uVar15,0);
            bVar2 = bVar1;
            goto switchD_0760d2e0_caseD_3f;
          }
          goto LAB_0760da6c;
        case 0x65:
          goto switchD_0760d2e0_caseD_3b;
        case 0x67:
          iVar7 = *param_2;
          *param_2 = iVar7 + 1;
          uVar15 = System_String__get_Chars(param_1,iVar7 + 1,0);
          lVar13 = System_ParameterizedStrings__GetDynamicOrStaticVariables
                             (uVar15,param_5,param_6,&local_78);
          if (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x18) <= (uint)local_78) goto LAB_0760dab8;
            if (param_4 != 0) {
              lVar13 = lVar13 + (long)(int)(uint)local_78 * 0x10;
              goto LAB_0760d624;
            }
          }
          goto LAB_0760da6c;
        case 0x69:
          if (param_3 != 0) {
            if (*(int *)(param_3 + 0x18) == 0) {
LAB_0760dab8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uStack_68 = 0;
            local_70 = (ulong)(*(int *)(param_3 + 0x20) + 1);
            thunk_FUN_03f5d7b8((ulong)&local_70 | 8,0);
            if (*(int *)(param_3 + 0x18) == 0) goto LAB_0760dab8;
            *(undefined8 *)(param_3 + 0x28) = uStack_68;
            *(ulong *)(param_3 + 0x20) = local_70;
            thunk_FUN_03f5d7b8(param_3 + 0x28,0);
            if ((*(uint *)(param_3 + 0x18) & 0xfffffffe) == 0) goto LAB_0760dab8;
            uStack_68 = 0;
            local_70 = (ulong)(*(int *)(param_3 + 0x30) + 1);
            thunk_FUN_03f5d7b8((ulong)&local_70 | 8,0);
            if ((*(uint *)(param_3 + 0x18) & 0xfffffffe) == 0) goto LAB_0760dab8;
            lVar13 = param_3 + 0x38;
            *(undefined8 *)(param_3 + 0x38) = uStack_68;
            *(ulong *)(param_3 + 0x30) = local_70;
            goto LAB_0760d8b0;
          }
          goto LAB_0760da6c;
        case 0x6c:
          if ((param_4 != 0) &&
             ((System_ParameterizedStrings_LowLevelStack__Pop(param_4), lVar13 = extraout_x1_00,
              extraout_x1_00 != 0 || (lVar13 = **(long **)(DAT_09535468 + 0xb8), lVar13 != 0)))) {
            uVar9 = *(uint *)(lVar13 + 0x10);
            goto LAB_0760d8f4;
          }
          goto LAB_0760da6c;
        case 0x6f:
        case 0x78:
          goto switchD_0760d2e0_caseD_30;
        case 0x70:
          iVar7 = *param_2;
          *param_2 = iVar7 + 1;
          uVar12 = System_String__get_Chars(param_1,iVar7 + 1,0);
          if (param_3 != 0) {
            lVar13 = (uVar12 & 0xffff) - 0x31;
            if (*(uint *)(param_3 + 0x18) <= (uint)lVar13) goto LAB_0760dab8;
            if (param_4 != 0) {
              lVar13 = param_3 + lVar13 * 0x10;
LAB_0760d624:
              uVar12 = *(ulong *)(lVar13 + 0x20);
              uVar15 = *(undefined8 *)(lVar13 + 0x28);
              goto LAB_0760d910;
            }
          }
          goto LAB_0760da6c;
        case 0x73:
          if (param_4 != 0) {
            System_ParameterizedStrings_LowLevelStack__Pop(param_4);
            lVar13 = extraout_x1;
            if (extraout_x1 == 0) {
              lVar13 = **(long **)(DAT_09535468 + 0xb8);
            }
            if (plVar11 != (long *)0x0) goto LAB_0760d848;
          }
          goto LAB_0760da6c;
        case 0x74:
          goto switchD_0760d338_caseD_74;
        case 0x7b:
          iVar7 = *param_2;
          *param_2 = iVar7 + 1;
          sVar3 = System_String__get_Chars(param_1,iVar7 + 1,0);
          if (sVar3 == 0x7d) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            do {
              uVar5 = System_String__get_Chars(param_1,*param_2,0);
              iVar7 = *param_2;
              *param_2 = iVar7 + 1;
              uVar9 = (uVar9 * 10 + (uVar5 & 0xffff)) - 0x30;
              sVar3 = System_String__get_Chars(param_1,iVar7 + 1,0);
            } while (sVar3 != 0x7d);
          }
          uStack_68 = 0;
          local_70 = (ulong)uVar9;
          thunk_FUN_03f5d7b8(&uStack_68,0);
          uVar12 = local_70;
          uVar15 = uStack_68;
          if (param_4 != 0) goto LAB_0760d910;
          goto LAB_0760da6c;
        case 0x7e:
          goto switchD_0760d2e0_caseD_21;
        }
      }
      bVar2 = true;
      switch(uVar4) {
      case 0x21:
switchD_0760d2e0_caseD_21:
        if (param_4 != 0) {
          uVar5 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
          sVar3 = System_String__get_Chars(param_1,*param_2,0);
          uVar9 = (uint)(uVar5 == 0);
          if (sVar3 != 0x21) {
            uVar9 = ~uVar5;
          }
          goto LAB_0760d8f4;
        }
        goto LAB_0760da6c;
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x28:
      case 0x29:
      case 0x2c:
      case 0x2e:
      case 0x40:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
        goto switchD_0760d2e0_caseD_22;
      case 0x25:
        if (plVar11 != (long *)0x0) {
          uVar12 = 0x25;
          goto LAB_0760d30c;
        }
        goto LAB_0760da6c;
      case 0x26:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2f:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x41:
      case 0x4f:
switchD_0760d2e0_caseD_26:
        if (param_4 == 0) goto LAB_0760da6c;
        uVar5 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
        uVar6 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
        uVar4 = System_String__get_Chars(param_1,*param_2,0);
        if (uVar4 < 0x42) {
          if (uVar4 == 0x26) {
            uVar9 = uVar6 & uVar5;
          }
          else {
            uVar9 = 0;
            if (uVar4 < 0x3c) {
              if (uVar4 < 0x2d) {
                if (uVar4 == 0x2a) {
                  uVar9 = uVar6 * uVar5;
                }
                else if (uVar4 == 0x2b) {
                  uVar9 = uVar6 + uVar5;
                }
              }
              else if (uVar4 == 0x2d) {
                uVar9 = uVar6 - uVar5;
              }
              else if ((uVar4 == 0x2f) && (uVar9 = 0, uVar5 != 0)) {
                uVar9 = (int)uVar6 / (int)uVar5;
              }
            }
            else if (uVar4 < 0x3e) {
              if (uVar4 == 0x3c) {
                uVar9 = (uint)((int)uVar6 < (int)uVar5);
              }
              else if (uVar4 == 0x3d) {
                uVar9 = (uint)(uVar6 == uVar5);
              }
            }
            else if (uVar4 == 0x3e) {
              uVar9 = (uint)((int)uVar5 < (int)uVar6);
            }
            else if (uVar4 == 0x41) {
              bVar2 = true;
              if (uVar6 != 0) {
                bVar2 = uVar5 == 0;
              }
              goto LAB_0760d8ec;
            }
          }
        }
        else if (uVar4 < 0x5f) {
          if (uVar4 == 0x4f) {
            bVar2 = uVar6 == 0 && uVar5 == 0;
LAB_0760d8ec:
            uVar9 = (uint)!bVar2;
          }
          else if (uVar4 == 0x5e) {
            uVar9 = uVar6 ^ uVar5;
          }
          else {
LAB_0760d424:
            uVar9 = 0;
          }
        }
        else if (uVar4 == 0x6d) {
          iVar7 = 0;
          if (uVar5 != 0) {
            iVar7 = (int)uVar6 / (int)uVar5;
          }
          uVar9 = uVar6 - iVar7 * uVar5;
        }
        else {
          if (uVar4 != 0x7c) goto LAB_0760d424;
          uVar9 = uVar6 | uVar5;
        }
LAB_0760d8f4:
        local_70 = (ulong)uVar9;
        uStack_68 = 0;
        thunk_FUN_03f5d7b8(&uStack_68,0);
        uVar12 = local_70;
        uVar15 = uStack_68;
LAB_0760d910:
        System_ParameterizedStrings_LowLevelStack__Push(param_4,uVar12,uVar15);
        bVar2 = bVar1;
        break;
      case 0x27:
        uVar9 = System_String__get_Chars(param_1,*param_2 + 1,0);
        uStack_68 = 0;
        local_70 = (ulong)uVar9 & 0xffffffff0000ffff;
        thunk_FUN_03f5d7b8(&uStack_68,0);
        if (param_4 == 0) goto LAB_0760da6c;
        System_ParameterizedStrings_LowLevelStack__Push(param_4,local_70,uStack_68);
        *param_2 = *param_2 + 2;
        bVar2 = bVar1;
        break;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
        goto switchD_0760d2e0_caseD_30;
      case 0x3b:
switchD_0760d2e0_caseD_3b:
        sVar3 = System_String__get_Chars(param_1,*param_2,0);
        uVar9 = (uint)(sVar3 == 0x3b);
        goto LAB_0760d9d0;
      case 0x3f:
        break;
      case 0x50:
        iVar7 = *param_2;
        *param_2 = iVar7 + 1;
        uVar15 = System_String__get_Chars(param_1,iVar7 + 1,0);
        lVar14 = System_ParameterizedStrings__GetDynamicOrStaticVariables
                           (uVar15,param_5,param_6,(long)&local_78 + 4);
        if (param_4 == 0) goto LAB_0760da6c;
        uVar9 = local_78._4_4_;
        lVar13 = (long)(int)local_78._4_4_;
        auVar17 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
        if (lVar14 == 0) goto LAB_0760da6c;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0760dab8;
        lVar14 = lVar14 + lVar13 * 0x10;
        lVar13 = lVar14 + 0x28;
        *(undefined1 (*) [16])(lVar14 + 0x20) = auVar17;
LAB_0760d8b0:
        thunk_FUN_03f5d7b8(lVar13,0);
        bVar2 = bVar1;
        break;
      default:
        if (uVar4 != 0x58) goto switchD_0760d2e0_caseD_22;
switchD_0760d2e0_caseD_30:
        iVar7 = *param_2;
        iVar8 = *(int *)(param_1 + 0x10);
        if (iVar7 < iVar8) {
          do {
            uVar9 = System_String__get_Chars(param_1,iVar7,0);
            uVar9 = (uVar9 & 0xffff) - 0x58;
            if (uVar9 < 0x21 && (1L << ((ulong)uVar9 & 0x3f) & 0x108801001U) != 0) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0x10));
          iVar8 = *(int *)(param_1 + 0x10);
        }
        if (iVar8 <= iVar7) {
switchD_0760d2e0_caseD_22:
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar15 = thunk_FUN_03f9944c();
          uVar16 = thunk_FUN_03fc39d4(&DAT_0920e918);
          System_InvalidOperationException___ctor(uVar15,uVar16,0);
          uVar16 = thunk_FUN_03fc39d4(&DAT_091d5760);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar15,uVar16);
        }
        lVar13 = System_String__Substring(param_1,*param_2 + -1,(iVar7 - *param_2) + 2,0);
        if (lVar13 == 0) goto LAB_0760da6c;
        if ((1 < *(int *)(lVar13 + 0x10)) &&
           (sVar3 = System_String__get_Chars(lVar13,1,0), sVar3 == 0x3a)) {
          lVar13 = System_String__Remove(lVar13,1,1,0);
        }
        if (param_4 == 0) goto LAB_0760da6c;
        uVar10 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
        lVar14 = extraout_x1_01;
        if (extraout_x1_01 == 0) {
          local_70 = CONCAT44(local_70._4_4_,uVar10);
          lVar14 = FUN_03f5c42c(DAT_09535420,&local_70);
        }
        lVar13 = System_ParameterizedStrings__FormatPrintF(lVar13,lVar14);
        if (plVar11 == (long *)0x0) goto LAB_0760da6c;
LAB_0760d848:
        System_Text_StringBuilder__Append(plVar11,lVar13,0);
        bVar2 = bVar1;
      }
      goto switchD_0760d2e0_caseD_3f;
    }
LAB_0760d9c8:
    uVar9 = 1;
LAB_0760d9d0:
    uStack_68 = 0;
    local_70 = (ulong)uVar9;
    thunk_FUN_03f5d7b8(&uStack_68,0);
    if (param_4 != 0) {
LAB_0760d9e8:
      System_ParameterizedStrings_LowLevelStack__Push(param_4,local_70,uStack_68);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        return;
      }
    }
  }
LAB_0760da6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
switchD_0760d338_caseD_74:
  if (param_4 == 0) goto LAB_0760da6c;
  iVar7 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
  *param_2 = *param_2 + 1;
  uVar15 = System_ParameterizedStrings__EvaluateInternal
                     (param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar7 != 0) {
    if (plVar11 == (long *)0x0) goto LAB_0760da6c;
    System_Text_StringBuilder__Append(plVar11,uVar15,0);
  }
  iVar8 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
  if (iVar8 == 0) {
    *param_2 = *param_2 + 1;
    uVar15 = System_ParameterizedStrings__EvaluateInternal
                       (param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar7 == 0) {
      if (plVar11 == (long *)0x0) goto LAB_0760da6c;
      System_Text_StringBuilder__Append(plVar11,uVar15,0);
    }
    iVar7 = System_ParameterizedStrings_LowLevelStack__Pop(param_4);
    if (iVar7 == 0) goto switchD_0760d2e0_caseD_22;
  }
  if (!bVar1) {
    uStack_68 = 0;
    local_70 = 1;
    thunk_FUN_03f5d7b8(&uStack_68,0);
    goto LAB_0760d9e8;
  }
  bVar2 = false;
switchD_0760d2e0_caseD_3f:
  bVar1 = bVar2;
  iVar7 = *param_2 + 1;
  *param_2 = iVar7;
  if (*(int *)(param_1 + 0x10) <= iVar7) goto LAB_0760d9c8;
  goto LAB_0760d280;
}

