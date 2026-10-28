// rea decompile_all
// name: System.Runtime.Remoting.Proxies.RealProxy$$PrivateInvoke
// address: 0x748d4c4
// body: available
// range: 0x748d4c4-0x748dc8b inclusive
// range: 0x748dd94-0x748dd97 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748d678 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748d738 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748d754 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748d7d8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748dc38 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748dc7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748dc88 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748dd94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Proxies_RealProxy__PrivateInvoke
               (long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  
  if ((DAT_095212de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182aa0);
    FUN_03f5c2a4(&DAT_09185860);
    FUN_03f5c2a4(&DAT_091860a0);
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_091860b0);
    FUN_03f5c2a4(&DAT_09188398);
    FUN_03f5c2a4(&DAT_09189ed0);
    FUN_03f5c2a4(&DAT_0918a260);
    DAT_095212de = 1;
  }
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09188398 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09188398 + 0x130) * 8 + -8) !=
        DAT_09188398)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
  }
  lVar3 = System_Threading_Thread__get_CurrentThread(0);
  if (((lVar3 == 0) ||
      (lVar3 = System_Threading_Thread__GetMutableExecutionContext(lVar3,0), lVar3 == 0)) ||
     (lVar3 = System_Threading_ExecutionContext__get_LogicalCallContext(lVar3,0),
     param_2 == (long *)0x0)) goto LAB_0748dd94;
  param_2[6] = lVar3;
  thunk_FUN_03f5d7b8();
  iVar2 = System_Runtime_Remoting_Messaging_MonoMethodMessage__get_CallType(param_2,0);
  if (param_1 == (long *)0x0) {
LAB_0748d600:
    bVar1 = false;
  }
  else {
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_09189ed0 + 0x130)) goto LAB_0748d600;
    bVar1 = *(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09189ed0 + 0x130) * 8 + -8)
            == DAT_09189ed0;
  }
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  if (iVar2 == 1) {
    if (param_2[9] == 0) goto LAB_0748dd94;
    plVar5 = (long *)(param_2[9] + 0x60);
    *plVar5 = (long)param_2;
    thunk_FUN_03f5d7b8(plVar5,param_2);
LAB_0748d690:
    plVar5 = (long *)0x0;
  }
  else {
    if (iVar2 != 2) goto LAB_0748d690;
    if (param_2[9] == 0) goto LAB_0748dd94;
    lVar4 = System_Runtime_Remoting_Messaging_AsyncResult__EndInvoke(param_2[9],0);
    lVar3 = DAT_091860b0;
    if (lVar4 == 0) goto LAB_0748d690;
    plVar5 = (long *)thunk_FUN_03f99350(lVar4,DAT_091860b0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar4,lVar3);
    }
  }
  if (param_2[2] == 0) goto LAB_0748dd94;
  uVar6 = System_Reflection_MethodBase__get_IsConstructor(param_2[2],0);
  lVar3 = DAT_091860a8;
  plVar7 = param_2;
  if ((uVar6 & 1) == 0) {
    if (plVar5 == (long *)0x0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
LAB_0748d79c:
      lVar4 = (**(code **)(*param_1 + 0x188))(param_1,plVar7,*(undefined8 *)(*param_1 + 400));
      lVar3 = DAT_091860b0;
      if (lVar4 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)thunk_FUN_03f99350(lVar4,DAT_091860b0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar4,lVar3);
        }
      }
      if (iVar2 != 1) {
        bVar1 = true;
      }
      plVar5 = plVar7;
      if (!bVar1) {
        plVar5 = (long *)param_2[9];
        if ((plVar5 == (long *)0x0) ||
           (uVar9 = (**(code **)(*plVar5 + 0x288))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x290)),
           plVar7 == (long *)0x0)) goto LAB_0748dd94;
        lVar3 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_091860b0) {
              puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0748d860;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091860b0,1);
LAB_0748d860:
        lVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        *param_4 = lVar3;
        thunk_FUN_03f5d7b8(param_4,lVar3);
        plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918a260);
        uVar10 = thunk_FUN_03f99350(plVar7,DAT_091860a0);
        System_Runtime_Remoting_Messaging_ReturnMessage___ctor(plVar5,uVar9,0,0,0,uVar10,0);
      }
      if (plVar5 == (long *)0x0) goto LAB_0748dd94;
    }
  }
  else if (bVar1) {
    if (param_1 == (long *)0x0) goto LAB_0748dd94;
    if ((*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_09189ed0 + 0x130)) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09189ed0 + 0x130) * 8 + -8) !=
        DAT_09189ed0)) goto LAB_0748dd94;
    lVar4 = thunk_FUN_03f99350(param_2,DAT_091860a8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2,lVar3);
    }
    lVar4 = System_Runtime_Remoting_Proxies_RemotingProxy__ActivateRemoteObject(param_1,lVar4);
    lVar3 = DAT_091860b0;
    if (lVar4 == 0) goto LAB_0748d79c;
    plVar5 = (long *)thunk_FUN_03f99350(lVar4,DAT_091860b0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar4,lVar3);
    }
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_0748dd94;
    uVar9 = System_Runtime_Remoting_Proxies_RealProxy__GetProxiedType(param_1);
    plVar7 = (long *)thunk_FUN_03f9944c(DAT_09182aa0);
    System_Runtime_Remoting_Messaging_ConstructionCall___ctor(plVar7,uVar9,0);
    if (plVar5 == (long *)0x0) goto LAB_0748d79c;
  }
  lVar3 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_091860a8) {
        puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_0748d91c;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091860a8,2);
LAB_0748d91c:
  lVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
  if (lVar3 != 0) {
    lVar3 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091860a8) {
          puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0748d97c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091860a8,2);
LAB_0748d97c:
    lVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
    if (lVar3 == 0) goto LAB_0748dd94;
    uVar6 = System_Runtime_Remoting_Messaging_LogicalCallContext__get_HasInfo(lVar3,0);
    if ((uVar6 & 1) != 0) {
      lVar3 = System_Threading_Thread__get_CurrentThread(0);
      if ((lVar3 == 0) ||
         (lVar3 = System_Threading_Thread__GetMutableExecutionContext(lVar3,0), lVar3 == 0))
      goto LAB_0748dd94;
      lVar3 = System_Threading_ExecutionContext__get_LogicalCallContext(lVar3,0);
      lVar4 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091860a8) {
            puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_0748da0c;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091860a8,2);
LAB_0748da0c:
      uVar9 = (*(code *)*puVar8)(plVar5,puVar8[1]);
      if (lVar3 == 0) goto LAB_0748dd94;
      System_Runtime_Remoting_Messaging_LogicalCallContext__Merge(lVar3,uVar9,0);
    }
  }
  lVar3 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_091860b0) {
        puVar8 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0748da78;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091860b0,0);
LAB_0748da78:
  lVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
  *param_3 = lVar3;
  thunk_FUN_03f5d7b8(param_3,lVar3);
  if (*param_3 != 0) {
    *param_4 = 0;
    thunk_FUN_03f5d7b8(param_4,0);
    lVar3 = *param_3;
    FUN_039b1d98(lVar3);
    uVar9 = System_Exception__FixRemotingException(lVar3,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091d7030);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar10);
  }
  lVar3 = thunk_FUN_03f99350(plVar5,DAT_09185860);
  if (lVar3 != 0) {
    if (*param_4 != 0) goto LAB_0748dbc0;
    lVar3 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091860b0) goto LAB_0748db94;
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
LAB_0748daec:
    puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091860b0,1);
    goto LAB_0748dba4;
  }
  iVar2 = System_Runtime_Remoting_Messaging_MonoMethodMessage__get_CallType(param_2,0);
  if (iVar2 == 1) goto LAB_0748dbc0;
  iVar2 = System_Runtime_Remoting_Messaging_MonoMethodMessage__get_CallType(param_2,0);
  if (iVar2 != 0) {
    iVar2 = System_Runtime_Remoting_Messaging_MonoMethodMessage__get_CallType(param_2,0);
    if (iVar2 != 2) {
      if (*param_4 != 0) goto LAB_0748dbc0;
      lVar3 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091860b0) goto LAB_0748db94;
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      goto LAB_0748daec;
    }
    if (param_2[9] == 0) {
LAB_0748dd94:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_2 = *(long **)(param_2[9] + 0x60);
  }
  lVar3 = System_Runtime_Remoting_Proxies_RealProxy__ProcessResponse(plVar5,param_2);
LAB_0748dbb0:
  *param_4 = lVar3;
  thunk_FUN_03f5d7b8(param_4,lVar3);
LAB_0748dbc0:
  lVar3 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_091860b0) {
        puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_0748dc10;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091860b0,2);
LAB_0748dc10:
                    /* WARNING: Could not recover jumptable at 0x0748dc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return;
LAB_0748db94:
  puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 1) * 0x10 + 0x138);
LAB_0748dba4:
  lVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
  goto LAB_0748dbb0;
}

