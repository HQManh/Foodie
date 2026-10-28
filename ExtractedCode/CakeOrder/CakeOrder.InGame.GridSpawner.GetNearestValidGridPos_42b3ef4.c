// rea decompile_all
// name: CakeOrder.InGame.GridSpawner$$GetNearestValidGridPos
// address: 0x42b3ef4
// body: available
// range: 0x42b3ef4-0x42b3fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b3fe0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b3fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong CakeOrder_InGame_GridSpawner__GetNearestValidGridPos
                (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
                uint param_7,int param_8)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if ((int)param_7 < 1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 0;
    uVar2 = 0xffffffff;
    fVar3 = 3.4028235e+38;
    uVar4 = 0xffffffff;
    do {
      if (0 < param_8) {
        if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (**(uint **)(param_6 + 0x10) <= uVar1) {
LAB_042b3fe0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(*(uint **)(param_6 + 0x10) + 4);
        uVar6 = 0;
        do {
          if ((uint)lVar5 <= param_8 - 1U) goto LAB_042b3fe0;
          if (*(char *)(param_6 + 0x20 + lVar5 * uVar1 + uVar6) != '\0') {
            fVar7 = *(float *)(param_5 + 0x10);
            fVar8 = param_1 - (fVar7 * 0.5 + fVar7 * (float)(int)uVar1 + param_3);
            fVar7 = param_2 - (fVar7 * 0.5 + fVar7 * (float)(int)uVar6 + param_4);
            fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
            if (fVar7 < fVar3) {
              uVar4 = uVar6 & 0xffffffff;
              uVar2 = uVar1 & 0xffffffff;
              fVar3 = fVar7;
            }
          }
          uVar6 = uVar6 + 1;
        } while ((long)param_8 != uVar6);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_7);
    uVar2 = uVar2 | uVar4 << 0x20;
  }
  return uVar2;
}

