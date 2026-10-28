// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter$$GetTypeInformation
// address: 0x74bd324
// body: available
// range: 0x74bd324-0x74bd51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bd510 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bd514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bd518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074bd50c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__GetTypeInformation
          (undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char local_54 [4];
  undefined8 local_50;
  char local_44 [4];
  
  if ((DAT_0952146b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c60);
    FUN_03f5c2a4(&DAT_091a0e10);
    FUN_03f5c2a4(&DAT_091a0e18);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918c268);
    DAT_0952146b = 1;
  }
  local_44[0] = '\0';
  local_50 = 0;
  local_54[0] = '\0';
  if (*(int *)(DAT_09181c60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_44[0] = '\0';
  uVar2 = **(undefined8 **)(DAT_09181c60 + 0xb8);
  System_Threading_Monitor__Enter(uVar2,local_44,0);
  local_50 = 0;
  if (*(int *)(DAT_09181c60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09181c60 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = FUN_06fd9fbc(**(long **)(DAT_09181c60 + 0xb8),param_1,&local_50,DAT_091a0e18);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09184940 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Runtime_Serialization_FormatterServices__GetClrAssemblyName(param_1,local_54,0);
    uVar5 = System_Runtime_Serialization_FormatterServices__GetClrTypeFullName(param_1,0);
    cVar1 = local_54[0];
    uVar6 = thunk_FUN_03f9944c(DAT_0918c268);
    System_Runtime_Serialization_Formatters_Binary_TypeInformation___ctor
              (uVar6,uVar5,uVar4,cVar1 != '\0');
    local_50 = uVar6;
    if (*(int *)(DAT_09181c60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09181c60 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8454(**(long **)(DAT_09181c60 + 0xb8),param_1,local_50,DAT_091a0e10);
  }
  uVar4 = local_50;
  if (local_44[0] != '\0') {
    System_Threading_Monitor__Exit(uVar2,0);
  }
  return uVar4;
}

