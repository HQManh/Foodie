// rea decompile_all
// name: System.Runtime.Remoting.Activation.ActivationServices$$CreateInstanceFromMessage
// address: 0x749a7bc
// body: available
// range: 0x749a7bc-0x749abbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749aba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749aba8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749abb0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749abb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Activation_ActivationServices__CreateInstanceFromMessage(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_0952134d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182aa0);
    FUN_03f5c2a4(&DAT_09182ab8);
    FUN_03f5c2a4(&DAT_09185858);
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09187de0);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_0918a9d0);
    DAT_0952134d = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185858) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0749a898;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185858,0);
LAB_0749a898:
    (*(code *)*puVar1)(param_1,puVar1[1]);
    plVar2 = (long *)FUN_03f69680();
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ed8);
    }
    plVar3 = (long *)System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(param_1,0);
    if (plVar3 == (long *)0x0) {
      System_Threading_Thread__get_CurrentContext();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a9d0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a9d0 + 0x130) * 8 + -8) !=
        DAT_0918a9d0)) {
LAB_0749aba4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
    uVar4 = System_Threading_Thread__get_CurrentContext(0);
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) !=
          DAT_09187de0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar2,DAT_09187de0,uVar4);
      }
    }
    System_Runtime_Remoting_ServerIdentity__AttachServerObject(plVar3,plVar2,uVar4,0);
    lVar5 = *param_1;
    plVar9 = (long *)0x0;
    if ((*(byte *)(DAT_09182aa0 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
       (plVar9 = param_1,
       *(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_09182aa0 + 0x130) * 8 + -8) !=
       DAT_09182aa0)) {
      plVar9 = (long *)0x0;
    }
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185858) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0749a9dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185858,0);
LAB_0749a9dc:
    lVar5 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if (lVar5 != 0) {
      uVar7 = System_Type__get_IsContextful(lVar5,0);
      if (((plVar9 == (long *)0x0) || ((uVar7 & 1) == 0)) || (plVar9[0x13] == 0)) {
        lVar5 = *param_1;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091860a8) {
              puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_0749aa94;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,3);
LAB_0749aa94:
        lVar5 = (*(code *)*puVar1)(param_1,puVar1[1]);
        lVar6 = *param_1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091860a8) {
              puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0749aaf4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,1);
LAB_0749aaf4:
        uVar4 = (*(code *)*puVar1)(param_1,puVar1[1]);
        if (lVar5 != 0) {
          System_Reflection_MethodBase__Invoke(lVar5,plVar2,uVar4,0);
          goto LAB_0749ab64;
        }
      }
      else {
        System_Runtime_Remoting_Proxies_RemotingProxy__AttachIdentity(plVar9[0x13],plVar3,0);
        plVar3 = (long *)plVar9[0x13];
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
          if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189ed8);
          }
          if (plVar3 != (long *)0x0) {
            if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
               (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8
                         ) != DAT_09187de0)) goto LAB_0749aba4;
          }
          System_Runtime_Remoting_RemotingServices__InternalExecuteMessage(plVar3,param_1,0);
LAB_0749ab64:
          uVar4 = thunk_FUN_03f9944c(DAT_09182ab8);
          System_Runtime_Remoting_Messaging_MethodResponse___ctor(uVar4,plVar2,0);
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

