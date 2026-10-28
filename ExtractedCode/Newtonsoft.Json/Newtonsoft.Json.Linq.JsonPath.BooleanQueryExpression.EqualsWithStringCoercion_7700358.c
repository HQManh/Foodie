// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression$$EqualsWithStringCoercion
// address: 0x7700358
// body: available
// range: 0x7700358-0x77007ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77007a4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77007e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77007f0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77007f8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77007fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0770075c) */
/* WARNING: Removing unreachable block (ram,0x077007f4) */

byte Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__EqualsWithStringCoercion
               (long *param_1,long *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  
  if ((DAT_09522938 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0918c918);
    DAT_09522938 = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_077007e8;
  if ((param_2 != (long *)0x0) &&
     (uVar4 = Newtonsoft_Json_Linq_JValue__ValuesEquals(param_1,param_2), (uVar4 & 1) != 0)) {
    bVar2 = 1;
    goto LAB_077007cc;
  }
  iVar3 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  if (iVar3 == 6) {
    if (param_2 == (long *)0x0) goto LAB_077007e8;
    iVar3 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    if (iVar3 != 7) goto LAB_07700448;
LAB_07700484:
    uVar5 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    iVar3 = Newtonsoft_Json_Linq_JValue__Compare(uVar5,param_1[7],param_2[7]);
    bVar2 = iVar3 == 0;
    goto LAB_077007cc;
  }
LAB_07700448:
  iVar3 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  if (iVar3 == 7) {
    if (param_2 == (long *)0x0) goto LAB_077007e8;
    iVar3 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    if (iVar3 == 6) goto LAB_07700484;
  }
  else if (param_2 == (long *)0x0) goto LAB_077007e8;
  iVar3 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  if (iVar3 != 8) {
    bVar2 = 0;
    goto LAB_077007cc;
  }
  plVar12 = (long *)param_2[7];
  if ((plVar12 != (long *)0x0) && (*plVar12 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar12);
  }
  iVar3 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  bVar2 = 0;
  if (iVar3 < 0xf) {
    if (iVar3 == 0xc) {
      plVar6 = (long *)Newtonsoft_Json_Utilities_StringUtils__CreateStringWriter(0x40,0);
      plVar13 = (long *)param_1[7];
      if ((plVar13 == (long *)0x0) || (*plVar13 != DAT_09183590)) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar7 = (undefined8 *)FUN_039aef84(plVar13,DAT_09183548);
        Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeString(plVar6,*puVar7,0,0,uVar5,0);
      }
      else {
        puVar7 = (undefined8 *)FUN_039aef84(plVar13);
        uVar5 = *puVar7;
        uVar1 = puVar7[1];
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeOffsetString
                  (plVar6,uVar5,uVar1,0,0,uVar8,0);
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185a58) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_07700744;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_07700744:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
    }
    else {
      if (iVar3 != 0xe) goto LAB_077007cc;
      plVar6 = (long *)param_1[7];
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = DAT_0917fc88;
      if (plVar6 == (long *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = thunk_FUN_03f99350(plVar6,DAT_0917fc88);
        if (lVar9 == 0) goto LAB_077007a4;
      }
      uVar5 = System_Convert__ToBase64String(lVar9,0);
    }
  }
  else {
    if (iVar3 != 0xf) {
      if (iVar3 == 0x10) {
        plVar6 = (long *)param_1[7];
        if (plVar6 == (long *)0x0) goto LAB_077007e8;
        lVar10 = DAT_0918c918;
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 + -8) !=
            DAT_0918c918)) {
LAB_077007a4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar6,lVar10);
        }
        uVar5 = System_Uri__get_OriginalString(plVar6,0);
        goto LAB_077007b8;
      }
      if (iVar3 != 0x11) goto LAB_077007cc;
    }
    plVar6 = (long *)param_1[7];
    if (plVar6 == (long *)0x0) {
LAB_077007e8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
LAB_077007b8:
  bVar2 = System_String__Equals(uVar5,plVar12,4,0);
LAB_077007cc:
  return bVar2 & 1;
}

