// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadAsDateTime
// address: 0x764659c
// body: available
// range: 0x764659c-0x764682f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764681c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7646820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7646824 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x764682c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Newtonsoft_Json_JsonReader__ReadAsDateTime(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_0952230d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b6c38);
    DAT_0952230d = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  iVar1 = Newtonsoft_Json_JsonReader__GetContentToken(param_1);
  if (iVar1 < 10) {
    if (iVar1 != 0) {
      if (iVar1 == 9) {
        plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar3 != (long *)0x0) && (*plVar3 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar3);
        }
        auVar9 = Newtonsoft_Json_JsonReader__ReadDateTimeString(param_1,plVar3);
        return auVar9;
      }
LAB_07646790:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      local_48 = CONCAT44(local_48._4_4_,uVar2);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar7 = FUN_03f5c42c(uVar7,&local_48);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09201980);
      uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,uVar7,0);
      uVar6 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar6);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091d1918);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
  }
  else if (iVar1 != 0xb) {
    if (iVar1 == 0x10) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar3 != (long *)0x0) && (*plVar3 == DAT_09183590)) {
        puVar4 = (undefined8 *)thunk_FUN_03f99594();
        uStack_38 = puVar4[1];
        local_40 = *puVar4;
        if (*(int *)(DAT_09183590 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_48 = System_DateTimeOffset__get_DateTime(&local_40,0);
        lVar5 = FUN_03f5c42c(DAT_09183548,&local_48);
        param_1[3] = lVar5;
        *(undefined4 *)(param_1 + 2) = 0x10;
        thunk_FUN_03f5d7b8(param_1 + 3,lVar5);
        uVar2 = 8;
        if (((int)param_1[5] == 0) && (uVar2 = 0xc, *(char *)((long)param_1 + 0x71) != '\0')) {
          uVar2 = 8;
        }
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
      }
      plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      local_30 = 0;
      uStack_28 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(long *)(*plVar3 + 0x40) == *(long *)(DAT_09183548 + 0x40)) {
          puVar4 = (undefined8 *)thunk_FUN_03f99594();
          FUN_05c2c6a4(&local_30,*puVar4,DAT_091b6c38);
          auVar9._8_8_ = uStack_28;
          auVar9._0_8_ = local_30;
          return auVar9;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (iVar1 != 0xe) goto LAB_07646790;
  }
  return ZEXT816(0);
}

