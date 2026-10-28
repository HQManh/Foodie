// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$SelectToken
// address: 0x76f0278
// body: available
// range: 0x76f0278-0x76f0563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f04c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0560 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076f055c) */

long Newtonsoft_Json_Linq_JToken__SelectToken
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_095228a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187228);
    DAT_095228a0 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09187228);
  Newtonsoft_Json_Linq_JsonPath_JPath___ctor(lVar2,param_2,0);
  if ((lVar2 == 0) ||
     (plVar3 = (long *)Newtonsoft_Json_Linq_JsonPath_JPath__Evaluate
                                 (lVar2,param_1,param_1,param_3,0), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917a5d0) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_076f0380;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a5d0,0);
LAB_076f0380:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  lVar2 = 0;
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076f0410;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_076f0410:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return lVar2;
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_076f050c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917ac98) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076f0474;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ac98,0);
LAB_076f0474:
    lVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    bVar1 = lVar2 != 0;
    lVar2 = lVar7;
    if (bVar1) {
      thunk_FUN_03fc39d4(&DAT_09187348);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_0920a630);
      Newtonsoft_Json_JsonException___ctor(uVar5,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d1408);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076f0528;
    }
  }
LAB_076f050c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_076f0528:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return lVar2;
}

