// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$op_Explicit
// address: 0x76eb01c
// body: available
// range: 0x76eb01c-0x76eb213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76eb140 to 0x752771c System.Convert$$ToDateTime (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76eb210 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JToken__op_Explicit(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09522856 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09187250);
    DAT_09522856 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  if (*(int *)(DAT_09187250 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = Newtonsoft_Json_Linq_JToken__EnsureValue(param_1);
  if (lVar1 != 0) {
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Linq_JToken__ValidateToken
                      (lVar1,*(undefined8 *)(*(long *)(DAT_09187250 + 0xb8) + 0x48),0);
    if ((uVar2 & 1) != 0) {
      plVar7 = *(long **)(lVar1 + 0x38);
      if (plVar7 != (long *)0x0) {
        if (*plVar7 == DAT_09183590) {
          puVar4 = (undefined8 *)thunk_FUN_03f99594(plVar7);
          uStack_28 = puVar4[1];
          local_30 = *puVar4;
          if (*(int *)(DAT_09183590 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_DateTimeOffset__get_DateTime(&local_30,0);
          return;
        }
      }
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      System_Convert__ToDateTime(plVar7,uVar3,0);
      return;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  thunk_FUN_03fc39d4(&DAT_09187250);
  FUN_039afb80();
  uVar5 = Newtonsoft_Json_Linq_JToken__GetType(param_1);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091fd628);
  uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar3,uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar5 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar5,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d14f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar3);
}

