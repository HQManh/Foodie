// rea decompile_all
// name: System.Text.ValueStringBuilder$$Append
// address: 0x744c12c
// body: available
// range: 0x744c12c-0x744c323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744c1b8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_ValueStringBuilder__Append(long param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((DAT_095210bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_095210bd = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x18);
  if ((int)(uVar1 - param_3) < (int)uVar5) {
    System_Text_ValueStringBuilder__Grow(param_1,param_3);
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar5 <= uVar1) && (param_3 <= uVar1 - uVar5)) {
    lVar6 = *(long *)(param_1 + 8);
    if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if (0 < (int)param_3) {
      uVar3 = (ulong)param_3 - 1;
      uVar8 = 7;
      uVar7 = 6;
      uVar10 = 5;
      uVar9 = 4;
      uVar12 = 3;
      uVar11 = 2;
      uVar14 = 1;
      uVar13 = 0;
      uVar2 = (ulong)(param_3 + 7) & 0xfffffff8;
      puVar4 = (undefined2 *)(lVar6 + (long)(int)uVar5 * 2 + 8);
      do {
        if (uVar13 <= uVar3) {
          puVar4[-4] = param_2;
        }
        if (uVar14 <= uVar3) {
          puVar4[-3] = param_2;
        }
        if (uVar11 <= uVar3) {
          puVar4[-2] = param_2;
        }
        if (uVar12 <= uVar3) {
          puVar4[-1] = param_2;
        }
        if (uVar9 <= uVar3) {
          *puVar4 = param_2;
        }
        if (uVar10 <= uVar3) {
          puVar4[1] = param_2;
        }
        if (uVar7 <= uVar3) {
          puVar4[2] = param_2;
        }
        if (uVar8 <= uVar3) {
          puVar4[3] = param_2;
        }
        uVar9 = uVar9 + 8;
        uVar10 = uVar10 + 8;
        uVar11 = uVar11 + 8;
        uVar12 = uVar12 + 8;
        uVar2 = uVar2 - 8;
        uVar13 = uVar13 + 8;
        uVar14 = uVar14 + 8;
        uVar7 = uVar7 + 8;
        uVar8 = uVar8 + 8;
        puVar4 = puVar4 + 8;
      } while (uVar2 != 0);
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
}

