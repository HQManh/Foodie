// rea decompile_all
// name: System.Runtime.Remoting.Activation.AppDomainLevelActivator$$Activate
// address: 0x749ad18
// body: available
// range: 0x749ad18-0x749b13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749b0dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749b0e4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749b0e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749b130 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749b13c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Remoting_Activation_AppDomainLevelActivator__Activate
                 (long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 local_38;
  
  if ((DAT_0952134f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171ac0);
    FUN_03f5c2a4(&DAT_091852c8);
    FUN_03f5c2a4(&DAT_09185858);
    FUN_03f5c2a4(&DAT_091860b0);
    FUN_03f5c2a4(&DAT_09188ab8);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_0952134f = 1;
  }
  uVar1 = DAT_09171ac0;
  local_38 = 0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ed8);
  }
  lVar2 = System_Runtime_Remoting_RemotingServices__Connect(uVar1,uVar9,0);
  lVar6 = DAT_091852c8;
  if (lVar2 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)thunk_FUN_03f99350(lVar2,DAT_091852c8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar2,lVar6);
    }
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185858) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0749ae80;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185858,2);
LAB_0749ae80:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091852c8) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0749aee0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091852c8,0);
LAB_0749aee0:
      uVar1 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      lVar6 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185858) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_0749af40;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185858,3);
LAB_0749af40:
      (*(code *)*puVar4)(param_2,uVar1,puVar4[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091852c8) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0749afa4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852c8,1);
LAB_0749afa4:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091860b0) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0749b014;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091860b0,2);
LAB_0749b014:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_09188ab8 + 0x130)) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09188ab8 + 0x130) * 8 + -8) !=
              DAT_09188ab8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar5);
          }
          uVar1 = (**(code **)(lVar6 + 0x1e8))(plVar5,*(undefined8 *)(lVar6 + 0x1f0));
          if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189ed8);
          }
          lVar6 = System_Runtime_Remoting_RemotingServices__GetIdentityForUri(uVar1,0);
          if (lVar6 != 0) {
            thunk_FUN_03fc39d4(&DAT_09189ec8);
            uVar1 = thunk_FUN_03f9944c();
            uVar9 = thunk_FUN_03fc39d4(&DAT_09204868);
            System_Runtime_Remoting_RemotingException___ctor(uVar1,uVar9,0);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091bfdf0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar1,uVar9);
          }
          if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_Runtime_Remoting_RemotingServices__GetOrCreateClientIdentity
                            (plVar5,0,&local_38,0);
          System_Runtime_Remoting_RemotingServices__SetMessageTargetIdentity(param_2,uVar1,0);
          return plVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

