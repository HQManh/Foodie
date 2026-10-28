// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ParseTime
// address: 0x74854a4
// body: available
// range: 0x74854a4-0x74857bb inclusive
// range: 0x7485804-0x7485843 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7485630 to 0x75cdbc8 System.TimeSpan$$FromDays (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x748567c to 0x75cde68 System.TimeSpan$$FromHours (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74856c8 to 0x75cdf2c System.TimeSpan$$FromMinutes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7485714 to 0x75ce03c System.TimeSpan$$FromSeconds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7485760 to 0x75cdecc System.TimeSpan$$FromMilliseconds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74857a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7485840 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ParseTime(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09521277 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f4258);
    FUN_03f5c2a4(&DAT_0920c1d8);
    FUN_03f5c2a4(&DAT_09203a58);
    FUN_03f5c2a4(&DAT_092074d8);
    FUN_03f5c2a4(&DAT_091ffb80);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09207248);
    DAT_09521277 = 1;
  }
  uVar2 = System_String__op_Equality(param_2,DAT_091f5700,0);
  if ((param_2 == 0) || ((uVar2 & 1) != 0)) {
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09205af8);
    System_Runtime_Remoting_RemotingException___ctor(uVar3,uVar4);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c5c58);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  uVar3 = FUN_03f5c394(DAT_0917fcc8,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar3,DAT_091f4258,0);
  iVar1 = System_String__IndexOfAny(param_2,uVar3,0);
  uVar3 = DAT_0920c1d8;
  if (iVar1 != -1) {
    uVar3 = System_String__Substring(param_2,iVar1,0);
    param_2 = System_String__Substring(param_2,0,iVar1,0);
  }
  uVar4 = System_Double__Parse(param_2,0);
  uVar2 = System_String__op_Equality(uVar3,DAT_091ffb80,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_TimeSpan__FromDays(uVar4,0);
    return;
  }
  uVar2 = System_String__op_Equality(uVar3,DAT_09203a58,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_TimeSpan__FromHours(uVar4,0);
    return;
  }
  uVar2 = System_String__op_Equality(uVar3,DAT_09207248,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_TimeSpan__FromMinutes(uVar4,0);
    return;
  }
  uVar2 = System_String__op_Equality(uVar3,DAT_0920c1d8,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_TimeSpan__FromSeconds(uVar4,0);
    return;
  }
  uVar2 = System_String__op_Equality(uVar3,DAT_092074d8,0);
  if ((uVar2 & 1) == 0) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09205af0);
    uVar3 = System_String__Concat(uVar4,uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar4 = thunk_FUN_03f9944c();
    System_Runtime_Remoting_RemotingException___ctor(uVar4,uVar3);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c5c58);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_TimeSpan__FromMilliseconds(uVar4,0);
  return;
}

