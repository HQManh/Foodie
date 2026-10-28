// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$ReadAttributeElements
// address: 0x771624c
// body: available
// range: 0x771624c-0x7716843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771683c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7716840 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Converters_XmlNodeConverter__ReadAttributeElements
               (undefined8 param_1,long *param_2,long *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_095229d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_0919fe90);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_0918d620);
    FUN_03f5c2a4(&DAT_091f7238);
    FUN_03f5c2a4(&DAT_091f7220);
    FUN_03f5c2a4(&DAT_0921ce18);
    FUN_03f5c2a4(&DAT_091f7240);
    FUN_03f5c2a4(&DAT_0921dec8);
    FUN_03f5c2a4(&DAT_09225c08);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_091f71a8);
    FUN_03f5c2a4(&DAT_091f71e8);
    DAT_095229d4 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  if (param_2 != (long *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    if ((uVar4 & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      do {
        iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar2 != 4) {
          if (iVar2 == 5) {
            return lVar11;
          }
          if (iVar2 == 0xd) {
            return lVar11;
          }
LAB_077167b4:
          FUN_039b1d98(param_2);
          uVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          local_90 = thunk_FUN_03fc39d4(&DAT_09187478);
          uStack_88 = 0xffffffffffffffff;
          local_80 = uVar3;
          uVar7 = System_Enum__ToString(&local_90,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_09211c08);
          uVar7 = System_String__Concat(uVar8,uVar7,0);
          uVar7 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar7,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091e0080);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar8);
        }
        plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar5 == (long *)0x0) goto LAB_07716840;
        lVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        uVar4 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(lVar6,0);
        if ((uVar4 & 1) != 0) {
          return lVar11;
        }
        if (lVar6 == 0) goto LAB_07716840;
        sVar1 = System_String__get_Chars(lVar6,0,0);
        if (sVar1 == 0x24) {
          uVar4 = System_String__op_Equality(lVar6,DAT_091f7240,0);
          if (((((uVar4 & 1) == 0) &&
               (uVar4 = System_String__op_Equality(lVar6,DAT_091f71a8,0), (uVar4 & 1) == 0)) &&
              (uVar4 = System_String__op_Equality(lVar6,DAT_091f71e8,0), (uVar4 & 1) == 0)) &&
             ((uVar4 = System_String__op_Equality(lVar6,DAT_091f7220,0), (uVar4 & 1) == 0 &&
              (uVar4 = System_String__op_Equality(lVar6,DAT_091f7238,0), (uVar4 & 1) == 0)))) {
            return lVar11;
          }
          if (param_3 == (long *)0x0) goto LAB_07716840;
          lVar10 = (**(code **)(*param_3 + 0x248))
                             (param_3,DAT_0921ce18,*(undefined8 *)(*param_3 + 0x250));
          if (lVar10 == 0) {
            if (lVar11 == 0) {
              lVar11 = thunk_FUN_03f9944c(DAT_09176c28);
              FUN_06fd76bc(lVar11,DAT_0919fe90);
            }
            local_70 = 0;
            while( true ) {
              local_78 = local_70;
              uVar7 = FUN_05c3088c(&local_78,DAT_091b6fb0);
              uVar7 = System_String__Concat(DAT_0921dec8,uVar7,0);
              lVar10 = (**(code **)(*param_3 + 0x238))
                                 (param_3,uVar7,*(undefined8 *)(*param_3 + 0x240));
              if (lVar10 == 0) break;
              FUN_05c3078c(&local_70,local_70._4_4_ + 1,DAT_091b6f98);
            }
            local_78 = local_70;
            uVar7 = FUN_05c3088c(&local_78,DAT_091b6fb0);
            lVar10 = System_String__Concat(DAT_0921dec8,uVar7,0);
            uVar7 = System_String__Concat(DAT_09225c08,lVar10,0);
            if (lVar11 == 0) goto LAB_07716840;
            FUN_06fd8454(lVar11,uVar7,DAT_0921ce18,DAT_0919feb8);
            (**(code **)(*param_3 + 0x1f8))
                      (param_3,lVar10,DAT_0921ce18,*(undefined8 *)(*param_3 + 0x200));
          }
          uVar4 = System_String__op_Equality(lVar6,DAT_091f7240,0);
          if ((uVar4 & 1) != 0) {
            return lVar11;
          }
          uVar7 = System_String__Substring(lVar6,1,0);
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          uVar8 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          uVar4 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsPrimitiveToken(uVar8,0);
          if ((uVar4 & 1) == 0) goto LAB_077167b4;
          if (lVar11 == 0) {
            lVar11 = thunk_FUN_03f9944c(DAT_09176c28);
            FUN_06fd76bc(lVar11,DAT_0919fe90);
          }
          plVar5 = (long *)(**(code **)(*param_2 + 0x248))
                                     (param_2,*(undefined8 *)(*param_2 + 0x250));
          if (plVar5 == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          uVar7 = System_String__Concat(lVar10,DAT_091f9f58,uVar7,0);
          if (lVar11 == 0) goto LAB_07716840;
          FUN_06fd8454(lVar11,uVar7,uVar8,DAT_0919feb8);
        }
        else {
          if (sVar1 != 0x40) {
            return lVar11;
          }
          if (lVar11 == 0) {
            lVar11 = thunk_FUN_03f9944c(DAT_09176c28);
            FUN_06fd76bc(lVar11,DAT_0919fe90);
          }
          uVar7 = System_String__Substring(lVar6,1,0);
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
          if (lVar11 == 0) goto LAB_07716840;
          uVar9 = FUN_06fd8454(lVar11,uVar7,uVar8,DAT_0919feb8);
          uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__IsNamespaceAttribute
                            (uVar9,uVar7,&local_68);
          if ((uVar4 & 1) != 0) {
            if (param_3 == (long *)0x0) goto LAB_07716840;
            (**(code **)(*param_3 + 0x1f8))
                      (param_3,local_68,uVar8,*(undefined8 *)(*param_3 + 0x200));
          }
        }
        uVar4 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      } while ((uVar4 & 1) != 0);
    }
    return lVar11;
  }
LAB_07716840:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

