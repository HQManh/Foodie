// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonDynamicContract$$TryGetMember
// address: 0x76af0c8
// body: available
// range: 0x76af0c8-0x76af1d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76af1d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Serialization_JsonDynamicContract__TryGetMember
               (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  long lVar3;
  ulong extraout_x1;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_0952267b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188880);
    FUN_03f5c2a4(&DAT_091bd3d0);
    FUN_03f5c2a4(&DAT_0921ab20);
    DAT_0952267b = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_0921ab20);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = extraout_x1;
  auVar5 = auVar5 << 0x40;
  if (((*(long *)(param_1 + 0xd0) != 0) &&
      (auVar5 = FUN_06361088(*(long *)(param_1 + 0xd0),param_3,DAT_091bd3d0), lVar3 = auVar5._0_8_,
      auVar1._8_8_ = lVar3, auVar1._0_8_ = lVar3, lVar3 != 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x20), auVar5 = auVar1, lVar4 != 0)) {
    lVar3 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),lVar3,param_2,*(undefined8 *)(lVar4 + 0x28));
    if (*(int *)(DAT_09188880 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188880);
    }
    bVar2 = lVar3 != **(long **)(DAT_09188880 + 0xb8);
    if (!bVar2) {
      lVar3 = 0;
    }
    *param_4 = lVar3;
    thunk_FUN_03f5d7b8(param_4);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar5._0_8_,auVar5._8_8_);
}

