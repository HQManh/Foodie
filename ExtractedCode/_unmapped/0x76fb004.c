// rea decompile_all
// name: FUN_076fb004
// address: 0x76fb004
// body: available
// range: 0x76fb004-0x76fb077 inclusive
// range: 0x76fb084-0x76fb4cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fb270 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb3d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb3d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb44c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb4c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fb4c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 FUN_076fb004(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *in_x10;
  int *piVar10;
  long *plVar11;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long in_stack_00000018;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_076fb04c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8();
LAB_076fb04c:
  uVar3 = (*(code *)*puVar2)();
  *(undefined8 *)(in_stack_00000018 + 0x50) = uVar3;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
LAB_076fb0a0:
  do {
    plVar11 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076fb0f4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,*unaff_x22,0);
LAB_076fb0f4:
    uVar9 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__<>m__Finally1();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar11 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076fb160;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,*unaff_x23,0);
LAB_076fb160:
    plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
    if (plVar11 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x24)) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(unaff_x21 + 0x10) == 0) {
          uVar3 = Newtonsoft_Json_Linq_JObject__GetEnumerator(plVar11);
          *(undefined8 *)(in_stack_00000018 + 0x58) = uVar3;
          thunk_FUN_03f5d7b8();
          plVar11 = *(long **)(in_stack_00000018 + 0x58);
          *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x22) {
                puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_076fb304;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar11,*unaff_x22,0);
LAB_076fb304:
          uVar9 = (*(code *)*puVar2)(plVar11,puVar2[1]);
          if ((uVar9 & 1) != 0) {
            plVar11 = *(long **)(in_stack_00000018 + 0x58);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_076fb38c;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            break;
          }
          Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__<>m__Finally2();
          *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(in_stack_00000018 + 0x58),0);
        }
        else {
          lVar8 = Newtonsoft_Json_Linq_JObject__get_Item(plVar11,*(long *)(unaff_x21 + 0x10),0);
          if (lVar8 != 0) {
            *(long *)(in_stack_00000018 + 0x18) = lVar8;
            thunk_FUN_03f5d7b8((long *)(in_stack_00000018 + 0x18));
            uVar7 = 1;
            goto LAB_076fb3c4;
          }
          cVar6 = '\0';
          if (*(long *)(in_stack_00000018 + 0x40) != 0) {
            cVar6 = *(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20);
          }
          if (cVar6 != '\0') {
            lVar8 = thunk_FUN_03fc39d4(&DAT_09182ff8);
            if (*(int *)(lVar8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
            uVar4 = thunk_FUN_03fc39d4(&DAT_0920af80);
            uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,uVar5,0);
            thunk_FUN_03fc39d4(&DAT_09187348);
            uVar4 = thunk_FUN_03f9944c();
            Newtonsoft_Json_JsonException___ctor(uVar4,uVar3,0);
            uVar3 = thunk_FUN_03fc39d4(&DAT_091ea090);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,uVar3);
          }
        }
        goto LAB_076fb0a0;
      }
    }
    cVar6 = '\0';
    if (*(long *)(in_stack_00000018 + 0x40) != 0) {
      cVar6 = *(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20);
    }
    if (cVar6 != '\0') {
      lVar8 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(unaff_x21 + 0x10);
      if (lVar8 == 0) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920af98);
        lVar8 = thunk_FUN_03fc39d4(&DAT_091f8568);
      }
      else {
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920af98);
      }
      if (plVar11 != (long *)0x0) {
        plVar11 = (long *)System_Object__GetType(plVar11,0);
        if (plVar11 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
          uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,lVar8,uVar5,0);
          thunk_FUN_03fc39d4(&DAT_09187348);
          uVar4 = thunk_FUN_03f9944c();
          Newtonsoft_Json_JsonException___ctor(uVar4,uVar3,0);
          uVar3 = thunk_FUN_03fc39d4(&DAT_091ea090);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,uVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == DAT_0917a928) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076fb3a8;
    }
  }
LAB_076fb38c:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a928,0);
LAB_076fb3a8:
  (*(code *)*puVar2)(plVar11,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_03f5d7b8();
  uVar7 = 2;
LAB_076fb3c4:
  *(undefined4 *)(in_stack_00000018 + 0x10) = uVar7;
  return 1;
}

