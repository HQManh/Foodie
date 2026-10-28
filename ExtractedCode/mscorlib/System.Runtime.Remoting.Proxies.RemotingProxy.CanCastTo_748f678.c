// rea decompile_all
// name: System.Runtime.Remoting.Proxies.RemotingProxy$$CanCastTo
// address: 0x748f678
// body: available
// range: 0x748f678-0x748f883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748f880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Proxies_RemotingProxy__CanCastTo
          (long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_095212e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091825d0);
    FUN_03f5c2a4(&DAT_09186468);
    FUN_03f5c2a4(&DAT_09172338);
    DAT_095212e6 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    if ((*(byte *)(DAT_091825d0 + 0x130) <= *(byte *)(lVar6 + 0x130)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_091825d0 + 0x130) * 8 + -8) ==
        DAT_091825d0)) {
      plVar1 = (long *)(**(code **)(lVar6 + 0x178))(plVar1,0,*(undefined8 *)(lVar6 + 0x180));
      if (plVar1 == (long *)0x0) goto LAB_0748f880;
      uVar3 = System_Runtime_Remoting_ObjRef__get_IsReferenceToWellKnow();
      if ((uVar3 & 1) != 0) {
        if (param_2 == (long *)0x0) goto LAB_0748f880;
        uVar3 = System_Type__get_IsInterface(param_2,0);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        uVar4 = System_Runtime_Remoting_Proxies_RealProxy__GetProxiedType(param_1);
        uVar2 = DAT_09172338;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
        uVar3 = System_Type__op_Equality(uVar4,uVar2,0);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
      lVar6 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
      if (lVar6 != 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
        if (plVar1 != (long *)0x0) {
          lVar6 = *plVar1;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09186468) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0748f85c;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09186468,1);
LAB_0748f85c:
                    /* WARNING: Could not recover jumptable at 0x0748f87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)*puVar5)(plVar1,param_2,param_3,puVar5[1]);
          return uVar2;
        }
        goto LAB_0748f880;
      }
    }
  }
  uVar2 = System_Runtime_Remoting_Proxies_RealProxy__GetProxiedType(param_1);
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0748f738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2,uVar2,*(undefined8 *)(*param_2 + 0x2c0));
    return uVar2;
  }
LAB_0748f880:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

