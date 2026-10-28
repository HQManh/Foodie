// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$ProcessProperties
// address: 0x76cd574
// body: available
// range: 0x76cd574-0x76cdab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cd960 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd968 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd96c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd9ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd9f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cd9f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdaac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cdab4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076cdab0) */

long * Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessProperties(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 local_68;
  long **pplStack_60;
  long *local_58;
  
  if ((DAT_0952273e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fac8);
    FUN_03f5c2a4(&DAT_09176b58);
    FUN_03f5c2a4(&DAT_0917a1e8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187230);
    DAT_0952273e = 1;
  }
  local_58 = (long *)0x0;
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_09176b58);
  FUN_06fd76bc(plVar3,DAT_0919fac8);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  if (iVar1 != 1) {
    FUN_039b1d98(param_2);
    uVar6 = Newtonsoft_Json_Linq_JToken__get_Path(param_2,0);
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    uVar2 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    local_68 = CONCAT44(local_68._4_4_,uVar2);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09187268);
    uVar8 = FUN_03f5c42c(uVar8,&local_68);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09201d70);
    uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,uVar8,0);
    uVar6 = Newtonsoft_Json_JsonException__Create(param_2,uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d19e8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917a5d0) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_076cd6a4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5d0,0);
LAB_076cd6a4:
  local_58 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  pplStack_60 = &local_58;
  local_68 = 0;
  do {
    plVar5 = local_58;
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *local_58;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076cd738;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,0);
LAB_076cd738:
    uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar5 = local_58;
    if ((uVar11 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return plVar3;
      }
      lVar10 = *local_58;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_076cd910;
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
          goto LAB_076cd79c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917ac98,0);
LAB_076cd79c:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09187230 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8) !=
        DAT_09187230)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar5);
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *plVar3;
    lVar13 = plVar5[0xc];
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a1e8) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_076cd834;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a1e8,4);
LAB_076cd834:
    uVar11 = (*(code *)*puVar4)(plVar3,lVar13,puVar4[1]);
    if ((uVar11 & 1) != 0) {
      lVar10 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      lVar10 = plVar5[0xc];
      uVar7 = thunk_FUN_03fc39d4(&DAT_0920b050);
      uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar6,lVar10,0);
      thunk_FUN_03fc39d4(&DAT_09187348);
      uVar7 = thunk_FUN_03f9944c();
      Newtonsoft_Json_JsonException___ctor(uVar7,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d19e8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar6);
    }
    lVar13 = plVar5[0xc];
    uVar6 = Newtonsoft_Json_Linq_JProperty__get_Value(plVar5,0);
    uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__BuildSchema(param_1,uVar6);
    lVar10 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a1e8) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_076cd8b8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a1e8,5);
LAB_076cd8b8:
    (*(code *)*puVar4)(plVar3,lVar13,uVar6,puVar4[1]);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_076cd92c;
    }
  }
LAB_076cd910:
  puVar4 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_076cd92c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return plVar3;
}

