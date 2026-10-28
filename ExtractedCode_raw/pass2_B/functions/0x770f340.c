// rea decompile_all
// name: Newtonsoft.Json.Converters.XElementWrapper$$HasImplicitNamespaceAttribute
// address: 0x770f340
// body: available
// range: 0x770f340-0x770f747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770f728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770f72c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770f730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770f734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770f738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770f740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770f744 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0770f6f8) */
/* WARNING: Removing unreachable block (ram,0x0770f744) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
Newtonsoft_Json_Converters_XElementWrapper__HasImplicitNamespaceAttribute
          (long *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  
  if ((DAT_095229c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7f0);
    FUN_03f5c2a4(&DAT_0917aef0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_09225c00);
    DAT_095229c1 = 1;
  }
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(param_2,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
  if (plVar3 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091869f8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_0770f454;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091869f8,8);
LAB_0770f454:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  uVar2 = System_String__op_Inequality(param_2,uVar5,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar5 = Newtonsoft_Json_Converters_XElementWrapper__GetPrefixOfNamespace(param_1,param_2);
  uVar2 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar5,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Element(param_1);
  if (lVar6 != 0) {
    uVar2 = System_Xml_Linq_XElement__get_HasAttributes(lVar6,0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    lVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Element(param_1);
    if ((lVar6 != 0) &&
       (plVar3 = (long *)System_Xml_Linq_XElement__Attributes(lVar6,0), plVar3 != (long *)0x0)) {
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a7f0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0770f514;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a7f0,0);
LAB_0770f514:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar3 != (long *)0x0) {
        uVar8 = 0;
LAB_0770f550:
        do {
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0770f59c;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0770f59c:
          uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar2 & 1) == 0) {
            if (plVar3 == (long *)0x0) goto LAB_0770f6e8;
            lVar6 = *plVar3;
            uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar2 == 0) goto LAB_0770f6c0;
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_0770f6a8;
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917aef0) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0770f600;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aef0,0);
LAB_0770f600:
          lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = System_String__op_Equality
                            (*(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x18),DAT_09225c00,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = System_Xml_Linq_XName__get_NamespaceName(*(long *)(lVar6 + 0x28),0);
            uVar2 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar5,0);
            if ((uVar2 & 1) != 0) {
              uVar1 = System_String__op_Equality(*(undefined8 *)(lVar6 + 0x30),param_2,0);
              uVar8 = uVar1 | uVar8;
              if (plVar3 == (long *)0x0) break;
              goto LAB_0770f550;
            }
          }
        } while (plVar3 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_0770f6a8:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0770f6dc;
    }
  }
LAB_0770f6c0:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0770f6dc:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_0770f6e8:
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  return 1;
}

