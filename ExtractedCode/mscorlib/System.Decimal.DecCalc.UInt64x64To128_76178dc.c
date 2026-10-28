// rea decompile_all
// name: System.Decimal.DecCalc$$UInt64x64To128
// address: 0x76178dc
// body: available
// range: 0x76178dc-0x7617a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7617a00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__UInt64x64To128(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((DAT_095220b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220b3 = 1;
  }
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
    bVar3 = *(int *)(DAT_0918ff90 + 0xe4) == 0;
  }
  else {
    bVar3 = false;
  }
  uVar8 = (param_2 & 0xffffffff) * (param_1 & 0xffffffff);
  uVar7 = (param_2 >> 0x20) * (param_1 & 0xffffffff);
  uVar9 = uVar7 << 0x20;
  uVar2 = uVar8 + uVar9;
  if (bVar3) {
    FUN_03f5c424();
  }
  uVar6 = (param_2 & 0xffffffff) * (param_1 >> 0x20);
  uVar1 = uVar6 << 0x20;
  uVar9 = (uVar7 >> 0x20) + (param_2 >> 0x20) * (param_1 >> 0x20) + (uVar6 >> 0x20) +
          (ulong)CARRY8(uVar8,uVar9) + (ulong)CARRY8(uVar2,uVar1);
  if (uVar9 >> 0x20 == 0) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(ulong *)(param_3 + 8) = uVar2 + uVar1;
    *(int *)(param_3 + 4) = (int)uVar9;
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09188d78);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_09212d08);
  System_OverflowException___ctor(uVar4,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091e8c80);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

