// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$RegisterObject
// address: 0x74c3c48
// body: available
// range: 0x74c3c48-0x74c3d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c3d1c to 0x74b05dc System.Runtime.Serialization.ObjectManager$$RegisterString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c3d48 to 0x74b06d8 System.Runtime.Serialization.ObjectManager$$RegisterObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c3d4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3d54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__RegisterObject
               (long param_1,long *param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x100) != '\0') {
      return;
    }
    *(undefined1 *)(param_3 + 0x100) = 1;
    if (param_4 == 0) {
      uVar4 = 0;
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      lVar1 = *(long *)(param_4 + 0xd8);
      uVar4 = *(undefined8 *)(param_4 + 0xa8);
      uVar3 = *(undefined8 *)(param_4 + 0x58);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x2c) != '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberInfo
                          (lVar1,*(undefined8 *)(param_3 + 0x28));
      }
    }
    lVar1 = *(long *)(param_1 + 0x30);
    if ((param_5 & 1) == 0) {
      if (lVar1 != 0) {
        System_Runtime_Serialization_ObjectManager__RegisterObject
                  (lVar1,param_2,*(undefined8 *)(param_3 + 0x58),*(undefined8 *)(param_3 + 0x110),
                   uVar3,uVar2,uVar4,0);
        return;
      }
    }
    else if (lVar1 != 0) {
      if (param_2 != (long *)0x0) {
        if (*param_2 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_2,DAT_09535468,*(undefined8 *)(param_3 + 0x58));
        }
      }
      System_Runtime_Serialization_ObjectManager__RegisterString
                (lVar1,param_2,*(undefined8 *)(param_3 + 0x58),*(undefined8 *)(param_3 + 0x110),
                 uVar3,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

