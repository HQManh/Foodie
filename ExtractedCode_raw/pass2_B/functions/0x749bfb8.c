// rea decompile_all
// name: System.Runtime.Remoting.Metadata.SoapMethodAttribute$$SetReflectionObject
// address: 0x749bfb8
// body: available
// range: 0x749bfb8-0x749c1d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749c1c4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x749c1cc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749c1d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Metadata_SoapMethodAttribute__SetReflectionObject
               (long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09521355 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881d0);
    FUN_03f5c2a4(&DAT_0918ae10);
    FUN_03f5c2a4(&DAT_091f6eb0);
    FUN_03f5c2a4(&DAT_09221a90);
    FUN_03f5c2a4(&DAT_0920beb8);
    DAT_09521355 = 1;
  }
  if (param_2 == (long *)0x0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0749c1d0;
  }
  else {
    lVar3 = *param_2;
    if ((*(byte *)(lVar3 + 0x130) < *(byte *)(DAT_091881d0 + 0x130)) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_091881d0 + 0x130) * 8 + -8) !=
        DAT_091881d0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    plVar4 = (long *)(param_1 + 0x28);
    if (*plVar4 == 0) {
      uVar1 = (**(code **)(lVar3 + 0x1b8))(param_2,*(undefined8 *)(lVar3 + 0x1c0));
      lVar3 = System_String__Concat(uVar1,DAT_0920beb8,0);
      *plVar4 = lVar3;
      thunk_FUN_03f5d7b8(plVar4,lVar3);
    }
  }
  plVar4 = (long *)(param_1 + 0x30);
  if (*plVar4 == 0) {
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = System_Runtime_Remoting_SoapServices__GetXmlNamespaceForMethodResponse(param_2,0);
    *plVar4 = lVar3;
    thunk_FUN_03f5d7b8(plVar4,lVar3);
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    *(long *)(param_1 + 0x38) = DAT_09221a90;
    thunk_FUN_03f5d7b8();
  }
  plVar4 = (long *)(param_1 + 0x40);
  if (*plVar4 == 0) {
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Runtime_Remoting_SoapServices__GetXmlNamespaceForMethodCall(param_2,0);
    if (param_2 == (long *)0x0) {
LAB_0749c1d0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    lVar3 = System_String__Concat(uVar1,DAT_091f6eb0,uVar2,0);
    *plVar4 = lVar3;
    thunk_FUN_03f5d7b8(plVar4,lVar3);
  }
  plVar4 = (long *)(param_1 + 0x50);
  if (*plVar4 != 0) {
    return;
  }
  if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_Runtime_Remoting_SoapServices__GetXmlNamespaceForMethodCall(param_2,0);
  *plVar4 = lVar3;
  thunk_FUN_03f5d7b8(plVar4);
  return;
}

