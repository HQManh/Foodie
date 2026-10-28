// rea decompile_all
// name: System.RuntimeType$$InvokeMember
// address: 0x75f56dc
// body: available
// range: 0x75f56dc-0x75f678f inclusive
// range: 0x75f68b8-0x75f68cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f599c to 0x75e1170 System.Activator$$CreateInstance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75f651c to 0x75db70c System.Array$$GetValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75f6524 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f652c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f6530 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f6534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f6540 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f654c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f6550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f6554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f6558 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f6620 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
System_RuntimeType__InvokeMember
          (long *param_1,long param_2,uint param_3,long *param_4,undefined8 param_5,long param_6,
          undefined8 param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  int *piVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  int local_84;
  long local_70;
  long local_68;
  
  local_68 = param_6;
  if ((DAT_09521f55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_091c0558);
    FUN_03f5c2a4(&DAT_09183f58);
    FUN_03f5c2a4(&DAT_0917ff08);
    FUN_03f5c2a4(&DAT_091858c0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091ae880);
    FUN_03f5c2a4(&DAT_091ae888);
    FUN_03f5c2a4(&DAT_091ae878);
    FUN_03f5c2a4(&DAT_091ae8a0);
    FUN_03f5c2a4(&DAT_0917c770);
    FUN_03f5c2a4(&DAT_091802d8);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_091803c8);
    FUN_03f5c2a4(&DAT_0918a3b8);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09210a58);
    FUN_03f5c2a4(&DAT_09213c70);
    DAT_09521f55 = 1;
  }
  local_70 = 0;
  uVar6 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if ((uVar6 & 1) != 0) {
    uVar14 = thunk_FUN_03fc39d4(&DAT_09207d00);
    uVar14 = System_Environment__GetResourceString(uVar14,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar15 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar15,uVar14,0);
    goto LAB_075f68b8;
  }
  if ((param_3 & 0xff00) == 0) {
    puVar8 = &DAT_09208370;
    goto LAB_075f6748;
  }
  uVar17 = 0x1c;
  if ((param_3 & 0x200) != 0) {
    uVar17 = 0x14;
  }
  if ((param_3 & 0xff) != 0) {
    uVar17 = 0;
  }
  if (param_9 != 0) {
    if (param_6 == 0) {
      if (*(long *)(param_9 + 0x18) != 0) goto LAB_075f59a4;
LAB_075f5878:
      iVar4 = FUN_04ee582c(param_9,0,DAT_091c0558);
      if (iVar4 == -1) goto LAB_075f5894;
      puVar8 = &DAT_092085e0;
    }
    else {
      if ((int)*(long *)(param_9 + 0x18) <= *(int *)(param_6 + 0x18)) goto LAB_075f5878;
LAB_075f59a4:
      puVar8 = &DAT_092085d8;
    }
    uVar14 = thunk_FUN_03fc39d4(puVar8);
    uVar14 = System_Environment__GetResourceString(uVar14,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar15 = thunk_FUN_03f9944c();
    puVar8 = &DAT_0921fa68;
LAB_075f6774:
    uVar16 = thunk_FUN_03fc39d4(puVar8);
    System_ArgumentException___ctor(uVar15,uVar14,uVar16,0);
    goto LAB_075f68b8;
  }
LAB_075f5894:
  if (param_6 == 0) {
    local_84 = 0;
  }
  else {
    local_84 = *(int *)(param_6 + 0x18);
  }
  if (param_4 == (long *)0x0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_4 = (long *)System_Type__get_DefaultBinder(0);
  }
  uVar17 = uVar17 | param_3;
  if ((param_3 >> 9 & 1) != 0) {
    if ((param_3 & 0x3d00) == 0) {
      uVar14 = System_Activator__CreateInstance(param_1,uVar17,param_4,param_6,param_8,0);
      return uVar14;
    }
    puVar8 = &DAT_091fe400;
    goto LAB_075f6748;
  }
  if ((param_3 & 0xc000) != 0) {
    uVar17 = uVar17 | 0x2000;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar14 = thunk_FUN_03f9944c();
    puVar12 = &DAT_0921fa28;
LAB_075f66b0:
    uVar15 = thunk_FUN_03fc39d4(puVar12);
    System_ArgumentNullException___ctor(uVar14,uVar15,0);
    uVar15 = thunk_FUN_03fc39d4(&DAT_091d82c8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar14,uVar15);
  }
  if (((*(int *)(param_2 + 0x10) == 0) ||
      (uVar6 = System_String__Equals(param_2,DAT_09213c70,0), (uVar6 & 1) != 0)) &&
     (lVar7 = System_RuntimeType__GetDefaultMemberName(param_1), param_2 = DAT_09210a58, lVar7 != 0)
     ) {
    param_2 = lVar7;
  }
  if ((uVar17 >> 10 & 1) != 0 || (uVar17 & 0x800) != 0) {
    uVar1 = uVar17 & 0x400;
    if (uVar1 == 0) {
      if (param_6 == 0) {
        thunk_FUN_03fc39d4(&DAT_09181550);
        uVar14 = thunk_FUN_03f9944c();
        puVar12 = (undefined8 *)&DAT_09221240;
        goto LAB_075f66b0;
      }
      if ((uVar17 >> 0xc & 1) == 0) {
        if ((uVar17 >> 8 & 1) == 0) goto LAB_075f59b8;
        puVar8 = &DAT_091fe3f0;
      }
      else {
        puVar8 = &DAT_091fe420;
      }
    }
    else if ((uVar17 & 0x800) == 0) {
      if ((uVar17 >> 0xd & 1) == 0) {
LAB_075f59b8:
        uVar14 = (**(code **)(*param_1 + 0x738))
                           (param_1,param_2,4,uVar17,*(undefined8 *)(*param_1 + 0x740));
        lVar7 = thunk_FUN_03f99350(uVar14,DAT_0917ff08);
        if (lVar7 == 0) goto LAB_075f672c;
        if ((int)*(long *)(lVar7 + 0x18) == 1) {
          plVar22 = *(long **)(lVar7 + 0x20);
LAB_075f5a80:
          uVar6 = System_Reflection_FieldInfo__op_Inequality(plVar22,0,0);
          if ((uVar6 & 1) != 0) {
            if ((plVar22 == (long *)0x0) ||
               (lVar7 = (**(code **)(*plVar22 + 0x268))(plVar22,*(undefined8 *)(*plVar22 + 0x270)),
               lVar7 == 0)) goto LAB_075f672c;
            uVar6 = System_Type__get_IsArray(lVar7,0);
            if ((uVar6 & 1) == 0) {
              lVar9 = (**(code **)(*plVar22 + 0x268))(plVar22,*(undefined8 *)(*plVar22 + 0x270));
              lVar7 = DAT_09535478;
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_095354b8);
              }
              lVar7 = System_Type__GetTypeFromHandle(lVar7 + 0x20,0);
              if (lVar9 == lVar7) goto LAB_075f5b0c;
            }
            else {
LAB_075f5b0c:
              uVar3 = local_84 - (uint)(uVar1 == 0);
              if (0 < (int)uVar3) {
                lVar7 = FUN_03f5c394(DAT_091801b8,uVar3);
                uVar17 = 0;
                do {
                  lVar9 = DAT_091858c0;
                  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(uint *)(param_6 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  uVar6 = (ulong)uVar17;
                  lVar23 = *(long *)(param_6 + uVar6 * 8 + 0x20);
                  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = thunk_FUN_03f99350(lVar23,DAT_091858c0);
                  lVar18 = DAT_091858c0;
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(lVar23,lVar9);
                  }
                  plVar11 = (long *)thunk_FUN_03f99350(lVar23,DAT_091858c0);
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(lVar23,lVar18);
                  }
                  lVar9 = *plVar11;
                  uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == lVar18) {
                        puVar12 = (undefined8 *)(lVar9 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                        goto LAB_075f5be8;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_03f95da8(plVar11,lVar18,7);
LAB_075f5be8:
                  uVar5 = (*(code *)*puVar12)(plVar11,0,puVar12[1]);
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(uint *)(lVar7 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  uVar17 = uVar17 + 1;
                  *(undefined4 *)(lVar7 + uVar6 * 4 + 0x20) = uVar5;
                } while (uVar17 != uVar3);
                plVar22 = (long *)(**(code **)(*plVar22 + 0x2f8))
                                            (plVar22,param_5,*(undefined8 *)(*plVar22 + 0x300));
                if (plVar22 != (long *)0x0) {
                  if ((*(byte *)(*plVar22 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar22 + 200) +
                                (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) != DAT_09535478)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0();
                  }
                  if (uVar1 != 0) {
                    uVar14 = System_Array__GetValue(plVar22,lVar7,0);
                    return uVar14;
                  }
                  if (uVar3 < *(uint *)(param_6 + 0x18)) {
                    System_Array__SetValue
                              (plVar22,*(undefined8 *)(param_6 + (ulong)uVar3 * 8 + 0x20),lVar7,0);
                    return 0;
                  }
                  goto LAB_075f6730;
                }
                if ((uVar1 == 0) && (*(uint *)(param_6 + 0x18) <= uVar3)) goto LAB_075f6730;
                goto LAB_075f672c;
              }
            }
            if (uVar1 == 0) {
              if (local_84 == 1) {
                if (param_6 != 0) {
                  if (*(int *)(param_6 + 0x18) != 0) {
                    (**(code **)(*plVar22 + 0x318))
                              (plVar22,param_5,*(undefined8 *)(param_6 + 0x20),uVar17,param_4,
                               param_8,*(undefined8 *)(*plVar22 + 800));
                    return 0;
                  }
                  goto LAB_075f6730;
                }
                goto LAB_075f672c;
              }
              puVar8 = &DAT_09209d78;
            }
            else {
              if (local_84 == 0) {
                    /* WARNING: Could not recover jumptable at 0x075f64f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar14 = (**(code **)(*plVar22 + 0x2f8))
                                   (plVar22,param_5,*(undefined8 *)(*plVar22 + 0x300));
                return uVar14;
              }
              puVar8 = &DAT_09208968;
            }
            goto LAB_075f6748;
          }
        }
        else {
          if (*(long *)(lVar7 + 0x18) != 0) {
            if (uVar1 == 0) {
              if (param_6 == 0) goto LAB_075f672c;
              if (*(int *)(param_6 + 0x18) == 0) goto LAB_075f6730;
              puVar12 = (undefined8 *)(param_6 + 0x20);
            }
            else {
              if (*(int *)(DAT_09183f58 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar12 = *(undefined8 **)(DAT_09183f58 + 0xb8);
            }
            if (param_4 == (long *)0x0) goto LAB_075f672c;
            plVar22 = (long *)(**(code **)(*param_4 + 0x178))
                                        (param_4,uVar17,lVar7,*puVar12,param_8,
                                         *(undefined8 *)(*param_4 + 0x180));
            goto LAB_075f5a80;
          }
          uVar6 = System_Reflection_FieldInfo__op_Inequality(0,0,0);
          if ((uVar6 & 1) != 0) goto LAB_075f672c;
        }
        if ((uVar17 & 0xfff100) == 0) {
          uVar14 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
          thunk_FUN_03fc39d4(&DAT_091882b0);
          uVar15 = thunk_FUN_03f9944c();
          System_MissingFieldException___ctor(uVar15,uVar14,param_2,0);
          goto LAB_075f68b8;
        }
        goto LAB_075f5ca8;
      }
      puVar8 = &DAT_091fe418;
    }
    else {
      puVar8 = &DAT_091fe408;
    }
    goto LAB_075f6748;
  }
LAB_075f5ca8:
  uVar3 = uVar17 >> 0xc & 1;
  uVar1 = uVar17 & 0x2000;
  if (uVar3 != 0 || uVar1 != 0) {
    if ((uVar17 >> 0xc & 1) == 0) {
      if ((uVar17 >> 8 & 1) == 0) goto LAB_075f5cd4;
      puVar8 = &DAT_091fe3f8;
    }
    else {
      if (uVar1 == 0) goto LAB_075f5cd4;
      puVar8 = &DAT_091fe410;
    }
LAB_075f6748:
    uVar14 = thunk_FUN_03fc39d4(puVar8);
    uVar14 = System_Environment__GetResourceString(uVar14,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar15 = thunk_FUN_03f9944c();
    puVar8 = &DAT_09218050;
    goto LAB_075f6774;
  }
LAB_075f5cd4:
  if ((uVar17 >> 8 & 1) == 0) {
    plVar22 = (long *)0x0;
    plVar11 = (long *)0x0;
  }
  else {
    uVar14 = (**(code **)(*param_1 + 0x738))
                       (param_1,param_2,8,uVar17,*(undefined8 *)(*param_1 + 0x740));
    lVar7 = thunk_FUN_03f99350(uVar14,DAT_091802d8);
    if (lVar7 == 0) goto LAB_075f672c;
    if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
      plVar22 = (long *)0x0;
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      uVar6 = 0;
      uVar19 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar11 = (long *)0x0;
      do {
        if (uVar19 <= uVar6) goto LAB_075f6730;
        plVar24 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
        uVar14 = FUN_03f5c394(DAT_09180748,local_84);
        if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918a400);
        }
        if (plVar24 != (long *)0x0) {
          if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(DAT_0918a3b8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8)
              != DAT_0918a3b8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar24);
          }
        }
        uVar19 = System_RuntimeType__FilterApplyMethodInfo(plVar24,uVar17,3,uVar14);
        plVar22 = plVar11;
        if (((uVar19 & 1) != 0) &&
           (uVar19 = System_Reflection_MethodInfo__op_Equality(plVar11,0,0), plVar22 = plVar24,
           (uVar19 & 1) == 0)) {
          if (lVar9 == 0) {
            lVar9 = thunk_FUN_03f9944c(DAT_0917c770);
            FUN_057e0478(lVar9,*(undefined4 *)(lVar7 + 0x18),DAT_091ae878);
            lVar23 = DAT_091ae880;
            if (lVar9 == 0) goto LAB_075f672c;
            lVar18 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_075f672c;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              plVar22 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
              *plVar22 = (long)plVar11;
              thunk_FUN_03f5d7b8(plVar22,plVar11);
            }
            else {
              FUN_057e0c68(lVar9,plVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar23 = DAT_091ae880;
          lVar18 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_075f672c;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            puVar12 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
            *puVar12 = plVar24;
            thunk_FUN_03f5d7b8(puVar12,plVar24);
            plVar22 = plVar11;
          }
          else {
            FUN_057e0c68(lVar9,plVar24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            plVar22 = plVar11;
          }
        }
        uVar19 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar6 = uVar6 + 1;
        plVar11 = plVar22;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    if (lVar9 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)FUN_03f5c394(DAT_091802d8,*(undefined4 *)(lVar9 + 0x18));
      FUN_057e1130(lVar9,plVar11,DAT_091ae888);
    }
  }
  uVar6 = System_Reflection_MethodInfo__op_Equality(plVar22,0,0);
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  if (uVar3 != 0 || (uVar17 >> 0xd & 1) != 0) {
    uVar14 = (**(code **)(*param_1 + 0x738))
                       (param_1,param_2,0x10,uVar17,*(undefined8 *)(*param_1 + 0x740));
    lVar7 = thunk_FUN_03f99350(uVar14,DAT_091803c8);
    if (lVar7 == 0) goto LAB_075f672c;
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      lVar9 = 0;
      uVar6 = 0;
      uVar19 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar24 = plVar22;
      do {
        if (uVar1 == 0) {
          if (uVar19 <= uVar6) goto LAB_075f6730;
          plVar22 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
          if (plVar22 == (long *)0x0) goto LAB_075f672c;
          pcVar20 = *(code **)(*plVar22 + 0x2e8);
          uVar14 = *(undefined8 *)(*plVar22 + 0x2f0);
        }
        else {
          if (uVar19 <= uVar6) goto LAB_075f6730;
          plVar22 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
          if (plVar22 == (long *)0x0) goto LAB_075f672c;
          pcVar20 = *(code **)(*plVar22 + 0x318);
          uVar14 = *(undefined8 *)(*plVar22 + 800);
        }
        plVar13 = (long *)(*pcVar20)(plVar22,1,uVar14);
        uVar19 = System_Reflection_MethodInfo__op_Equality(plVar13,0,0);
        plVar22 = plVar24;
        if ((uVar19 & 1) == 0) {
          uVar14 = FUN_03f5c394(DAT_09180748,local_84);
          if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918a400);
          }
          if (plVar13 != (long *)0x0) {
            if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_0918a3b8 + 0x130)) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 +
                         -8) != DAT_0918a3b8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar13);
            }
          }
          uVar19 = System_RuntimeType__FilterApplyMethodInfo(plVar13,uVar17,3,uVar14);
          if (((uVar19 & 1) != 0) &&
             (uVar19 = System_Reflection_MethodInfo__op_Equality(plVar24,0,0), plVar22 = plVar13,
             (uVar19 & 1) == 0)) {
            if (lVar9 == 0) {
              lVar9 = thunk_FUN_03f9944c(DAT_0917c770);
              FUN_057e0478(lVar9,*(undefined4 *)(lVar7 + 0x18),DAT_091ae878);
              lVar23 = DAT_091ae880;
              if (lVar9 == 0) goto LAB_075f672c;
              lVar18 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_075f672c;
              uVar3 = *(uint *)(lVar9 + 0x18);
              if (uVar3 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                plVar22 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
                *plVar22 = (long)plVar24;
                thunk_FUN_03f5d7b8(plVar22,plVar24);
              }
              else {
                FUN_057e0c68(lVar9,plVar24,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar23 = DAT_091ae880;
            lVar18 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_075f672c;
            uVar3 = *(uint *)(lVar9 + 0x18);
            if (uVar3 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
              plVar22 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
              *plVar22 = (long)plVar13;
              thunk_FUN_03f5d7b8(plVar22,plVar13);
              plVar22 = plVar24;
            }
            else {
              FUN_057e0c68(lVar9,plVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              plVar22 = plVar24;
            }
          }
        }
        uVar19 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar6 = uVar6 + 1;
        plVar24 = plVar22;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
      if (lVar9 != 0) {
        plVar11 = (long *)FUN_03f5c394(DAT_091802d8,*(undefined4 *)(lVar9 + 0x18));
        FUN_057e1130(lVar9,plVar11,DAT_091ae888);
      }
    }
  }
  uVar6 = System_Reflection_MethodInfo__op_Inequality(plVar22,0,0);
  if ((uVar6 & 1) != 0) {
    if ((plVar11 == (long *)0x0) && (local_84 == 0)) {
      if ((plVar22 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar22 + 0x3d8))(plVar22,*(undefined8 *)(*plVar22 + 0x3e0)),
         lVar7 == 0)) goto LAB_075f672c;
      if ((*(long *)(lVar7 + 0x18) == 0) && ((uVar17 >> 0x12 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x075f6308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar14 = (**(code **)(*plVar22 + 0x368))
                           (plVar22,param_5,uVar17,param_4,param_6,param_8,
                            *(undefined8 *)(*plVar22 + 0x370));
        return uVar14;
      }
LAB_075f6310:
      plVar11 = (long *)FUN_03f5c394(DAT_091802d8,1);
      if (plVar11 == (long *)0x0) goto LAB_075f672c;
      if ((plVar22 != (long *)0x0) &&
         (lVar7 = thunk_FUN_03f99350(plVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
        uVar14 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar14,0);
      }
      if ((int)plVar11[3] == 0) {
LAB_075f6730:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar11[4] = (long)plVar22;
      thunk_FUN_03f5d7b8(plVar11 + 4,plVar22);
    }
    else if (plVar11 == (long *)0x0) goto LAB_075f6310;
    lVar7 = DAT_091c0270;
    if (param_6 == 0) {
      lVar9 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar9 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar9 = *(long *)(lVar7 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      local_68 = **(long **)(lVar7 + 0xb8);
    }
    local_70 = 0;
    if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar22 = (long *)(**(code **)(*param_4 + 0x188))
                                (param_4,uVar17,plVar11,&local_68,param_7,param_8,param_9,&local_70,
                                 *(undefined8 *)(*param_4 + 400));
    uVar6 = System_Reflection_MethodBase__op_Equality(plVar22,0,0);
    if ((uVar6 & 1) == 0) {
      if (plVar22 != (long *)0x0) {
        lVar7 = *plVar22;
        if ((*(byte *)(lVar7 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
            DAT_09188228)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar22);
        }
        uVar14 = (**(code **)(lVar7 + 0x368))
                           (plVar22,param_5,uVar17,param_4,local_68,param_8,
                            *(undefined8 *)(lVar7 + 0x370));
        if (local_70 != 0) {
          if (param_4 == (long *)0x0) goto LAB_075f672c;
          (**(code **)(*param_4 + 0x1a8))
                    (param_4,&local_68,local_70,*(undefined8 *)(*param_4 + 0x1b0));
        }
        return uVar14;
      }
LAB_075f672c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  uVar14 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  thunk_FUN_03fc39d4(&DAT_091882d0);
  uVar15 = thunk_FUN_03f9944c();
  System_MissingMethodException___ctor(uVar15,uVar14,param_2,0);
LAB_075f68b8:
  uVar14 = thunk_FUN_03fc39d4(&DAT_091d82c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar15,uVar14);
}

