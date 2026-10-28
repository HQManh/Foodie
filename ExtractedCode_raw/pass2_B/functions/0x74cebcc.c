// rea decompile_all
// name: System.Runtime.InteropServices.Marshal$$GetCustomMarshalerInstance
// address: 0x74cebcc
// body: available
// range: 0x74cebcc-0x74cf18f inclusive
// range: 0x74cf288-0x74cf34b inclusive
// range: 0x74cf444-0x74cf453 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74cf024 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf0fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf100 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf10c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf110 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf168 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf170 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf180 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cf18c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074cee40) */
/* WARNING: Removing unreachable block (ram,0x074cf16c) */
/* WARNING: Removing unreachable block (ram,0x074cf0f8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Runtime_InteropServices_Marshal__GetCustomMarshalerInstance(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *local_78;
  char local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  if ((DAT_09521503 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c218);
    FUN_03f5c2a4(&DAT_0919c220);
    FUN_03f5c2a4(&DAT_09177978);
    FUN_03f5c2a4(&DAT_09171b78);
    FUN_03f5c2a4(&DAT_09185950);
    FUN_03f5c2a4(&DAT_091d2278);
    FUN_03f5c2a4(&DAT_09187dd0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918a3b8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091ecd00);
    FUN_03f5c2a4(&DAT_09192670);
    FUN_03f5c2a4(&DAT_091bed68);
    FUN_03f5c2a4(&DAT_09203580);
    DAT_09521503 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_48 = 0;
  local_68 = 0;
  local_6c[0] = '\0';
  local_78 = (undefined8 *)0x0;
  FUN_066cee64(&local_60,param_1,param_2,DAT_091bed68);
  if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(int *)(DAT_09192670 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_09192670 + 0xb8);
  lVar9 = puVar8[1];
  lVar11 = *(long *)(DAT_09187dd0 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(DAT_09192670 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_09192670 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_03f9944c(DAT_09177978);
    FUN_053017a8(lVar9,uVar10,DAT_091ecd00,0);
    plVar1 = (long *)(*(long *)(DAT_09192670 + 0xb8) + 8);
    *plVar1 = lVar9;
    thunk_FUN_03f5d7b8(plVar1,lVar9);
  }
  FUN_04be0954(lVar11 + 8,lVar9,DAT_091d2278);
  if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_6c[0] = '\0';
  local_68 = *(undefined8 *)(*(long *)(DAT_09187dd0 + 0xb8) + 0x10);
  System_Threading_Monitor__Enter(local_68,local_6c,0);
  if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar9 = *(long *)(*(long *)(DAT_09187dd0 + 0xb8) + 8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = FUN_06e63768(lVar9,local_60,uStack_58,&local_48,DAT_0919c218);
  if (local_6c[0] != '\0') {
    System_Threading_Monitor__Exit(local_68,0);
  }
  if ((uVar2 & 1) != 0) {
    return local_48;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180748,1);
  lVar9 = DAT_09535468;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar9 = System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
  if (plVar1 == (long *)0x0) {
LAB_074cf104:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar9 != 0) &&
     (lVar11 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar1 + 0x40)), lVar11 == 0)) {
    uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,0);
  }
  if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar1[4] = lVar9;
  thunk_FUN_03f5d7b8(plVar1 + 4,lVar9);
  if (param_1 == (long *)0x0) goto LAB_074cf104;
  plVar1 = (long *)System_Type__GetMethod(param_1,DAT_09203580,0x138,0,plVar1,0,0);
  if (plVar1 == (long *)0x0) {
    uVar2 = System_Reflection_MethodInfo__op_Equality(0,0,0);
    if ((uVar2 & 1) == 0) {
LAB_074cf320:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918a3b8 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8) !=
        DAT_0918a3b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar1);
    }
    uVar2 = System_Reflection_MethodInfo__op_Equality(plVar1,0,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = (**(code **)(*plVar1 + 0x3f8))(plVar1,*(undefined8 *)(*plVar1 + 0x400));
      uVar10 = DAT_09171b78;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      uVar2 = System_Type__op_Inequality(uVar3,uVar10,0);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((param_2 != 0) &&
           (lVar9 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4[4] = param_2;
        thunk_FUN_03f5d7b8(plVar4 + 4,param_2);
        lVar9 = thunk_FUN_03f65778(plVar1,0,plVar4,&local_78,0);
        uVar10 = DAT_09185950;
        if (lVar9 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = thunk_FUN_03f99350(lVar9,DAT_09185950);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar9,uVar10);
          }
        }
        puVar8 = local_78;
        local_48 = lVar11;
        if (local_78 != (undefined8 *)0x0) {
          lVar9 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(local_78);
          if (lVar9 != 0) {
            System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw();
            puVar7 = (undefined8 *)__cxa_allocate_exception(8);
            *puVar7 = *puVar8;
            uVar10 = __cxa_throw(puVar7,&PTR_PTR_089e1d78,0);
            __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
            FUN_0404c2dc(uVar10);
          }
          goto LAB_074cf320;
        }
        if (lVar11 != 0) {
          if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_6c[0] = '\0';
          local_68 = *(undefined8 *)(*(long *)(DAT_09187dd0 + 0xb8) + 0x10);
          System_Threading_Monitor__Enter(local_68,local_6c,0);
          if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar9 = *(long *)(*(long *)(DAT_09187dd0 + 0xb8) + 8);
          if (lVar9 != 0) {
            FUN_06e61c60(lVar9,local_60,uStack_58,local_48,DAT_0919c220);
            if (local_6c[0] == '\0') {
              return local_48;
            }
            System_Threading_Monitor__Exit(local_68,0);
            return local_48;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_039b1d98(param_1);
        uVar10 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
        uVar3 = thunk_FUN_03fc39d4(&DAT_091faee8);
        puVar5 = &DAT_091f7920;
        goto LAB_074cf2c0;
      }
    }
  }
  FUN_039b1d98(param_1);
  uVar10 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  uVar3 = thunk_FUN_03fc39d4(&DAT_091ffa30);
  puVar5 = &DAT_091f74c0;
LAB_074cf2c0:
  uVar6 = thunk_FUN_03fc39d4(puVar5);
  uVar10 = System_String__Concat(uVar3,uVar10,uVar6,0);
  thunk_FUN_03fc39d4(&DAT_091814c0);
  uVar3 = thunk_FUN_03f9944c();
  System_ApplicationException___ctor(uVar3,uVar10,0);
  uVar10 = thunk_FUN_03fc39d4(&DAT_091d29d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar10);
}

