// rea decompile_all
// name: System.Runtime.Remoting.Metadata.SoapTypeAttribute$$SetReflectionObject
// address: 0x749c21c
// body: available
// range: 0x749c21c-0x749c463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749c454 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x749c458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749c460 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Metadata_SoapTypeAttribute__SetReflectionObject
               (long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((DAT_09521356 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ae10);
    DAT_09521356 = 1;
  }
  if (param_2 == (long *)0x0) {
    if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
       (*(long *)(param_1 + 0x48) != 0)) goto LAB_0749c41c;
  }
  else {
    lVar4 = *param_2;
    if ((*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_095354b8 + 0x130)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_095354b8 + 0x130) * 8 + -8) !=
        DAT_095354b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    plVar6 = (long *)(param_1 + 0x30);
    if (*plVar6 == 0) {
      lVar4 = (**(code **)(lVar4 + 0x1b8))(param_2,*(undefined8 *)(lVar4 + 0x1c0));
      *plVar6 = lVar4;
      thunk_FUN_03f5d7b8(plVar6,lVar4);
    }
    if (*(long *)(param_1 + 0x40) == 0) {
      if (param_2 == (long *)0x0) goto LAB_0749c458;
      uVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      *(undefined8 *)(param_1 + 0x40) = uVar1;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),uVar1);
      if (*(long *)(param_1 + 0x48) != 0) goto LAB_0749c41c;
    }
    else {
      if (*(long *)(param_1 + 0x48) != 0) goto LAB_0749c41c;
      if (param_2 == (long *)0x0) goto LAB_0749c458;
    }
    uVar1 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
    lVar4 = DAT_095353e8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    plVar6 = (long *)System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
    if (plVar6 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
      uVar3 = System_Reflection_Assembly__op_Equality(uVar1,uVar2,0);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)(**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
        if ((plVar6 == (long *)0x0) ||
           (lVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0)),
           lVar4 == 0)) goto LAB_0749c458;
        puVar5 = (undefined8 *)(lVar4 + 0x10);
      }
      else {
        puVar5 = *(undefined8 **)(DAT_09535468 + 0xb8);
      }
      uVar2 = *puVar5;
      uVar1 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
      if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ae10);
      }
      uVar1 = System_Runtime_Remoting_SoapServices__CodeXmlNamespaceForClrTypeNamespace
                        (uVar1,uVar2,0);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar1);
LAB_0749c41c:
      plVar6 = (long *)(param_1 + 0x38);
      if (*plVar6 == 0) {
        *plVar6 = *(long *)(param_1 + 0x48);
        thunk_FUN_03f5d7b8(plVar6);
        return;
      }
      return;
    }
  }
LAB_0749c458:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

