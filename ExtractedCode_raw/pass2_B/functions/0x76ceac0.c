// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$MapType
// address: 0x76ceac0
// body: available
// range: 0x76ceac0-0x76cec23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cebac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cec20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Newtonsoft_Json_Schema_JsonSchemaBuilder__MapType(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 local_24;
  
  if ((DAT_09522741 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a200);
    FUN_03f5c2a4(&DAT_091873d0);
    DAT_09522741 = 1;
  }
  local_24 = 0;
  if (*(int *)(DAT_091873d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar7 = (long *)**(undefined8 **)(DAT_091873d0 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a200) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
        goto LAB_076ceb80;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a200,7);
LAB_076ceb80:
  uVar5 = (*(code *)*puVar1)(plVar7,param_1,&local_24,puVar1[1]);
  if ((uVar5 & 1) != 0) {
    return local_24;
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_09205248);
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar3,uVar2,param_1,0);
  thunk_FUN_03fc39d4(&DAT_09187348);
  uVar3 = thunk_FUN_03f9944c();
  Newtonsoft_Json_JsonException___ctor(uVar3,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d19d0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

