// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$op_Explicit
// address: 0x76eb214
// body: available
// range: 0x76eb214-0x76eb437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76eb434 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Newtonsoft_Json_Linq_JToken__op_Explicit(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09522857 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091b6fc8);
    DAT_09522857 = 1;
  }
  if (param_1 != 0) {
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = Newtonsoft_Json_Linq_JToken__EnsureValue(param_1);
    if (lVar2 == 0) {
LAB_076eb3a8:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      thunk_FUN_03fc39d4(&DAT_09187250);
      FUN_039afb80();
      uVar6 = Newtonsoft_Json_Linq_JToken__GetType(param_1);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091fd660);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar4,uVar6,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar6,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091d1498);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar4);
    }
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__ValidateToken
                      (lVar2,*(undefined8 *)(*(long *)(DAT_09187250 + 0xb8) + 0x10),1);
    if ((uVar3 & 1) == 0) goto LAB_076eb3a8;
    plVar8 = *(long **)(lVar2 + 0x38);
    if (plVar8 != (long *)0x0) {
      if (*plVar8 == DAT_09181b78) {
        puVar5 = (undefined8 *)thunk_FUN_03f99594(plVar8);
        uVar4 = *puVar5;
        uVar6 = puVar5[1];
        if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Numerics_BigInteger__op_Explicit(uVar4,uVar6,0);
      }
      else {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        uVar4 = System_Convert__ToInt64(plVar8,uVar4,0);
      }
      local_30 = 0;
      uStack_28 = 0;
      FUN_05c30ed0(&local_30,uVar4,DAT_091b6fc8);
      goto LAB_076eb394;
    }
  }
  local_30 = 0;
  uStack_28 = 0;
LAB_076eb394:
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

