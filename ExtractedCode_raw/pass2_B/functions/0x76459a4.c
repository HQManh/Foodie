// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadAsBoolean
// address: 0x76459a4
// body: available
// range: 0x76459a4-0x7645ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7645c38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7645c3c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7645cc0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7645cc8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 Newtonsoft_Json_JsonReader__ReadAsBoolean(long *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  long *plVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int local_2c;
  byte local_28 [4];
  undefined2 local_24 [2];
  
  if ((DAT_09522309 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091b6a48);
    DAT_09522309 = 1;
  }
  iVar3 = Newtonsoft_Json_JsonReader__GetContentToken(param_1);
  if (iVar3 < 10) {
    if (1 < iVar3 - 7U) {
      if (iVar3 == 0) {
        return 0;
      }
      if (iVar3 == 9) {
        plVar4 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        uVar2 = Newtonsoft_Json_JsonReader__ReadBooleanString(param_1,plVar4);
        return uVar2;
      }
LAB_07645c40:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      local_2c = iVar3;
      uVar9 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar9 = FUN_03f5c42c(uVar9,&local_2c);
      uVar10 = thunk_FUN_03fc39d4(&DAT_09201970);
      uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar10,uVar8,uVar9,0);
      uVar8 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar8);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091d1908);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar9);
    }
    plVar4 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if ((plVar4 == (long *)0x0) || (*plVar4 != DAT_09181b78)) {
      uVar8 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      bVar1 = System_Convert__ToBoolean(uVar8,uVar9,0);
    }
    else {
      puVar6 = (undefined8 *)thunk_FUN_03f99594();
      uVar8 = *puVar6;
      uVar9 = puVar6[1];
      if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar1 = System_Numerics_BigInteger__op_Inequality(uVar8,uVar9,0,0);
    }
    bVar1 = bVar1 & 1;
    local_28[0] = bVar1;
    lVar7 = FUN_03f5c42c(DAT_09535400,local_28);
    param_1[3] = lVar7;
    *(undefined4 *)(param_1 + 2) = 10;
    thunk_FUN_03f5d7b8(param_1 + 3,lVar7);
    uVar11 = 8;
    if (((int)param_1[5] == 0) && (uVar11 = 0xc, *(char *)((long)param_1 + 0x71) != '\0')) {
      uVar11 = 8;
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar11;
    local_24[0] = 0;
  }
  else {
    if (iVar3 != 10) {
      if (iVar3 == 0xe) {
        return 0;
      }
      if (iVar3 == 0xb) {
        return 0;
      }
      goto LAB_07645c40;
    }
    plVar4 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    local_24[0] = 0;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_09535400 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    pbVar5 = (byte *)thunk_FUN_03f99594();
    bVar1 = *pbVar5;
  }
  FUN_05c290f8(local_24,bVar1,DAT_091b6a48);
  return local_24[0];
}

