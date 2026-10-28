// rea decompile_all
// name: System.Security.Principal.WindowsIdentity$$System.Runtime.Serialization.ISerializable.GetObjectData
// address: 0x747933c
// body: available
// range: 0x747933c-0x7479497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7479494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Principal_WindowsIdentity__System_Runtime_Serialization_ISerializable_GetObjectData
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_4c;
  undefined8 local_48;
  
  if ((DAT_0952122f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918d090);
    FUN_03f5c2a4(&DAT_0921f020);
    FUN_03f5c2a4(&DAT_0921f008);
    FUN_03f5c2a4(&DAT_0921efe0);
    FUN_03f5c2a4(&DAT_0921f018);
    FUN_03f5c2a4(&DAT_0921eff8);
    DAT_0952122f = 1;
  }
  local_48 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = FUN_03f5c42c(DAT_09535430,&local_48);
  if (param_2 != 0) {
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0921f020,uVar1,0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_0921f008,*(undefined8 *)(param_1 + 0x90),0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_0921f018,*(undefined8 *)(param_1 + 0x80),0);
    local_4c = *(undefined4 *)(param_1 + 0x88);
    uVar1 = FUN_03f5c42c(DAT_0918d090,&local_4c);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0921efe0,uVar1,0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_0921eff8,*(undefined1 *)(param_1 + 0x8c),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

