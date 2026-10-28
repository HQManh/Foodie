// rea decompile_all
// name: AnhPD.FoodOrder.PieceSet$$Of
// address: 0x41da488
// body: available
// range: 0x41da488-0x41da597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41da594 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceSet__Of(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_09516aa8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516aa8 = 1;
  }
  if ((int)param_3 < 1) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = *(long **)(DAT_09189158 + 0xb8);
    lVar6 = *plVar7;
    lVar8 = plVar7[2];
    param_1[1] = plVar7[1];
    *param_1 = lVar6;
    param_1[2] = lVar8;
  }
  else {
    if (0x2f < param_2) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_0921e048);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d5a00);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    if (0xe < param_3) {
      param_3 = 0xf;
    }
    lVar6 = (ulong)param_3 << ((param_2 & 0xf) << 2);
    bVar3 = (param_2 & 0x30) != 0x10;
    lVar8 = lVar6;
    if (bVar3) {
      lVar8 = 0;
    }
    lVar1 = 0;
    if (bVar3 && 0xf < param_2) {
      lVar1 = lVar6;
    }
    if (0xf < param_2) {
      lVar6 = 0;
    }
    lVar2 = 0;
    if (0xf < param_2) {
      lVar2 = lVar8;
    }
    param_1[2] = lVar1;
    *param_1 = lVar6;
    param_1[1] = lVar2;
  }
  return;
}

