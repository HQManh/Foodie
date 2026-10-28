// rea decompile_all
// name: System.Runtime.Remoting.SoapServices$$CodeXmlNamespaceForClrTypeNamespace
// address: 0x748c2fc
// body: available
// range: 0x748c2fc-0x748c487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748c3b8 to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x748c484 to 0x748c488 System.Runtime.Remoting.SoapServices$$EncodeNs (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_SoapServices__CodeXmlNamespaceForClrTypeNamespace
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((DAT_095212c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ae10);
    FUN_03f5c2a4(&DAT_091f9400);
    DAT_095212c0 = 1;
  }
  uVar1 = System_String__op_Equality(param_2,**(undefined8 **)(DAT_09535468 + 0xb8),0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((DAT_095212be & 1) == 0) {
      FUN_03f5c2a4(&DAT_0921ce30);
      DAT_095212be = 1;
    }
    System_String__Concat(DAT_0921ce30,param_1,0);
    return;
  }
  uVar1 = System_String__op_Equality(param_1,**(undefined8 **)(DAT_09535468 + 0xb8),0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((DAT_095212bf & 1) == 0) {
      FUN_03f5c2a4(&DAT_0921ce38);
      DAT_095212bf = 1;
    }
    System_String__Concat(DAT_0921ce38,param_1,DAT_091f9400,param_2,0);
  }
  else {
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((DAT_095212bd & 1) == 0) {
      FUN_03f5c2a4(&DAT_0921ce28);
      DAT_095212bd = 1;
    }
    System_String__Concat(DAT_0921ce28,param_2,0);
  }
  System_Runtime_Remoting_SoapServices__EncodeNs();
  return;
}

