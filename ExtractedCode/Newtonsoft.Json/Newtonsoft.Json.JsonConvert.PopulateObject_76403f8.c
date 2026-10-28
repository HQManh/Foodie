// rea decompile_all
// name: Newtonsoft.Json.JsonConvert$$PopulateObject
// address: 0x76403f8
// body: available
// range: 0x76403f8-0x764060f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764056c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76405fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7640600 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7640604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x764060c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07640608) */

void Newtonsoft_Json_JsonConvert__PopulateObject(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_095222b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187460);
    FUN_03f5c2a4(&DAT_0918b3e8);
    DAT_095222b3 = 1;
  }
  plVar2 = (long *)Newtonsoft_Json_JsonSerializer__CreateDefault(param_3);
  uVar3 = thunk_FUN_03f9944c(DAT_0918b3e8);
  System_IO_StringReader___ctor(uVar3,param_1,0);
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_09187460);
  Newtonsoft_Json_JsonTextReader___ctor(plVar4,uVar3);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar2 + 0x548))(plVar2,plVar4,param_2,*(undefined8 *)(*plVar2 + 0x550));
  if (param_3 != 0) {
    if ((DAT_09522377 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091b6a50);
      DAT_09522377 = 1;
    }
    if (*(char *)(param_3 + 0x51) != '\0') {
      while( true ) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
        if ((uVar5 & 1) == 0) break;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        if (iVar1 != 5) {
          uVar3 = thunk_FUN_03fc39d4(&DAT_091fb560);
          uVar3 = Newtonsoft_Json_JsonSerializationException__Create(plVar4,uVar3,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_091d16e8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,uVar6);
        }
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185a58) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076405d4;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076405d4:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  return;
}

