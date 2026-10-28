// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$ReadJson
// address: 0x77135c4
// body: available
// range: 0x77135c4-0x7713e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7713d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7713dac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7713df8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Converters_XmlNodeConverter__ReadJson
                 (long param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar12;
  
  if ((DAT_095229cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091885a0);
    FUN_03f5c2a4(&DAT_091735f8);
    FUN_03f5c2a4(&DAT_0918d290);
    FUN_03f5c2a4(&DAT_09173600);
    FUN_03f5c2a4(&DAT_0918d278);
    FUN_03f5c2a4(&DAT_09173608);
    FUN_03f5c2a4(&DAT_0918d298);
    FUN_03f5c2a4(&DAT_09173610);
    FUN_03f5c2a4(&DAT_09173618);
    FUN_03f5c2a4(&DAT_0918d538);
    FUN_03f5c2a4(&DAT_09173668);
    FUN_03f5c2a4(&DAT_0918d518);
    FUN_03f5c2a4(&DAT_09173670);
    FUN_03f5c2a4(&DAT_0918d608);
    FUN_03f5c2a4(&DAT_09173690);
    DAT_095229cc = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_07713d78;
  iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar2 == 1) {
    uVar10 = thunk_FUN_03f9944c(DAT_091885a0);
    System_Xml_NameTable___ctor(uVar10,0);
    uVar11 = thunk_FUN_03f9944c(DAT_0918d608);
    System_Xml_XmlNamespaceManager___ctor(uVar11,uVar10,0);
    uVar10 = DAT_09173618;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
    if (plVar3 == (long *)0x0) goto LAB_07713d78;
    uVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3,param_3,*(undefined8 *)(*plVar3 + 0x2c0));
    uVar10 = DAT_091735f8;
    if ((uVar4 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
      uVar10 = DAT_09173600;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
        uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
        uVar10 = DAT_09173608;
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
          uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
          uVar10 = DAT_09173610;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
            uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
            uVar10 = DAT_09173618;
            if ((uVar4 & 1) != 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
              uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
              if ((uVar4 & 1) != 0) {
                puVar9 = &DAT_092137c0;
                goto LAB_07713d84;
              }
            }
          }
        }
      }
      lVar5 = thunk_FUN_03f9944c(DAT_0918d278);
      System_Xml_Linq_XDocument___ctor(lVar5,0);
      plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918d290);
      System_Object___ctor(plVar3,0);
      plVar3[2] = lVar5;
      thunk_FUN_03f5d7b8(plVar3 + 2,lVar5);
    }
    uVar10 = DAT_09173690;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
    if (plVar6 == (long *)0x0) goto LAB_07713d78;
    uVar4 = (**(code **)(*plVar6 + 0x2b8))(plVar6,param_3,*(undefined8 *)(*plVar6 + 0x2c0));
    uVar10 = DAT_09173668;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
      uVar10 = DAT_09173670;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
        uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
        uVar10 = DAT_09173690;
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
          uVar4 = System_Type__op_Inequality(param_3,uVar10,0);
          if ((uVar4 & 1) != 0) {
            puVar9 = &DAT_092137c8;
            goto LAB_07713d84;
          }
        }
      }
      plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918d518);
      System_Xml_XmlDocument___ctor(plVar6,0);
      if (plVar6 == (long *)0x0) goto LAB_07713d78;
      (**(code **)(*plVar6 + 0x4d8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x4e0));
      plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918d538);
      Newtonsoft_Json_Converters_XmlDocumentWrapper___ctor(plVar3,plVar6);
    }
    if (plVar3 != (long *)0x0) {
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty
                        (*(undefined8 *)(param_1 + 0x10),0);
      if ((uVar4 & 1) == 0) {
        Newtonsoft_Json_Converters_XmlNodeConverter__ReadElement
                  (param_1,param_2,plVar3,plVar3,*(undefined8 *)(param_1 + 0x10),uVar11);
      }
      else {
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeNode
                  (param_1,param_2,plVar3,uVar11,plVar3);
      }
      uVar10 = DAT_09173608;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      uVar4 = System_Type__op_Equality(param_3,uVar10,0);
      uVar10 = DAT_09173670;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
        uVar8 = System_Type__op_Equality(param_3,uVar10,0);
        lVar5 = *plVar3;
        uVar1 = *(ushort *)(lVar5 + 0x12e);
        uVar4 = (ulong)uVar1;
        if ((uVar8 & 1) == 0) {
          if (uVar1 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091869f8) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto LAB_07713d3c;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091869f8,9);
LAB_07713d3c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar7;
          uVar10 = puVar7[1];
        }
        else {
          if (uVar1 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091869d0) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                goto LAB_07713cd0;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091869d0,0xc);
LAB_07713cd0:
          plVar3 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
          if (plVar3 == (long *)0x0) goto LAB_07713d78;
          lVar5 = *plVar3;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091869f8) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto LAB_07713d58;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091869f8,9);
LAB_07713d58:
          UNRECOVERED_JUMPTABLE = (code *)*puVar7;
          uVar10 = puVar7[1];
        }
                    /* WARNING: Could not recover jumptable at 0x07713d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar3,uVar10);
        return plVar3;
      }
      lVar5 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091869d0) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_07713be4;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091869d0,0xc);
LAB_07713be4:
      plVar3 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_091869f8) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_07713c50;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091869f8,9);
LAB_07713c50:
        plVar3 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
        if (plVar3 != (long *)0x0) {
          if ((*(byte *)(DAT_0918d298 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918d298 + 0x130) * 8 + -8)
              == DAT_0918d298)) {
            System_Xml_Linq_XNode__Remove(plVar3,0);
            return plVar3;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar3);
        }
      }
LAB_07713d78:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = thunk_FUN_03fc39d4(&DAT_09211f58);
    if (param_3 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    }
    uVar10 = System_String__Concat(uVar10,uVar11,0);
  }
  else {
    if (iVar2 == 0xb) {
      return (long *)0x0;
    }
    puVar9 = &DAT_092137b0;
LAB_07713d84:
    uVar10 = thunk_FUN_03fc39d4(puVar9);
  }
  uVar10 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar10,0);
  uVar11 = thunk_FUN_03fc39d4(&DAT_091e0090);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar11);
}

