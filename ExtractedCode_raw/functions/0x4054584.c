// rea decompile_all
// name: AFMiniJSON.Json.Parser$$get_NextToken
// address: 0x4054584
// body: available
// range: 0x4054584-0x405474b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4054748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AFMiniJSON_Json_Parser__get_NextToken(long param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  if ((DAT_09515b35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_0921b558);
    FUN_03f5c2a4(&DAT_09224438);
    DAT_09515b35 = 1;
  }
  AFMiniJSON_Json_Parser__EatWhitespace(param_1);
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_04054748;
  iVar2 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
  if (iVar2 == -1) {
    return 0;
  }
  uVar1 = AFMiniJSON_Json_Parser__get_PeekChar(param_1);
  if (0x5b < uVar1) {
    if (uVar1 == 0x5d) {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        return 4;
      }
LAB_04054748:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (uVar1 == 0x7b) {
      return 1;
    }
    if (uVar1 == 0x7d) {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        return 2;
      }
      goto LAB_04054748;
    }
    goto switchD_04054624_caseD_23;
  }
  uVar6 = 5;
  switch(uVar1) {
  case 0x22:
    uVar6 = 7;
    break;
  case 0x2c:
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_04054748;
    (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    uVar6 = 6;
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar6 = 8;
    break;
  case 0x3a:
    break;
  default:
    if (uVar1 == 0x5b) {
      return 3;
    }
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
switchD_04054624_caseD_23:
    uVar4 = AFMiniJSON_Json_Parser__get_NextWord(param_1);
    uVar5 = System_String__op_Equality(uVar4,DAT_0921b558,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = System_String__op_Equality(uVar4,DAT_09224438,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = System_String__op_Equality(uVar4,DAT_09220040,0);
        uVar6 = 0xb;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 9;
      }
    }
    else {
      uVar6 = 10;
    }
  }
  return uVar6;
}

