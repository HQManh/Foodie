// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
// address: 0x76b65a8
// body: available
// range: 0x76b65a8-0x76b6b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b6ad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b6b4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
          (long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
          undefined8 *param_10)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  if ((DAT_095226ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186440);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091f7220);
    FUN_03f5c2a4(&DAT_091f7240);
    FUN_03f5c2a4(&DAT_0920be60);
    FUN_03f5c2a4(&DAT_091f71a8);
    FUN_03f5c2a4(&DAT_091f71e8);
    DAT_095226ad = 1;
  }
  *param_10 = 0;
  thunk_FUN_03f5d7b8(param_10,0);
  *param_9 = 0;
  thunk_FUN_03f5d7b8(param_9,0);
  if (param_2 == (long *)0x0) {
LAB_076b6ad8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar2 == 4) {
    plVar3 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if ((plVar3 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)), lVar4 == 0)
       ) goto LAB_076b6ad8;
    if (0 < *(int *)(lVar4 + 0x10)) {
      sVar1 = System_String__get_Chars(lVar4,0,0);
      if (sVar1 != 0x24) {
        return 0;
      }
      do {
        plVar3 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar3 == (long *)0x0) goto LAB_076b6ad8;
        uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        uVar6 = System_String__Equals(uVar5,DAT_091f71e8,4,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = System_String__Equals(uVar5,DAT_091f7220,4,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = System_String__Equals(uVar5,DAT_091f71a8,4,0);
            if ((uVar6 & 1) == 0) {
              uVar6 = System_String__Equals(uVar5,DAT_091f7240,4,0);
              if ((uVar6 & 1) == 0) {
                return 0;
              }
              Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
              lVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList
                                (param_1,param_2,*param_3,*param_4,param_5,param_8,*param_10);
              Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
              *param_9 = lVar4;
              thunk_FUN_03f5d7b8(param_9,lVar4);
              return 1;
            }
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            plVar3 = (long *)(**(code **)(*param_2 + 0x248))
                                       (param_2,*(undefined8 *)(*param_2 + 0x250));
            if (plVar3 == (long *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            }
            *param_10 = uVar5;
            thunk_FUN_03f5d7b8(param_10);
          }
          else {
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            plVar3 = (long *)(**(code **)(*param_2 + 0x248))
                                       (param_2,*(undefined8 *)(*param_2 + 0x250));
            if (plVar3 == (long *)0x0) goto LAB_076b6ad8;
            uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar5);
          }
LAB_076b68ac:
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        }
        else {
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          if ((iVar2 != 9) &&
             (iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
             iVar2 != 0xb)) {
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            puVar10 = &DAT_09206338;
LAB_076b6b00:
            uVar8 = thunk_FUN_03fc39d4(puVar10);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091f71e8);
            uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar5,uVar9);
            uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
            uVar8 = thunk_FUN_03fc39d4(&DAT_091d1b70);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar8);
          }
          plVar3 = (long *)(**(code **)(*param_2 + 0x248))
                                     (param_2,*(undefined8 *)(*param_2 + 0x250));
          if (plVar3 == (long *)0x0) goto LAB_076b68ac;
          lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          if (lVar4 != 0) {
            iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
            if (iVar2 == 4) {
              thunk_FUN_03fc39d4(&DAT_09182ff8);
              FUN_039afb80();
              uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              puVar10 = &DAT_091fb548;
              goto LAB_076b6b00;
            }
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar7 = Newtonsoft_Json_JsonSerializer__GetReferenceResolver
                                  (*(long *)(param_1 + 0x20),0), lVar7 != 0)) {
              lVar7 = FUN_039bd200(0,DAT_09186440,lVar7,param_1,lVar4);
              *param_9 = lVar7;
              thunk_FUN_03f5d7b8(param_9,lVar7);
              if (*(long *)(param_1 + 0x28) == 0) {
                return 1;
              }
              iVar2 = FUN_039afee4(0,DAT_09186850);
              if (iVar2 < 3) {
                return 1;
              }
              lVar7 = *(long *)(param_1 + 0x28);
              uVar5 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182ff8);
              }
              uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (*param_9 != 0) {
                uVar9 = System_Object__GetType(*param_9,0);
                uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                                  (DAT_0920be60,uVar8,lVar4,uVar9);
                if (*(int *)(DAT_09187398 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09187398);
                }
                uVar9 = thunk_FUN_03f99350(param_2,DAT_09185f18);
                uVar5 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar9,uVar5,uVar8,0);
                if (lVar7 != 0) {
                  FUN_03ebc3ec(1,DAT_09186850,lVar7,3,uVar5,0);
                  return 1;
                }
              }
            }
            goto LAB_076b6ad8;
          }
        }
        iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      } while (iVar2 == 4);
    }
  }
  return 0;
}

