// rea decompile_all
// name: FUN_0402d118
// address: 0x402d118
// body: available
// range: 0x402d118-0x402d2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402d2dc to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0402d118(ulong *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *param_1;
  uVar8 = *param_1;
  uVar3 = 4;
  if ((uVar8 & 1) != 0) {
    uVar3 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 < param_4) {
    uVar9 = 0x3fffffffffffffef;
    if (0x3fffffffffffffef - uVar3 < param_4 - uVar3) {
      FUN_03fe3950(param_1);
LAB_0402d2dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f650f4();
    }
    pbVar4 = (byte *)((long)param_1 + 4);
    if ((uVar6 & 1) != 0) {
      pbVar4 = (byte *)param_1[2];
    }
    if (uVar3 < 0x1fffffffffffffe7) {
      uVar6 = param_4;
      if (param_4 <= uVar3 * 2) {
        uVar6 = uVar3 * 2;
      }
      uVar9 = 5;
      if (4 < uVar6) {
        uVar9 = (uVar6 | 3) + 1;
      }
      if (uVar9 >> 0x3e != 0) goto LAB_0402d2dc;
    }
    pbVar2 = operator_new(uVar9 << 2);
    if ((uVar8 & 1) != 0) {
      operator_delete(pbVar4);
    }
    param_1[1] = 0;
    param_1[2] = (ulong)pbVar2;
    *param_1 = uVar9 | 1;
  }
  else {
    pbVar2 = (byte *)((long)param_1 + 4);
    if ((uVar6 & 1) != 0) {
      pbVar2 = (byte *)param_1[2];
    }
  }
  if (param_2 != param_3) {
    uVar3 = (long)param_3 + (-4 - (long)param_2);
    if ((0x1b < uVar3) && (0x1f < (ulong)((long)pbVar2 - (long)param_2))) {
      puVar7 = (undefined8 *)(param_2 + 4);
      uVar3 = (uVar3 >> 2) + 1;
      uVar6 = uVar3 & 0x7ffffffffffffff8;
      pbVar4 = pbVar2 + uVar6 * 4;
      pbVar2 = pbVar2 + 0x10;
      uVar8 = uVar6;
      do {
        puVar1 = puVar7 + -1;
        uVar10 = puVar7[-2];
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        uVar8 = uVar8 - 8;
        puVar7 = puVar7 + 4;
        *(undefined8 *)(pbVar2 + -8) = *puVar1;
        *(undefined8 *)(pbVar2 + -0x10) = uVar10;
        *(undefined8 *)(pbVar2 + 8) = uVar12;
        *(undefined8 *)pbVar2 = uVar11;
        pbVar2 = pbVar2 + 0x20;
      } while (uVar8 != 0);
      pbVar2 = pbVar4;
      param_2 = param_2 + uVar6;
      if (uVar3 == uVar6) goto LAB_0402d29c;
    }
    do {
      puVar5 = param_2 + 1;
      pbVar4 = pbVar2 + 4;
      *(undefined4 *)pbVar2 = *param_2;
      pbVar2 = pbVar4;
      param_2 = puVar5;
    } while (puVar5 != param_3);
  }
LAB_0402d29c:
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  if ((*param_1 & 1) == 0) {
    *(byte *)param_1 = (byte)((int)param_4 << 1);
  }
  else {
    param_1[1] = param_4;
  }
  return;
}

