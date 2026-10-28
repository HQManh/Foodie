// rea decompile_all
// name: System.Runtime.Serialization.ObjectManager$$RecordArrayElementFixup
// address: 0x74b15a0
// body: available
// range: 0x74b15a0-0x74b16f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b1634 to 0x74b10e4 System.Runtime.Serialization.ObjectManager$$RegisterFixup (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b16a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b16f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_ObjectManager__RecordArrayElementFixup
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0952141b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184708);
    DAT_0952141b = 1;
  }
  if ((0 < param_2) && (0 < param_4)) {
    if (param_3 != 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_09184708);
      System_Runtime_Serialization_FixupHolder___ctor(uVar2,param_4,param_3,1,0);
      System_Runtime_Serialization_ObjectManager__RegisterFixup(param_1,uVar2,param_2,param_4);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921d448);
    System_ArgumentNullException___ctor(uVar2,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d4f60);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar4);
  }
  puVar1 = &DAT_09220230;
  if (param_2 < 1) {
    puVar1 = &DAT_09220238;
  }
  uVar2 = thunk_FUN_03fc39d4(puVar1);
  uVar4 = thunk_FUN_03fc39d4(&DAT_092093f0);
  uVar4 = System_Environment__GetResourceString(uVar4,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar3 = thunk_FUN_03f9944c();
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar2,uVar4,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d4f60);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

