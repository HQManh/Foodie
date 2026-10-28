// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$ProcessValue
// address: 0x7675224
// body: available
// range: 0x7675224-0x76755cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7675520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76755b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76755b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76755bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76755c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76755c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076755c4) */

void Newtonsoft_Json_JsonValidatingReader__ProcessValue(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined4 local_6c;
  undefined8 local_68;
  long **pplStack_60;
  long *local_58;
  
  if ((DAT_095224a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0917a0d8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5e0);
    FUN_03f5c2a4(&DAT_0917acb0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_092049b8);
    DAT_095224a4 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x98);
  local_58 = (long *)0x0;
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x10) != 2) {
    return;
  }
  plVar9 = *(long **)(lVar6 + 0x18);
  *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917a5e0) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07675328;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a5e0,0);
LAB_07675328:
  plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
  pplStack_60 = &local_58;
  local_68 = 0;
joined_r0x07675340:
  do {
    local_58 = plVar9;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076753c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_076753c4:
    uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    plVar9 = local_58;
    if ((uVar7 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return;
      }
      lVar6 = *local_58;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0767556c;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_07675554;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *local_58;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917acb0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07675428;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917acb0,0);
LAB_07675428:
    lVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    plVar9 = local_58;
  } while (((lVar6 == 0) || (*(char *)(lVar6 + 0xa0) == '\0')) || (*(char *)(lVar6 + 0xa2) != '\0'))
  ;
  plVar9 = *(long **)(lVar6 + 0x78);
  if (plVar9 != (long *)0x0) {
    if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar9;
    iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x30);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917a0d8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076754a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a0d8,0);
LAB_076754a8:
    iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    plVar9 = local_58;
    if (iVar1 + -1 < iVar2) goto joined_r0x07675340;
  }
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_6c = *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x30);
  uVar5 = FUN_03f5c42c(DAT_09535420,&local_6c);
  uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_092049b8,uVar4,uVar5,0);
  Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar4);
  plVar9 = local_58;
  goto joined_r0x07675340;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_07675554:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_07675588;
    }
  }
LAB_0767556c:
  puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_07675588:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
  return;
}

