// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ReadInteropXml
// address: 0x7484ffc
// body: available
// range: 0x7484ffc-0x748519f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748516c to 0x7485ea8 System.Runtime.Remoting.SoapServices$$RegisterInteropXmlElement (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7485194 to 0x748603c System.Runtime.Remoting.SoapServices$$RegisterInteropXmlType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7485198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748519c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ReadInteropXml
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0952127e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5c70);
    FUN_03f5c2a4(&DAT_0918ae10);
    FUN_03f5c2a4(&DAT_091dc128);
    FUN_03f5c2a4(&DAT_09225bd8);
    param_1 = FUN_03f5c2a4(&DAT_09218e10);
    DAT_0952127e = 1;
  }
  uVar1 = System_Runtime_Remoting_ConfigHandler__GetNotNull(param_1,param_2,DAT_09218e10);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar1 = FUN_03f5c738(uVar1,DAT_091dc128,DAT_091c5c70);
  lVar2 = System_Runtime_Remoting_ConfigHandler__GetNotNull(uVar1,param_2,DAT_09225bd8);
  if ((lVar2 != 0) && (lVar2 = System_String__Split(lVar2,0x2c,0,0), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0748519c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      uVar3 = System_String__Trim(*(long *)(lVar2 + 0x20),0);
      if (*(ulong *)(lVar2 + 0x18) == 0) {
        uVar4 = 0;
      }
      else {
        if ((*(ulong *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0748519c;
        if (*(long *)(lVar2 + 0x28) == 0) goto LAB_07485198;
        uVar4 = System_String__Trim(*(long *)(lVar2 + 0x28),0);
      }
      if ((param_3 & 1) != 0) {
        if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Runtime_Remoting_SoapServices__RegisterInteropXmlElement(uVar3,uVar4,uVar1);
        return;
      }
      if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_Remoting_SoapServices__RegisterInteropXmlType(uVar3,uVar4,uVar1);
      return;
    }
  }
LAB_07485198:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

