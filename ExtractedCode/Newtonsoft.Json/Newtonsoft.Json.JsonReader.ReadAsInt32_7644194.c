// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadAsInt32
// address: 0x7644194
// body: available
// range: 0x7644194-0x764446b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7644460 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7644468 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonReader__ReadAsInt32(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint local_34;
  undefined8 local_28;
  
  if ((DAT_09522301 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091b6f98);
    DAT_09522301 = 1;
  }
  uVar2 = Newtonsoft_Json_JsonReader__GetContentToken(param_1);
  if (0xe < uVar2) {
LAB_076443e8:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_34 = uVar2;
    uVar8 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar8 = FUN_03f5c42c(uVar8,&local_34);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09201998);
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar4,uVar8,0);
    uVar4 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar4);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091d1938);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar8);
  }
  uVar1 = 1 << (ulong)(uVar2 & 0x1f);
  if ((uVar1 & 0x4801) != 0) {
    return 0;
  }
  if ((uVar1 & 0x180) == 0) {
    if (uVar2 == 9) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar3 != (long *)0x0) && (*plVar3 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
      uVar4 = Newtonsoft_Json_JsonReader__ReadInt32String(param_1,plVar3);
      return uVar4;
    }
    goto LAB_076443e8;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  if (plVar3 == (long *)0x0) {
LAB_07644264:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Convert__ToInt32(plVar3,uVar4,0);
  }
  else {
    if (*plVar3 == DAT_09535420) {
      puVar6 = (uint *)thunk_FUN_03f99594(plVar3);
      uVar2 = *puVar6;
      goto LAB_0764439c;
    }
    if (*plVar3 != DAT_09181b78) goto LAB_07644264;
    puVar7 = (undefined8 *)thunk_FUN_03f99594(plVar3);
    uVar4 = *puVar7;
    uVar8 = puVar7[1];
    if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Numerics_BigInteger__op_Explicit(uVar4,uVar8,0);
  }
  local_34 = uVar2;
  lVar5 = FUN_03f5c42c(DAT_09535420,&local_34);
  param_1[3] = lVar5;
  *(undefined4 *)(param_1 + 2) = 7;
  thunk_FUN_03f5d7b8(param_1 + 3,lVar5);
  uVar10 = 8;
  if (((int)param_1[5] == 0) && (uVar10 = 0xc, *(char *)((long)param_1 + 0x71) != '\0')) {
    uVar10 = 8;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar10;
LAB_0764439c:
  local_28 = 0;
  FUN_05c3078c(&local_28,uVar2,DAT_091b6f98);
  return local_28;
}

