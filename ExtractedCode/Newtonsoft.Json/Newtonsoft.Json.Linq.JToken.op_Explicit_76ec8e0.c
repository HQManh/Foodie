// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$op_Explicit
// address: 0x76ec8e0
// body: available
// range: 0x76ec8e0-0x76ecaff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ecafc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Newtonsoft_Json_Linq_JToken__op_Explicit(undefined8 param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09522862 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_09187250);
    DAT_09522862 = 1;
  }
  if (*(int *)(DAT_09187250 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = Newtonsoft_Json_Linq_JToken__EnsureValue(param_1);
  if (lVar2 != 0) {
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Linq_JToken__ValidateToken
                      (lVar2,*(undefined8 *)(*(long *)(DAT_09187250 + 0xb8) + 0x28),0);
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_03f99350(*(undefined8 *)(lVar2 + 0x38),DAT_0917fc88);
      if (lVar4 == 0) {
        plVar9 = *(long **)(lVar2 + 0x38);
        if ((plVar9 == (long *)0x0) || (*plVar9 != DAT_09184f30)) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          uVar5 = System_Convert__ToString(plVar9,uVar5,0);
          local_30 = 0;
          uStack_28 = 0;
          System_Guid___ctor(&local_30,uVar5,0);
        }
        else {
          puVar6 = (undefined8 *)thunk_FUN_03f99594(plVar9);
          uStack_28 = puVar6[1];
          local_30 = *puVar6;
        }
      }
      else {
        local_30 = 0;
        uStack_28 = 0;
        System_Guid___ctor(&local_30,lVar4,0);
      }
      auVar1._8_8_ = uStack_28;
      auVar1._0_8_ = local_30;
      return auVar1;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  thunk_FUN_03fc39d4(&DAT_09187250);
  FUN_039afb80();
  uVar7 = Newtonsoft_Json_Linq_JToken__GetType(param_1);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091fd648);
  uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar5,uVar7,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar7 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar7,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d1510);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar5);
}

