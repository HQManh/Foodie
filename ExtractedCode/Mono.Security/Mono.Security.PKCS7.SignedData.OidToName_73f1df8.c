// rea decompile_all
// name: Mono.Security.PKCS7.SignedData$$OidToName
// address: 0x73f1df8
// body: available
// range: 0x73f1df8-0x73f1fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Security_PKCS7_SignedData__OidToName(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if ((DAT_09520e1a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f9c50);
    FUN_03f5c2a4(&DAT_0920c360);
    FUN_03f5c2a4(&DAT_0920c358);
    FUN_03f5c2a4(&DAT_091f9c70);
    FUN_03f5c2a4(&DAT_091f99c8);
    FUN_03f5c2a4(&DAT_091f99b8);
    FUN_03f5c2a4(&DAT_0920c350);
    FUN_03f5c2a4(&DAT_091f9a88);
    FUN_03f5c2a4(&DAT_09207308);
    FUN_03f5c2a4(&DAT_09207318);
    FUN_03f5c2a4(&DAT_0920c368);
    FUN_03f5c2a4(&DAT_091f9c18);
    DAT_09520e1a = 1;
  }
  uVar1 = System_String__op_Equality(param_2,DAT_091f9a88,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = System_String__op_Equality(param_2,DAT_091f99b8,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = System_String__op_Equality(param_2,DAT_091f99c8,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = System_String__op_Equality(param_2,DAT_091f9c18,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = System_String__op_Equality(param_2,DAT_091f9c50,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = System_String__op_Equality(param_2,DAT_091f9c70,0);
            if ((uVar1 & 1) != 0) {
              return DAT_0920c368;
            }
            return param_2;
          }
          puVar2 = &DAT_0920c360;
        }
        else {
          puVar2 = &DAT_0920c358;
        }
      }
      else {
        puVar2 = &DAT_09207318;
      }
    }
    else {
      puVar2 = &DAT_09207308;
    }
  }
  else {
    puVar2 = &DAT_0920c350;
  }
  return *puVar2;
}

