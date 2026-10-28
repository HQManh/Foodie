// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodCall$$ResolveMethod
// address: 0x74a46fc
// body: available
// range: 0x74a46fc-0x74a4c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a4a04 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a4a1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a4b24 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a4c1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a4c64 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MethodCall__ResolveMethod(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if ((DAT_0952139a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_0952139a = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Runtime_Remoting_RemotingServices__GetMethodBaseFromMethodMessage(param_1,0);
    puVar9 = (undefined8 *)(param_1 + 0x38);
    *puVar9 = uVar8;
    thunk_FUN_03f5d7b8(puVar9,uVar8);
    uVar2 = System_Reflection_MethodBase__op_Equality(*puVar9,0,0);
    if ((uVar2 & 1) == 0) {
LAB_074a4944:
      plVar3 = (long *)(param_1 + 0x38);
      plVar1 = (long *)*plVar3;
      if (plVar1 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x318))(plVar1,*(undefined8 *)(*plVar1 + 800));
        if ((uVar2 & 1) == 0) {
          return;
        }
        plVar1 = (long *)*plVar3;
        if (plVar1 != (long *)0x0) {
          uVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,*(undefined8 *)(*plVar1 + 0x350));
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar7 = System_Runtime_Remoting_Messaging_MethodCall__get_GenericArguments(param_1);
          if (lVar7 == 0) {
            thunk_FUN_03fc39d4(&DAT_09189ec8);
            uVar8 = thunk_FUN_03f9944c();
            uVar10 = thunk_FUN_03fc39d4(&DAT_0920fc18);
            System_Runtime_Remoting_RemotingException___ctor(uVar8,uVar10,0);
            uVar10 = thunk_FUN_03fc39d4(&DAT_091d37f0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar8,uVar10);
          }
          plVar1 = *(long **)(param_1 + 0x38);
          uVar8 = System_Runtime_Remoting_Messaging_MethodCall__get_GenericArguments(param_1);
          if (plVar1 != (long *)0x0) {
            lVar7 = *plVar1;
            if ((*(byte *)(DAT_09188228 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8)
                == DAT_09188228)) {
              lVar7 = (**(code **)(lVar7 + 0x418))(plVar1,uVar8,*(undefined8 *)(lVar7 + 0x420));
              *plVar3 = lVar7;
              thunk_FUN_03f5d7b8(plVar3);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar1);
          }
        }
      }
LAB_074a4a1c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = System_Runtime_Remoting_Messaging_MethodCall__get_TypeName(param_1);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09207cb8);
    puVar6 = &DAT_091f6858;
LAB_074a4ba4:
    uVar4 = thunk_FUN_03fc39d4(puVar6);
  }
  else {
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = (long *)System_Runtime_Remoting_RemotingServices__GetServerTypeForUri(lVar7,0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar2 = System_Type__op_Equality(plVar1,0,0);
    lVar7 = *(long *)(param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      if (lVar7 == 0) {
        uVar10 = thunk_FUN_03fc39d4(&DAT_091f5700);
      }
      else {
        uVar8 = thunk_FUN_03fc39d4(&DAT_091f5cd0);
        uVar10 = thunk_FUN_03fc39d4(&DAT_091f83f0);
        uVar10 = System_String__Concat(uVar8,lVar7,uVar10,0);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = thunk_FUN_03fc39d4(&DAT_0920bd90);
      puVar6 = &DAT_091f8fe0;
      goto LAB_074a4ba4;
    }
    plVar3 = (long *)System_Runtime_Remoting_Messaging_MethodCall__CastTo(uVar2,lVar7,plVar1);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar2 = System_Type__op_Equality(plVar3,0,0);
    if ((uVar2 & 1) != 0) {
      uVar8 = thunk_FUN_03fc39d4(&DAT_091805f8);
      uVar8 = FUN_03f5c394(uVar8,5);
      FUN_039b1d98();
      uVar10 = thunk_FUN_03fc39d4(&DAT_091fda80);
      FUN_039af17c(uVar8,0,uVar10);
      FUN_039af17c(uVar8,1,*(undefined8 *)(param_1 + 0x18));
      uVar10 = thunk_FUN_03fc39d4(&DAT_091f79a8);
      FUN_039af17c(uVar8,2,uVar10);
      FUN_039b1d98(plVar1);
      uVar10 = (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
      FUN_039af17c(uVar8,3,uVar10);
      uVar10 = thunk_FUN_03fc39d4(&DAT_091f7320);
      FUN_039af17c(uVar8,4,uVar10);
      uVar8 = System_String__Concat(uVar8,0);
      goto LAB_074a4be4;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Runtime_Remoting_RemotingServices__GetMethodBaseFromName(plVar3,uVar8,uVar10,0);
    puVar9 = (undefined8 *)(param_1 + 0x38);
    *puVar9 = uVar8;
    thunk_FUN_03f5d7b8(puVar9,uVar8);
    uVar2 = System_Reflection_MethodBase__op_Equality(*puVar9,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__op_Inequality(plVar3,plVar1,0);
      if ((uVar2 & 1) != 0) {
        if (plVar3 == (long *)0x0) goto LAB_074a4a1c;
        uVar2 = System_Type__get_IsInterface(plVar3,0);
        if ((uVar2 & 1) != 0) {
          if (plVar1 == (long *)0x0) goto LAB_074a4a1c;
          uVar2 = System_Type__get_IsInterface(plVar1,0);
          if ((uVar2 & 1) == 0) {
            uVar8 = *puVar9;
            if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Runtime_Remoting_RemotingServices__GetVirtualMethod(plVar1,uVar8,0);
            *puVar9 = uVar8;
            thunk_FUN_03f5d7b8(puVar9,uVar8);
            uVar2 = System_Reflection_MethodBase__op_Equality(*puVar9,0,0);
            if ((uVar2 & 1) != 0) {
              uVar10 = *(undefined8 *)(param_1 + 0x20);
              uVar4 = thunk_FUN_03fc39d4(&DAT_091f6858);
              uVar5 = thunk_FUN_03fc39d4(&DAT_09207cb8);
              uVar8 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
              goto LAB_074a4bdc;
            }
          }
        }
      }
      goto LAB_074a4944;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091f6858);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09207cb8);
    if (plVar3 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
  }
LAB_074a4bdc:
  uVar8 = System_String__Concat(uVar5,uVar10,uVar4,uVar8,0);
LAB_074a4be4:
  thunk_FUN_03fc39d4(&DAT_09189ec8);
  uVar10 = thunk_FUN_03f9944c();
  System_Runtime_Remoting_RemotingException___ctor(uVar10,uVar8,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d37f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar8);
}

