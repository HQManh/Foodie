// rea decompile_all
// name: System.Runtime.Remoting.Activation.ActivationServices$$Activate
// address: 0x749999c
// body: available
// range: 0x749999c-0x7499bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7499bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7499bc4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7499bd0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_Activation_ActivationServices__Activate(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  
  if ((DAT_0952134a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185860);
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_091860b0);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_0952134a = 1;
  }
  if (param_2 != 0) {
    *(long *)(param_2 + 0x98) = param_1;
    thunk_FUN_03f5d7b8((long *)(param_2 + 0x98),param_1);
    lVar2 = System_Threading_Thread__get_CurrentContext(0);
    if (lVar2 != 0) {
      uVar3 = System_Runtime_Remoting_Contexts_Context__get_HasExitSinks();
      if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x90) != '\0')) {
        lVar2 = System_Runtime_Remoting_Activation_ActivationServices__RemoteActivate(param_2);
      }
      else {
        lVar2 = System_Threading_Thread__get_CurrentContext(0);
        if ((lVar2 == 0) ||
           (plVar6 = (long *)System_Runtime_Remoting_Contexts_Context__GetClientContextSinkChain(),
           plVar6 == (long *)0x0)) goto LAB_07499bb8;
        lVar2 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09186090) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07499ba4;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186090,0);
LAB_07499ba4:
        lVar2 = (*(code *)*puVar7)(plVar6,param_2,puVar7[1]);
      }
      lVar4 = thunk_FUN_03f99350(lVar2,DAT_09185860);
      uVar8 = DAT_09185860;
      if (lVar4 != 0) {
        if (lVar2 == 0) goto LAB_07499bb8;
        lVar5 = thunk_FUN_03f99350(lVar2,DAT_09185860);
        lVar4 = DAT_091860b0;
        uVar1 = DAT_09185860;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar2,uVar8);
        }
        plVar6 = (long *)thunk_FUN_03f99350(lVar2,DAT_09185860);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar2,uVar1);
        }
        lVar5 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar4) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07499ad0;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,lVar4,0);
LAB_07499ad0:
        lVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar4 == 0) {
          if (param_1 == 0) goto LAB_07499bb8;
          if (*(long *)(param_1 + 0x38) == 0) {
            if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity(param_2,0);
            System_Runtime_Remoting_Proxies_RemotingProxy__AttachIdentity(param_1,uVar8,0);
          }
        }
      }
      return lVar2;
    }
  }
LAB_07499bb8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

