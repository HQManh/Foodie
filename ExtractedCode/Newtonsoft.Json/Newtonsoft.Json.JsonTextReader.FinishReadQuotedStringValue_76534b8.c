// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$FinishReadQuotedStringValue
// address: 0x76534b8
// body: available
// range: 0x76534b8-0x765370b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76536f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7653700 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7653708 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__FinishReadQuotedStringValue(long *param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  puVar2 = &local_60;
  if ((DAT_095223b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0917dc40);
    FUN_03f5c2a4(&DAT_0917dc38);
    DAT_095223b0 = 1;
  }
  if (1 < param_2 - 3U) {
    if (param_2 == 6) {
      plVar1 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar1 == (long *)0x0) || (*plVar1 != DAT_09183548)) {
        plVar1 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar1 != (long *)0x0) && (*plVar1 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar1);
        }
        local_40 = Newtonsoft_Json_JsonReader__ReadDateTimeString(param_1,plVar1);
        puVar2 = (undefined8 *)local_40;
        lVar4 = DAT_0917dc38;
      }
      else {
        puVar2 = (undefined8 *)thunk_FUN_03f99594();
        local_40._0_8_ = *puVar2;
        puVar2 = (undefined8 *)local_40;
        lVar4 = DAT_09183548;
      }
    }
    else {
      if (param_2 != 7) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_092215d8);
        System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091d1c00);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar6);
      }
      plVar1 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar1 == (long *)0x0) || (*plVar1 != DAT_09183590)) {
        plVar1 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar1 != (long *)0x0) && (*plVar1 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar1);
        }
        Newtonsoft_Json_JsonReader__ReadDateTimeOffsetString(local_40,param_1,plVar1);
        uStack_58 = local_40._8_8_;
        local_60 = local_40._0_8_;
        local_50 = local_30;
        lVar4 = DAT_0917dc40;
        puVar2 = &local_60;
      }
      else {
        pauVar3 = (undefined1 (*) [16])thunk_FUN_03f99594();
        uStack_58 = *(undefined8 *)(*pauVar3 + 8);
        local_60 = *(undefined8 *)*pauVar3;
        local_40 = *pauVar3;
        lVar4 = DAT_09183590;
      }
    }
    FUN_03f5c42c(lVar4,puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x076535e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  return;
}

