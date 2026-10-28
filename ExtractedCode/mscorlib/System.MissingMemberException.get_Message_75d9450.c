// rea decompile_all
// name: System.MissingMemberException$$get_Message
// address: 0x75d9450
// body: available
// range: 0x75d9450-0x75d9537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d951c to 0x7410eb8 SR$$Format (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75d9534 to 0x75eeda0 System.Exception$$get_Message (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_MissingMemberException__get_Message(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09521e99 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09207a38);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09521e99 = 1;
  }
  uVar2 = DAT_09207a38;
  uVar3 = DAT_091f8f68;
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = **(undefined8 **)(DAT_09535468 + 0xb8);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar4 = System_String__Concat(DAT_091f5a98,uVar4,0);
    }
    uVar3 = System_String__Concat(lVar5,uVar3,uVar1,uVar4,0);
    SR__Format(uVar2,uVar3,0);
    return;
  }
  System_Exception__get_Message(param_1,0);
  return;
}

