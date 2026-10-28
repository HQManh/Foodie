// rea decompile_all
// name: Newtonsoft.Json.Converters.DataSetConverter$$ReadJson
// address: 0x7703f6c
// body: available
// range: 0x7703f6c-0x770423b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7704228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704230 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7704238 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Converters_DataSetConverter__ReadJson
                 (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09522957 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171420);
    FUN_03f5c2a4(&DAT_091832b8);
    FUN_03f5c2a4(&DAT_091832f0);
    FUN_03f5c2a4(&DAT_09171438);
    FUN_03f5c2a4(&DAT_091832d8);
    DAT_09522957 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_07704228:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  uVar2 = DAT_09171420;
  if (iVar1 == 0xb) {
    plVar6 = (long *)0x0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar3 = System_Type__op_Equality(param_3,uVar2,0);
    if ((uVar3 & 1) == 0) {
      plVar6 = (long *)System_Activator__CreateInstance(param_3,0);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_091832b8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_091832b8 + 0x130) * 8 + -8) !=
            DAT_091832b8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar6);
        }
      }
    }
    else {
      plVar6 = (long *)thunk_FUN_03f9944c(DAT_091832b8);
      System_Data_DataSet___ctor(plVar6,0);
    }
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_091832f0);
    Newtonsoft_Json_JsonConverter___ctor(plVar4,0);
    Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 == 4) {
      if (plVar6 == (long *)0x0) goto LAB_07704228;
      do {
        lVar7 = plVar6[5];
        plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (lVar7 == 0) goto LAB_07704228;
        if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09535468)) {
LAB_0770422c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
        lVar7 = System_Data_DataTableCollection__get_Item(lVar7,plVar5,0);
        uVar2 = DAT_09171438;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
        if (plVar4 == (long *)0x0) goto LAB_07704228;
        plVar5 = (long *)(**(code **)(*plVar4 + 0x188))
                                   (plVar4,param_2,uVar2,lVar7,param_5,
                                    *(undefined8 *)(*plVar4 + 400));
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_091832d8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091832d8 + 0x130) * 8 + -8)
              != DAT_091832d8)) goto LAB_0770422c;
        }
        if (lVar7 == 0) {
          if (plVar6[5] == 0) goto LAB_07704228;
          System_Data_DataTableCollection__Add(plVar6[5],plVar5,0);
        }
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      } while (iVar1 == 4);
    }
  }
  return plVar6;
}

