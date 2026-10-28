// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$ValidatePropertyName
// address: 0x767615c
// body: available
// range: 0x767615c-0x7676317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7676300 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7676314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonValidatingReader__ValidatePropertyName(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((DAT_095224a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0919f4a8);
    FUN_03f5c2a4(&DAT_0919f4d8);
    FUN_03f5c2a4(&DAT_0920af88);
    DAT_095224a8 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x78);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar2 = System_Convert__ToString(uVar2,uVar3,0);
    if ((*(long *)(param_1 + 0x98) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar4 != 0)) {
      uVar5 = FUN_06f823e4(lVar4,uVar2,DAT_0919f4a8);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar4 == 0)) goto LAB_07676314;
        uVar5 = FUN_06f821cc(lVar4,uVar2,1,DAT_0919f4d8);
      }
      if ((*(char *)(param_2 + 0xa1) == '\0') &&
         (uVar5 = Newtonsoft_Json_JsonValidatingReader__IsPropertyDefinied(uVar5,param_2,uVar2),
         (uVar5 & 1) == 0)) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920af88,uVar3,uVar2,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar3);
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x98) + 0x28);
        *puVar6 = uVar2;
        thunk_FUN_03f5d7b8(puVar6,uVar2);
        return;
      }
    }
  }
LAB_07676314:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

