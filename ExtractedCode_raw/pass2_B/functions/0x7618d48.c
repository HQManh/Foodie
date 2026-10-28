// rea decompile_all
// name: System.Decimal.DecCalc$$OverflowUnscale
// address: 0x7618d48
// body: available
// range: 0x7618d48-0x7618e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7618e6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Decimal_DecCalc__OverflowUnscale(long *param_1,int param_2,ulong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  
  if ((DAT_095220ba & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220ba = 1;
  }
  if (-1 < param_2 + -1) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)*(uint *)((long)param_1 + 4) | 0x600000000;
    iVar8 = SUB164(auVar2 * ZEXT816(0x199999999999999a),8);
    uVar6 = CONCAT44(*(uint *)((long)param_1 + 4) + iVar8 * -10,(int)*param_1) / 10;
    iVar5 = (int)uVar6;
    uVar1 = (int)*param_1 + iVar5 * -10;
    *(int *)param_1 = iVar5;
    *(int *)((long)param_1 + 4) = iVar8;
    *(undefined4 *)(param_1 + 1) = 0x19999999;
    if ((5 < uVar1) || ((uVar1 == 5 && (((uVar6 & 1) != 0 || ((param_3 & 1) != 0)))))) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *param_1;
      *param_1 = lVar7 + 1;
      if (lVar7 == -1) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
    }
    return param_2 + -1;
  }
  thunk_FUN_03fc39d4(&DAT_09188d78);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_09212d08);
  System_OverflowException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091e8c68);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

