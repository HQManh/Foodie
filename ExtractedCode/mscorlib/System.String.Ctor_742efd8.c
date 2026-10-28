// rea decompile_all
// name: System.String$$Ctor
// address: 0x742efd8
// body: available
// range: 0x742efd8-0x742f0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742f068 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742f0c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__Ctor(undefined2 param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if ((int)param_2 < 1) {
    if (param_2 != 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09219b28);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091ff7a0);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091da278);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    lVar2 = **(long **)(DAT_09535468 + 0xb8);
  }
  else {
    lVar2 = thunk_FUN_03f968a0(param_2);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar7 = (undefined4 *)(lVar2 + 0x14);
    uVar1 = CONCAT22(param_1,param_1);
    puVar6 = puVar7;
    if (3 < param_2) {
      do {
        uVar8 = param_2;
        param_2 = uVar8 - 4;
        puVar7 = puVar6 + 2;
        *puVar6 = uVar1;
        puVar6[1] = uVar1;
        puVar6 = puVar7;
      } while (3 < param_2);
      param_2 = uVar8 - 8;
    }
    if ((param_2 >> 1 & 1) != 0) {
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    }
    if ((param_2 & 1) != 0) {
      *(undefined2 *)puVar7 = param_1;
    }
  }
  return lVar2;
}

