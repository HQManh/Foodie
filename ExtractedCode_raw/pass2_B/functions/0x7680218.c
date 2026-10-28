// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$AutoComplete
// address: 0x7680218
// body: available
// range: 0x7680218-0x7680427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7680364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7680368 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7680424 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__AutoComplete(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  
  if ((DAT_0952250d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187490);
    DAT_0952250d = 1;
  }
  if (*(int *)(DAT_09187490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = **(long **)(DAT_09187490 + 0xb8);
  if (lVar7 == 0) {
LAB_07680364:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar7 + 0x18) <= param_2) {
LAB_07680368:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar7 = *(long *)(lVar7 + (long)(int)param_2 * 8 + 0x20);
  if (lVar7 == 0) goto LAB_07680364;
  uVar6 = *(uint *)(param_1 + 6);
  if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07680368;
  iVar1 = *(int *)(lVar7 + (long)(int)uVar6 * 4 + 0x20);
  if (iVar1 == 9) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_48 = thunk_FUN_03fc39d4(&DAT_09187478);
    uStack_40 = 0xffffffffffffffff;
    local_38 = param_2;
    uVar3 = System_Enum__ToString(&local_48,0);
    local_60 = thunk_FUN_03fc39d4(&DAT_09192050);
    local_50 = (undefined4)param_1[6];
    uStack_58 = 0xffffffffffffffff;
    uVar4 = System_Enum__ToString(&local_60,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09210a98);
    uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar2,uVar3,uVar4,0);
    uVar2 = Newtonsoft_Json_JsonWriterException__Create(param_1,uVar2,0,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091d1f60);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  if ((uVar6 == 3) || (uVar6 == 5)) {
    if (param_2 == 5) goto LAB_076802f0;
  }
  else if ((param_2 == 5) || (uVar6 != 7)) goto LAB_076802f0;
  (**(code **)(*param_1 + 0x638))(param_1,*(undefined8 *)(*param_1 + 0x640));
LAB_076802f0:
  if (*(int *)((long)param_1 + 0x34) == 1) {
    uVar6 = *(uint *)(param_1 + 6);
    if (uVar6 == 1) {
      (**(code **)(*param_1 + 0x648))(param_1,*(undefined8 *)(*param_1 + 0x650));
      uVar6 = *(uint *)(param_1 + 6);
    }
    if (((uVar6 & 0xfffffffc) == 4) || ((param_2 == 4 && (uVar6 != 0)))) {
      (**(code **)(*param_1 + 0x628))(param_1,*(undefined8 *)(*param_1 + 0x630));
    }
  }
  *(int *)(param_1 + 6) = iVar1;
  return;
}

