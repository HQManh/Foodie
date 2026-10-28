// rea decompile_all
// name: Newtonsoft.Json.Converters.UnixDateTimeConverter$$WriteJson
// address: 0x770ad18
// body: available
// range: 0x770ad18-0x770af83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770af7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770af80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_UnixDateTimeConverter__WriteJson
               (long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_09522988 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c840);
    DAT_09522988 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (param_3 == (long *)0x0) {
LAB_0770af18:
    thunk_FUN_03fc39d4(&DAT_09187420);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09201e58;
  }
  else {
    if (*param_3 == DAT_09183548) {
      puVar2 = (undefined8 *)thunk_FUN_03f99594(param_3);
      local_38 = *puVar2;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_DateTime__ToUniversalTime(&local_38,0);
      if (*(int *)(DAT_0918c840 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918c840);
      }
      local_48 = System_DateTime__op_Subtraction(uVar3,**(undefined8 **)(DAT_0918c840 + 0xb8),0);
    }
    else {
      if (*param_3 != DAT_09183590) goto LAB_0770af18;
      puVar2 = (undefined8 *)thunk_FUN_03f99594(param_3);
      uStack_58 = puVar2[1];
      local_60 = *puVar2;
      if (*(int *)(DAT_09183590 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar7 = System_DateTimeOffset__ToUniversalTime(&local_60,0);
      if (*(int *)(DAT_0918c840 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar8 = System_DateTimeOffset__op_Implicit(**(undefined8 **)(DAT_0918c840 + 0xb8),0);
      local_48 = System_DateTimeOffset__op_Subtraction
                           (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,0);
    }
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    dVar6 = (double)System_TimeSpan__get_TotalSeconds(&local_48,0);
    lVar1 = -0x8000000000000000;
    if (dVar6 != INFINITY) {
      lVar1 = (long)dVar6;
    }
    if ((-1 < lVar1) || (*(char *)(param_1 + 0x10) != '\0')) {
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x6c8))(param_2,lVar1,*(undefined8 *)(*param_2 + 0x6d0));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09187420);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_091fdb30;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  Newtonsoft_Json_JsonSerializationException___ctor(uVar3,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091ddfb0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

