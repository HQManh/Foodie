// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadAsDateTimeOffset
// address: 0x7646ac0
// body: available
// range: 0x7646ac0-0x7646d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7646d34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7646d38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7646d3c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7646d44 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader__ReadAsDateTimeOffset(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_0952230f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b6c60);
    DAT_0952230f = 1;
  }
  iVar1 = Newtonsoft_Json_JsonReader__GetContentToken(param_2);
  if (iVar1 < 10) {
    if (iVar1 != 0) {
      if (iVar1 == 9) {
        plVar2 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2);
        }
        Newtonsoft_Json_JsonReader__ReadDateTimeOffsetString(&local_48,param_2,plVar2);
        param_1[1] = uStack_40;
        *param_1 = local_48;
        param_1[2] = local_38;
        return;
      }
LAB_07646cb4:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      local_48 = CONCAT44(local_48._4_4_,iVar1);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar6 = FUN_03f5c42c(uVar6,&local_48);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09201980);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
      uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_2,uVar5);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d1920);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
  }
  else if (iVar1 != 0xb) {
    if (iVar1 == 0x10) {
      plVar2 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if ((plVar2 != (long *)0x0) && (*plVar2 == DAT_09183548)) {
        puVar3 = (undefined8 *)thunk_FUN_03f99594();
        local_48 = 0;
        uStack_40 = 0;
        System_DateTimeOffset___ctor(&local_48,*puVar3,0);
        uStack_28 = uStack_40;
        local_30 = local_48;
        lVar4 = FUN_03f5c42c(DAT_09183590,&local_30);
        param_2[3] = lVar4;
        *(undefined4 *)(param_2 + 2) = 0x10;
        thunk_FUN_03f5d7b8(param_2 + 3,lVar4);
        uVar8 = 8;
        if (((int)param_2[5] == 0) && (uVar8 = 0xc, *(char *)((long)param_2 + 0x71) != '\0')) {
          uVar8 = 8;
        }
        *(undefined4 *)((long)param_2 + 0x24) = uVar8;
      }
      plVar2 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(long *)(*plVar2 + 0x40) == *(long *)(DAT_09183590 + 0x40)) {
          puVar3 = (undefined8 *)thunk_FUN_03f99594();
          FUN_05c2caec(param_1,*puVar3,puVar3[1],DAT_091b6c60);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (iVar1 != 0xe) goto LAB_07646cb4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

