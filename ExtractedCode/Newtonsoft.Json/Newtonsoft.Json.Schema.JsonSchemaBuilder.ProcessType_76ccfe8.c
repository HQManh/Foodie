// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$ProcessType
// address: 0x76ccfe8
// body: available
// range: 0x76ccfe8-0x76cd4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cd2cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd378 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd37c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd42c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd4e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd4f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076cd4ec) */
/* WARNING: Removing unreachable block (ram,0x076cd350) */

ulong Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessType(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong local_70;
  undefined8 local_68;
  long **pplStack_60;
  long *local_58;
  ulong local_50;
  ulong local_48;
  
  if ((DAT_09522740 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091b7030);
    FUN_03f5c2a4(&DAT_091b7028);
    FUN_03f5c2a4(&DAT_091b7038);
    DAT_09522740 = 1;
  }
  local_58 = (long *)0x0;
  local_50 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  if (iVar1 == 8) {
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__op_Explicit(param_2,0);
    uVar3 = Newtonsoft_Json_Schema_JsonSchemaBuilder__MapType();
    local_48 = 0;
    FUN_05c30b18(&local_48,uVar3,DAT_091b7028);
    return local_48;
  }
  if (iVar1 != 2) {
    FUN_039b1d98(param_2);
    uVar6 = Newtonsoft_Json_Linq_JToken__get_Path(param_2,0);
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    uVar3 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    local_68 = CONCAT44(local_68._4_4_,uVar3);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09187268);
    uVar8 = FUN_03f5c42c(uVar8,&local_68);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09201e18);
    uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,uVar8,0);
    uVar6 = Newtonsoft_Json_JsonException__Create(param_2,uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d19f0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  FUN_05c30b18(&local_50,0,DAT_091b7028);
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917a5d0) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_076cd154;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5d0,0);
LAB_076cd154:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  pplStack_60 = &local_58;
  local_68 = 0;
  do {
    local_58 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076cd1d8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_076cd1d8:
    uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar5 = local_58;
    if ((uVar11 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return local_50;
      }
      lVar10 = *local_58;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_076cd31c;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *local_58;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917ac98) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076cd23c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917ac98,0);
LAB_076cd23c:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
    uVar11 = local_50;
    if (iVar1 != 8) {
      uVar6 = Newtonsoft_Json_Linq_JToken__get_Path(plVar5,0);
      lVar10 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar3 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      local_70 = CONCAT44(local_70._4_4_,uVar3);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09187268);
      uVar8 = FUN_03f5c42c(uVar8,&local_70);
      uVar9 = thunk_FUN_03fc39d4(&DAT_09201d68);
      uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,uVar8,0);
      uVar6 = Newtonsoft_Json_JsonException__Create(plVar5,uVar6,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091d19f0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__op_Explicit(plVar5,0);
    uVar2 = Newtonsoft_Json_Schema_JsonSchemaBuilder__MapType();
    if ((uVar11 & 0xff) == 0) {
      local_50 = 0;
      plVar5 = local_58;
    }
    else {
      local_70 = 0;
      FUN_05c30b18(&local_70,uVar2 | (uint)(uVar11 >> 0x20),DAT_091b7028);
      plVar5 = local_58;
      local_50 = local_70;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_076cd338;
    }
  }
LAB_076cd31c:
  puVar4 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_076cd338:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return local_50;
}

