// rea decompile_all
// name: System.Runtime.Remoting.Activation.RemoteActivator$$Activate
// address: 0x749b9f0
// body: available
// range: 0x749b9f0-0x749be7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749bdcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749bdd4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749be68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749be74 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749be78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Activation_RemoteActivator__Activate(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_09521353 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ab8);
    FUN_03f5c2a4(&DAT_09185858);
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09187de0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189e68);
    FUN_03f5c2a4(&DAT_09189ec0);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_09521353 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185858) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0749bad4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185858,0);
LAB_0749bad4:
    uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
    if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ec0);
    }
    uVar7 = System_Runtime_Remoting_RemotingConfiguration__IsActivationAllowed(uVar2,0);
    if ((uVar7 & 1) == 0) {
      FUN_039b1d98(param_2);
      uVar2 = thunk_FUN_03fc39d4(&DAT_09185858);
      uVar2 = FUN_039afee4(1,uVar2,param_2);
      uVar4 = thunk_FUN_03fc39d4(&DAT_09210118);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091f66c0);
      uVar2 = System_String__Concat(uVar4,uVar2,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09189ec8);
      uVar4 = thunk_FUN_03f9944c();
      System_Runtime_Remoting_RemotingException___ctor(uVar4,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091d7360);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar2);
    }
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185858) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0749bb54;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185858,0);
LAB_0749bb54:
    lVar6 = (*(code *)*puVar1)(param_2,puVar1[1]);
    if (lVar6 != 0) {
      uVar7 = System_Type__get_IsContextful(lVar6,0);
      plVar9 = (long *)0x0;
      if ((uVar7 & 1) != 0) {
        plVar9 = (long *)FUN_03f5c394(DAT_09180318,1);
        lVar6 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185858) {
              puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              goto LAB_0749bbdc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185858,5);
LAB_0749bbdc:
        uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
        lVar6 = thunk_FUN_03f9944c(DAT_09189e68);
        System_Attribute___ctor(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x10),uVar2);
        if (plVar9 == (long *)0x0) goto LAB_0749bdcc;
        lVar3 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar3 == 0) {
          uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,0);
        }
        if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar9[4] = lVar6;
        thunk_FUN_03f5d7b8(plVar9 + 4,lVar6);
      }
      lVar6 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185858) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0749bca0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185858,0);
LAB_0749bca0:
      uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
      lVar6 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091860a8) {
            puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0749bd08;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,1);
LAB_0749bd08:
      uVar4 = (*(code *)*puVar1)(param_2,puVar1[1]);
      plVar9 = (long *)System_Activator__CreateInstance(uVar2,uVar4,plVar9,0);
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189ed8);
      }
      if (plVar9 != (long *)0x0) {
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) !=
            DAT_09187de0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar9);
        }
      }
      uVar2 = System_Runtime_Remoting_RemotingServices__Marshal(plVar9,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09182ab8);
      System_Runtime_Remoting_Messaging_MethodResponse___ctor(uVar4,uVar2,0);
      return uVar4;
    }
  }
LAB_0749bdcc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

