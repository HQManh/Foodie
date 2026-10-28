// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.FieldFilter.<ExecuteFilter>d__2$$MoveNext
// address: 0x76faf38
// body: available
// range: 0x76faf38-0x76fb003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fb000 to 0x89db648 FUN_089db648 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  
  if ((DAT_09522915 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_0917a928);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091a9848);
    DAT_09522915 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x38);
  if (iVar1 == 2) goto LAB_076fb2a8;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
      uVar2 = FUN_089db648(**(undefined8 **)(param_1 + 0x28));
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_076fb0a0:
  do {
    plVar11 = *(long **)(param_1 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076fb0f4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_076fb0f4:
    uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__<>m__Finally1();
      *(undefined8 *)(param_1 + 0x50) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
      return 0;
    }
    plVar11 = *(long **)(param_1 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917ac98) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076fb160;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917ac98,0);
LAB_076fb160:
    plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
    if (plVar11 == (long *)0x0) {
LAB_076fb1a0:
      cVar6 = '\0';
      if (*(long *)(param_1 + 0x40) != 0) {
        cVar6 = *(char *)(*(long *)(param_1 + 0x40) + 0x20);
      }
      if (cVar6 != '\0') {
        lVar8 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920af98);
          lVar12 = thunk_FUN_03fc39d4(&DAT_091f8568);
        }
        else {
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920af98);
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar11 = (long *)System_Object__GetType(plVar11,0);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar2,lVar12,uVar5,0);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar4 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar4,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091ea090);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar2);
      }
      goto LAB_076fb0a0;
    }
    if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
        DAT_09187220)) goto LAB_076fb1a0;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar2 = Newtonsoft_Json_Linq_JObject__GetEnumerator(plVar11);
      *(undefined8 *)(param_1 + 0x58) = uVar2;
      thunk_FUN_03f5d7b8();
LAB_076fb2a8:
      plVar11 = *(long **)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_076fb304;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_076fb304:
      uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if ((uVar9 & 1) != 0) {
        plVar11 = *(long **)(param_1 + 0x58);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar12 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 == 0) goto LAB_076fb38c;
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        break;
      }
      Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__<>m__Finally2();
      *(undefined8 *)(param_1 + 0x58) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
    }
    else {
      lVar8 = Newtonsoft_Json_Linq_JObject__get_Item(plVar11,*(long *)(lVar12 + 0x10),0);
      if (lVar8 != 0) {
        *(long *)(param_1 + 0x18) = lVar8;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x18));
        uVar7 = 1;
        goto LAB_076fb3c4;
      }
      cVar6 = '\0';
      if (*(long *)(param_1 + 0x40) != 0) {
        cVar6 = *(char *)(*(long *)(param_1 + 0x40) + 0x20);
      }
      if (cVar6 != '\0') {
        lVar8 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar5 = *(undefined8 *)(lVar12 + 0x10);
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920af80);
        uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar2,uVar5,0);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar4 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar4,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091ea090);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar2);
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == DAT_0917a928) {
      puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076fb3a8;
    }
  }
LAB_076fb38c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a928,0);
LAB_076fb3a8:
  (*(code *)*puVar3)(plVar11,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = extraout_x1;
  thunk_FUN_03f5d7b8();
  uVar7 = 2;
LAB_076fb3c4:
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  return 1;
}

