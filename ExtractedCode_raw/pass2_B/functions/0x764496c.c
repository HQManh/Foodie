// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadAsString
// address: 0x764496c
// body: available
// range: 0x764496c-0x7644bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7644a18 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7644bf4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_JsonReader__ReadAsString(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  int *piVar11;
  uint local_24;
  
  if ((DAT_09522303 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185c00);
    FUN_03f5c2a4(&DAT_0918c918);
    DAT_09522303 = 1;
  }
  uVar1 = Newtonsoft_Json_JsonReader__GetContentToken(param_1);
  if ((int)uVar1 < 10) {
    if (uVar1 == 0) {
      return (long *)0x0;
    }
    if (uVar1 == 9) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      if (*plVar3 == DAT_09535468) {
        return plVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
  }
  else {
    if (uVar1 == 0xb) {
      return (long *)0x0;
    }
    if (uVar1 == 0xe) {
      return (long *)0x0;
    }
  }
  uVar2 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsPrimitiveToken(uVar1,0);
  if (((uVar2 & 1) == 0) ||
     (plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250)),
     plVar3 == (long *)0x0)) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_24 = uVar1;
    uVar7 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar7 = FUN_03f5c42c(uVar7,&local_24);
    uVar8 = thunk_FUN_03fc39d4(&DAT_092019b0);
    uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar5,uVar7,0);
    uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar5);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d1940);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
  plVar4 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185c00);
  if (plVar4 == (long *)0x0) {
    lVar9 = *plVar3;
    if ((*(byte *)(lVar9 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 + -8) !=
        DAT_0918c918)) {
      plVar3 = (long *)(**(code **)(lVar9 + 0x168))(plVar3,*(undefined8 *)(lVar9 + 0x170));
    }
    else {
      plVar3 = (long *)System_Uri__get_OriginalString(plVar3,0);
    }
  }
  else {
    uVar5 = Newtonsoft_Json_JsonReader__get_Culture(param_1);
    lVar9 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185c00) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07644b04;
        }
        uVar2 = uVar2 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185c00,0);
LAB_07644b04:
    plVar3 = (long *)(*(code *)*puVar6)(plVar4,0,uVar5,puVar6[1]);
  }
  param_1[3] = (long)plVar3;
  *(undefined4 *)(param_1 + 2) = 9;
  thunk_FUN_03f5d7b8(param_1 + 3,plVar3);
  uVar10 = 8;
  if (((int)param_1[5] == 0) && (uVar10 = 0xc, *(char *)((long)param_1 + 0x71) != '\0')) {
    uVar10 = 8;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar10;
  return plVar3;
}

