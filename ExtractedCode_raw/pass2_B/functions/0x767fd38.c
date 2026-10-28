// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$WriteToken
// address: 0x767fd38
// body: available
// range: 0x767fd38-0x767ff3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767fefc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767ff38 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__WriteToken
               (undefined8 param_1,long *param_2,uint param_3,ulong param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar5 = param_1;
  if ((DAT_0952250a & 1) == 0) {
    uVar5 = FUN_03f5c2a4(&DAT_092001d8);
    DAT_0952250a = 1;
  }
  iVar1 = Newtonsoft_Json_JsonWriter__CalculateWriteTokenInitialDepth(uVar5,param_2);
  do {
    if ((param_4 & 1) == 0) goto LAB_0767fe04;
    if (param_2 == (long *)0x0) goto LAB_0767fefc;
    iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar2 == 3) {
      plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      uVar5 = 0;
      if (plVar6 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      uVar7 = System_String__Equals(uVar5,DAT_092001d8,4,0);
      if ((uVar7 & 1) == 0) goto LAB_0767fe04;
      Newtonsoft_Json_JsonWriter__WriteConstructorDate(param_1,param_2);
    }
    else {
LAB_0767fe04:
      if ((param_5 & 1) == 0) {
        if (param_2 == (long *)0x0) goto LAB_0767fefc;
        iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar2 == 5) goto LAB_0767fe6c;
      }
      else if (param_2 == (long *)0x0) {
LAB_0767fefc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      uVar5 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      Newtonsoft_Json_JsonWriter__WriteToken(param_1,uVar3,uVar5);
    }
LAB_0767fe6c:
    iVar2 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    uVar5 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    uVar4 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsEndToken(uVar5,0);
    if ((((int)(iVar2 - (uVar4 & 1)) <= iVar1 + -1) || ((param_3 & 1) == 0)) ||
       (uVar7 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290)),
       (uVar7 & 1) == 0)) {
      uVar7 = Newtonsoft_Json_JsonWriter__IsWriteTokenIncomplete(param_1,param_2,param_3 & 1,iVar1);
      if ((uVar7 & 1) != 0) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_09211d30);
        uVar5 = Newtonsoft_Json_JsonWriterException__Create(param_1,uVar5,0,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091d1fc0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar8);
      }
      return;
    }
  } while( true );
}

