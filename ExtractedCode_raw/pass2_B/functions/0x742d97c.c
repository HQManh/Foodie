// rea decompile_all
// name: System.String$$CompareOrdinal
// address: 0x742d97c
// body: available
// range: 0x742d97c-0x742db6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742da90 to 0x75ca184 System.SpanHelpers$$SequenceCompareTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742daec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742db68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__CompareOrdinal(long param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09520ffd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09520ffd = 1;
  }
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar3 = 1;
    if (param_1 == 0) {
      uVar3 = 0xffffffff;
    }
    uVar1 = 0;
    if (param_1 != param_3) {
      uVar1 = uVar3;
    }
    return (ulong)uVar1;
  }
  if (param_5 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921e638);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091ff7a0);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091da240);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  uVar3 = param_2;
  if (-1 < (int)(param_4 | param_2)) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Math__Min(param_5,iVar4 - param_2,0);
    iVar4 = System_Math__Min(param_5,*(int *)(param_3 + 0x10) - param_4,0);
    if ((-1 < (int)uVar3) && (-1 < iVar4)) {
      if ((param_5 != 0) && ((param_1 != param_3 || (param_2 != param_4)))) {
        uVar5 = System_SpanHelpers__SequenceCompareTo
                          (param_1 + (ulong)param_2 * 2 + 0x14,uVar3,
                           param_3 + (ulong)param_4 * 2 + 0x14,iVar4,0);
        return uVar5;
      }
      return 0;
    }
  }
  puVar2 = &DAT_0921d418;
  if ((int)uVar3 < 0) {
    puVar2 = &DAT_0921d410;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar2);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar7 = thunk_FUN_03f9944c();
  uVar8 = thunk_FUN_03fc39d4(&DAT_092049a8);
  System_ArgumentOutOfRangeException___ctor(uVar7,uVar6,uVar8,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091da240);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar6);
}

