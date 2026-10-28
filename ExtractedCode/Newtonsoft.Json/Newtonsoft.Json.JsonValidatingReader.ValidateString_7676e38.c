// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$ValidateString
// address: 0x7676e38
// body: available
// range: 0x7676e38-0x76772df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767723c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76772d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76772d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76772dc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076772d8) */

void Newtonsoft_Json_JsonValidatingReader__ValidateString(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_60;
  long **pplStack_58;
  long *local_48;
  
  if ((DAT_095224a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_0917dc80);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_0920dc18);
    FUN_03f5c2a4(&DAT_0920dc20);
    FUN_03f5c2a4(&DAT_0920dc28);
    DAT_095224a2 = 1;
  }
  local_48 = (long *)0x0;
  if (param_2 == 0) {
    return;
  }
  uVar1 = Newtonsoft_Json_JsonValidatingReader__TestType(param_1,param_2,1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  Newtonsoft_Json_JsonValidatingReader__ValidateNotDisallowed(param_1,param_2);
  plVar2 = *(long **)(param_1 + 0x78);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250)),
     plVar2 != (long *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if ((*(ulong *)(param_2 + 0x20) & 0xff) != 0) {
      if (lVar3 == 0) goto LAB_076772d4;
      if ((int)(*(ulong *)(param_2 + 0x20) >> 0x20) < *(int *)(lVar3 + 0x10)) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_60 = *(undefined8 *)(param_2 + 0x20);
        uVar5 = FUN_03f5c42c(DAT_0917dc80,&local_60);
        uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920dc20,uVar4,lVar3,uVar5,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar4);
      }
    }
    if ((*(ulong *)(param_2 + 0x18) & 0xff) != 0) {
      if (lVar3 == 0) goto LAB_076772d4;
      if (*(int *)(lVar3 + 0x10) < (int)(*(ulong *)(param_2 + 0x18) >> 0x20)) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_60 = *(undefined8 *)(param_2 + 0x18);
        uVar5 = FUN_03f5c42c(DAT_0917dc80,&local_60);
        uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920dc28,uVar4,lVar3,uVar5,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar4);
      }
    }
    plVar2 = *(long **)(param_2 + 0x70);
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917a768) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076770cc;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a768,0);
LAB_076770cc:
    plVar2 = (long *)(*(code *)*puVar6)(plVar2,puVar6[1]);
    pplStack_58 = &local_48;
    local_60 = 0;
    do {
      local_48 = plVar2;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07677160;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_07677160:
      uVar1 = (*(code *)*puVar6)(plVar2,puVar6[1]);
      plVar2 = local_48;
      if ((uVar1 & 1) == 0) {
        if (local_48 == (long *)0x0) {
          return;
        }
        lVar3 = *local_48;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 == 0) goto LAB_07677288;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_07677270;
      }
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *local_48;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917ae48) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076771c4;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917ae48,0);
LAB_076771c4:
      uVar4 = (*(code *)*puVar6)(plVar2,puVar6[1]);
      if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_Text_RegularExpressions_Regex__IsMatch(lVar3,uVar4,0);
      plVar2 = local_48;
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920dc18,uVar5,lVar3,uVar4,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar4);
        plVar2 = local_48;
      }
    } while( true );
  }
LAB_076772d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar8 = piVar8 + 4;
    if (uVar1 == 0) break;
LAB_07677270:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076772a4;
    }
  }
LAB_07677288:
  puVar6 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_076772a4:
  (*(code *)*puVar6)(plVar2,puVar6[1]);
  return;
}

