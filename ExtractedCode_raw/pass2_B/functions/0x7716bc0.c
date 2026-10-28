// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$CreateElement
// address: 0x7716bc0
// body: available
// range: 0x7716bc0-0x771715f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771714c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7717150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7717154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7717158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771715c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__CreateElement
               (undefined8 param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
               long *param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095229cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869e0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    FUN_03f5c2a4(&DAT_0918d4d8);
    FUN_03f5c2a4(&DAT_0918d620);
    DAT_095229cf = 1;
  }
  local_70 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  plVar2 = (long *)Newtonsoft_Json_Converters_XmlNodeConverter__CreateElement
                             (param_1,param_5,param_3,param_7,param_6);
  if (param_4 != (long *)0x0) {
    lVar6 = *param_4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_07716d1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_4,DAT_091869f8,7);
LAB_07716d1c:
    (*(code *)*puVar3)(param_4,plVar2,puVar3[1]);
    if (param_8 != 0) {
      FUN_06fd8888(&local_b8,param_8,DAT_0919fed0);
      local_90 = local_b8;
      local_b8 = 0;
      puStack_88 = puStack_b0;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      puStack_b0 = &local_90;
      while (uVar8 = FUN_072753d4(&local_90,DAT_091a6890), uVar10 = uStack_78, uVar5 = local_80,
            (uVar8 & 1) != 0) {
        if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Xml_XmlConvert__EncodeName(uVar5,0);
        uVar5 = Newtonsoft_Json_Utilities_MiscellaneousUtils__GetPrefix(uVar5,0);
        uVar8 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar5,0);
        if ((uVar8 & 1) == 0) {
          if (param_6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = (**(code **)(*param_6 + 0x238))(param_6,uVar5,*(undefined8 *)(*param_6 + 0x240));
          if (lVar6 == 0) {
            lVar6 = **(long **)(DAT_09535468 + 0xb8);
          }
          if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *param_3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_091869d0) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                goto LAB_07716ecc;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,0xb);
LAB_07716ecc:
          uVar5 = (*(code *)*puVar3)(param_3,uVar4,lVar6,uVar10,puVar3[1]);
        }
        else {
          if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *param_3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_091869d0) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 10) * 0x10 + 0x138);
                goto LAB_07716ea4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,10);
LAB_07716ea4:
          uVar5 = (*(code *)*puVar3)(param_3,uVar4,uVar10,puVar3[1]);
        }
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091869e0) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07716f38;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091869e0,0);
LAB_07716f38:
        (*(code *)*puVar3)(plVar2,uVar5,puVar3[1]);
      }
      FUN_072754f4(&local_90,DAT_091a6888);
    }
    if (param_2 == (long *)0x0) goto LAB_0771715c;
    uVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (uVar1 < 0x12) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = Newtonsoft_Json_Converters_XmlNodeConverter__ConvertTokenToXmlValue(param_2);
        if (lVar6 == 0) {
          return;
        }
        if (param_3 != (long *)0x0) {
          lVar7 = *param_3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_091869d0) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_07717034;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,1);
LAB_07717034:
          uVar5 = (*(code *)*puVar3)(param_3,lVar6,puVar3[1]);
          if (plVar2 != (long *)0x0) {
            lVar6 = *plVar2;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_091869f8) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                  goto LAB_0771709c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091869f8,7);
LAB_0771709c:
            (*(code *)*puVar3)(plVar2,uVar5,puVar3[1]);
            return;
          }
        }
        goto LAB_0771715c;
      }
      if (uVar1 == 0xb) {
        return;
      }
      if (uVar1 == 0xd) {
        if (param_6 == (long *)0x0) goto LAB_0771715c;
        goto LAB_077170ec;
      }
    }
    if (param_6 != (long *)0x0) {
      (**(code **)(*param_6 + 0x1d8))(param_6,*(undefined8 *)(*param_6 + 0x1e0));
      Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeNode
                (param_1,param_2,param_3,param_6,plVar2);
      (**(code **)(*param_6 + 0x1e8))(param_6,*(undefined8 *)(*param_6 + 0x1f0));
LAB_077170ec:
      uVar10 = **(undefined8 **)(DAT_09535468 + 0xb8);
      uVar5 = (**(code **)(*param_6 + 0x1c8))(param_6,*(undefined8 *)(*param_6 + 0x1d0));
      (**(code **)(*param_6 + 0x208))(param_6,uVar10,uVar5,*(undefined8 *)(*param_6 + 0x210));
      return;
    }
  }
LAB_0771715c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

