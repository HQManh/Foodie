// rea decompile_all
// name: Newtonsoft.Json.Converters.DataTableConverter$$CreateRow
// address: 0x7704d14
// body: available
// range: 0x7704d14-0x770523b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770522c to 0x7a2ca10 System.Data.DataRowCollection$$Add (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7705230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705238 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_DataTableConverter__CreateRow
               (long *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  
  if ((DAT_0952295b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_09183158);
    FUN_03f5c2a4(&DAT_09183218);
    FUN_03f5c2a4(&DAT_09171438);
    FUN_03f5c2a4(&DAT_091832d8);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeab0);
    FUN_03f5c2a4(&DAT_091aeb08);
    FUN_03f5c2a4(&DAT_0917c7e0);
    DAT_0952295b = 1;
  }
  if ((param_2 != 0) && (lVar3 = System_Data_DataTable__NewRow(param_2,0), param_1 != (long *)0x0))
  {
    Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
    iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (iVar2 == 4) {
      do {
        plVar4 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
        if (*(long *)(param_2 + 0x40) == 0) goto LAB_07705230;
        lVar5 = System_Data_DataColumnCollection__get_Item(*(long *)(param_2 + 0x40),plVar4,0);
        if (lVar5 == 0) {
          uVar6 = Newtonsoft_Json_Converters_DataTableConverter__GetColumnDataType(param_1);
          lVar5 = thunk_FUN_03f9944c(DAT_09183218);
          System_Data_DataColumn___ctor(lVar5,plVar4,uVar6,0);
          if ((*(long *)(param_2 + 0x40) == 0) ||
             (System_Data_DataColumnCollection__Add(*(long *)(param_2 + 0x40),lVar5,0), lVar5 == 0))
          goto LAB_07705230;
        }
        uVar6 = DAT_09171438;
        uVar14 = *(undefined8 *)(lVar5 + 0x38);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
        uVar7 = System_Type__op_Equality(uVar14,uVar6,0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(lVar5 + 0x38) == 0) goto LAB_07705230;
          uVar7 = System_Type__get_IsArray(*(long *)(lVar5 + 0x38),0);
          uVar6 = DAT_09170bb0;
          if ((uVar7 & 1) != 0) {
            uVar14 = *(undefined8 *)(lVar5 + 0x38);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
            uVar7 = System_Type__op_Inequality(uVar14,uVar6,0);
            if ((uVar7 & 1) != 0) {
              iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
              if (iVar2 == 2) {
                Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
              }
              plVar8 = (long *)thunk_FUN_03f9944c(DAT_0917c7e0);
              FUN_057e0400(plVar8,DAT_091aeab0);
              while (iVar2 = (**(code **)(*param_1 + 0x238))
                                       (param_1,*(undefined8 *)(*param_1 + 0x240)), iVar2 != 0xe) {
                uVar6 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
                lVar12 = DAT_091aeac8;
                if (plVar8 == (long *)0x0) goto LAB_07705230;
                lVar11 = plVar8[2];
                *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_07705230;
                uVar1 = *(uint *)(plVar8 + 3);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(plVar8 + 3) = uVar1 + 1;
                  *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(plVar8,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
              }
              plVar9 = *(long **)(lVar5 + 0x38);
              if ((plVar9 != (long *)0x0) &&
                 (uVar6 = (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450)),
                 plVar8 != (long *)0x0)) {
                lVar5 = System_Array__CreateInstance(uVar6,(int)plVar8[3],0);
                lVar12 = *plVar8;
                uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == DAT_091857d8) {
                      puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_077051d8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar10 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091857d8,0);
LAB_077051d8:
                (*(code *)*puVar10)(plVar8,lVar5,0,puVar10[1]);
                goto joined_r0x077051ec;
              }
              goto LAB_07705230;
            }
          }
          lVar12 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
          if (lVar12 != 0) {
            if (param_3 == 0) goto LAB_07705230;
            lVar5 = Newtonsoft_Json_JsonSerializer__Deserialize
                              (param_3,param_1,*(undefined8 *)(lVar5 + 0x38),0);
            if (lVar5 != 0) goto joined_r0x077051ec;
          }
          if (*(int *)(DAT_09183158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = **(long **)(DAT_09183158 + 0xb8);
        }
        else {
          iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
          if (iVar2 == 2) {
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
          }
          lVar5 = thunk_FUN_03f9944c(DAT_091832d8);
          System_Data_DataTable___ctor(lVar5,0);
          while (iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240)),
                iVar2 != 0xe) {
            Newtonsoft_Json_Converters_DataTableConverter__CreateRow(param_1,lVar5,param_3);
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
          }
        }
joined_r0x077051ec:
        if (lVar3 == 0) goto LAB_07705230;
        System_Data_DataRow__set_Item(lVar3,plVar4,lVar5,0);
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_1,0);
        iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      } while (iVar2 == 4);
    }
    else if (lVar3 == 0) goto LAB_07705230;
    System_Data_DataRow__EndEdit(lVar3,0);
    if (*(long *)(param_2 + 0x38) != 0) {
      System_Data_DataRowCollection__Add(*(long *)(param_2 + 0x38),lVar3,0);
      return;
    }
  }
LAB_07705230:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

