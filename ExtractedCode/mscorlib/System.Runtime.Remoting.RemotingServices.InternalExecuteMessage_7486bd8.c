// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$InternalExecuteMessage
// address: 0x7486bd8
// body: available
// range: 0x7486bd8-0x74874d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7487474 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7487478 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748747c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7487480 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7487484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7487488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748748c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7487490 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7487494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7487498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748749c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74874a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_RemotingServices__InternalExecuteMessage(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  long local_68;
  
  if ((DAT_0952128b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_0918a260);
    DAT_0952128b = 1;
  }
  local_68 = 0;
  if ((param_1 == 0) || (uVar2 = System_Object__GetType(param_1,0), param_2 == (long *)0x0))
  goto LAB_0748749c;
  lVar12 = *param_2;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
        goto LAB_07486cc4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_07486cc4:
  plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  if (plVar4 == (long *)0x0) goto LAB_0748749c;
  uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar13 = System_Type__op_Equality(uVar5,uVar2,0);
  if ((uVar13 & 1) == 0) {
    lVar12 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_07486d6c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_07486d6c:
    uVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ed8);
    }
    uVar13 = System_Reflection_MethodBase__op_Equality
                       (uVar5,*(undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x30),0);
    if ((uVar13 & 1) != 0) goto LAB_07486e3c;
    lVar12 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_07486dfc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_07486dfc:
    uVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ed8);
    }
    uVar13 = System_Reflection_MethodBase__op_Equality
                       (uVar5,*(undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x38),0);
    if ((uVar13 & 1) != 0) goto LAB_07486e3c;
    lVar12 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_074873b8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_074873b8:
    uVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ed8);
    }
    plVar4 = (long *)FUN_03f69a90(uVar2,uVar5);
    uVar13 = System_Reflection_MethodBase__op_Equality(plVar4,0,0);
    if ((uVar13 & 1) != 0) {
      FUN_039b1d98(param_2);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091860a8);
      uVar5 = FUN_039afee4(4,uVar5,param_2);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091fe270);
      uVar2 = System_String__Format(uVar9,uVar2,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09189ec8);
      uVar5 = thunk_FUN_03f9944c();
      System_Runtime_Remoting_RemotingException___ctor(uVar5,uVar2);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091d7430);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar2);
    }
  }
  else {
LAB_07486e3c:
    lVar12 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_07486e8c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_07486e8c:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  }
  lVar12 = *param_2;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
        goto LAB_07486eec;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_07486eec:
  plVar6 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  if (plVar6 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar6 + 0x318))(plVar6,*(undefined8 *)(*plVar6 + 800));
    if ((uVar13 & 1) == 0) {
LAB_07486fe8:
      lVar12 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091860a8) {
            puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_07487038;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,2);
LAB_07487038:
      uVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
      uVar2 = System_Runtime_Remoting_Messaging_CallContext__SetLogicalCallContext(uVar2,0);
      lVar12 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091860a8) {
            puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_074870a0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,1);
LAB_074870a0:
      uVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = FUN_03f69aa8(plVar4,param_1,uVar5,&local_68);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar4 = (long *)FUN_03f5c394(DAT_09180318,*(undefined4 *)(lVar12 + 0x18));
      uVar11 = *(uint *)(lVar12 + 0x18);
      if ((int)uVar11 < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        uVar16 = 0;
        do {
          if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar6 = *(long **)(lVar12 + (ulong)uVar15 * 8 + 0x20);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar13 = System_Reflection_ParameterInfo__get_IsOut(plVar6,0);
          if ((uVar13 & 1) == 0) {
LAB_07487170:
            lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar13 = System_Type__get_IsByRef(lVar7,0);
            if ((uVar13 & 1) == 0) {
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(uint *)(plVar4 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar4[(ulong)uVar15 + 4] = 0;
              thunk_FUN_03f5d7b8(plVar4 + (ulong)uVar15 + 4,0);
            }
            else {
              if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(uint *)(local_68 + 0x18) <= uVar16) {
LAB_07487480:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *(long *)(local_68 + (long)(int)uVar16 * 8 + 0x20);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
                uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar2,0);
              }
              if (*(uint *)(plVar4 + 3) <= uVar15) goto LAB_07487480;
              plVar4[(ulong)uVar15 + 4] = lVar7;
              thunk_FUN_03f5d7b8(plVar4 + (ulong)uVar15 + 4,lVar7);
              uVar16 = uVar16 + 1;
            }
          }
          else {
            lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar13 = System_Type__get_IsByRef(lVar7,0);
            if ((uVar13 & 1) != 0) goto LAB_07487170;
            uVar1 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
            lVar7 = *param_2;
            uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_091860a8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                  goto LAB_0748727c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,8);
LAB_0748727c:
            lVar7 = (*(code *)*puVar3)(param_2,uVar1,puVar3[1]);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
              uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar2,0);
            }
            if (*(uint *)(plVar4 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[(ulong)uVar15 + 4] = lVar7;
            thunk_FUN_03f5d7b8(plVar4 + (ulong)uVar15 + 4,lVar7);
          }
          uVar11 = *(uint *)(lVar12 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar11);
      }
      lVar12 = System_Threading_Thread__get_CurrentThread(0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = System_Threading_Thread__GetMutableExecutionContext(lVar12,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = System_Threading_ExecutionContext__get_LogicalCallContext(lVar12,0);
      uVar10 = thunk_FUN_03f9944c(DAT_0918a260);
      System_Runtime_Remoting_Messaging_ReturnMessage___ctor
                (uVar10,uVar5,plVar4,uVar15,uVar9,param_2,0);
      System_Runtime_Remoting_Messaging_CallContext__SetLogicalCallContext(uVar2,0);
      return uVar10;
    }
    lVar12 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_07486f60;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_07486f60:
    plVar6 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if ((plVar6 != (long *)0x0) &&
       (uVar2 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340)),
       plVar4 != (long *)0x0)) {
      lVar12 = *plVar4;
      if ((*(byte *)(lVar12 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
          DAT_09188228)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      plVar4 = (long *)(**(code **)(lVar12 + 0x408))(plVar4,*(undefined8 *)(lVar12 + 0x410));
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x418))
                                   (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x420));
        goto LAB_07486fe8;
      }
    }
  }
LAB_0748749c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

