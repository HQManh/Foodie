// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$InitFullDeserialization
// address: 0x74c1be0
// body: available
// range: 0x74c1be0-0x74c1d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c1d08 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__InitFullDeserialization
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_09521499 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184918);
    FUN_03f5c2a4(&DAT_09188b28);
    FUN_03f5c2a4(&DAT_0918a8c8);
    FUN_03f5c2a4(&DAT_092095b8);
    DAT_09521499 = 1;
  }
  uVar2 = DAT_0918a8c8;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  System_Runtime_Serialization_Formatters_Binary_SerStack___ctor(uVar2,DAT_092095b8,0);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = thunk_FUN_03f9944c(DAT_09188b28);
  System_Runtime_Serialization_ObjectManager___ctor(uVar3,uVar2,uVar1,uVar6,0,0,0);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar3);
  plVar5 = (long *)(param_1 + 0x80);
  if (*plVar5 != 0) {
    return;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09184918);
  System_Runtime_Serialization_FormatterConverter___ctor(lVar4,0);
  *plVar5 = lVar4;
  thunk_FUN_03f5d7b8(plVar5,lVar4);
  return;
}

