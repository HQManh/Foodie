// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnError
// address: 0x76ae3e0
// body: available
// range: 0x76ae3e0-0x76ae4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ae4e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Newtonsoft_Json_Serialization_JsonContract__InvokeOnError
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((bRam000000000952266e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4238);
    FUN_03f5c2a4(&DAT_091a4240);
    FUN_03f5c2a4(&DAT_091a4248);
    FUN_03f5c2a4(&DAT_091afd98);
    bRam000000000952266e = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_057e185c(&local_58,*(long *)(param_1 + 0x50),_DAT_091afd98);
    while (uVar1 = FUN_071bd28c(&local_58,_DAT_091a4240), (uVar1 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(local_48 + 0x18))
                (*(undefined8 *)(local_48 + 0x40),param_2,param_3,param_4,param_5,
                 *(undefined8 *)(local_48 + 0x28));
    }
    FUN_071bd288(&local_58,_DAT_091a4238);
  }
  return;
}

