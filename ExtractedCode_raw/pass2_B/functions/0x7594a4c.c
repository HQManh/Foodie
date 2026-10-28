// rea decompile_all
// name: System.DateTime$$AddMonths
// address: 0x7594a4c
// body: available
// range: 0x7594a4c-0x7594c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7594c8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_DateTime__AddMonths(ulong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_34;
  undefined8 local_28;
  
  if ((DAT_09521b83 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521b83 = 1;
  }
  local_28 = 0;
  local_34 = 0;
  if (param_2 + 120000U < 0x3a981) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_DateTime__GetDatePart(param_1,(long)&local_28 + 4,&local_28,&local_34);
    uVar2 = (param_2 + (int)local_28) - 1;
    if ((int)uVar2 < 0) {
      uVar9 = (param_2 + (int)local_28 + -0xc) / 0xc;
      iVar10 = (int)local_28 + param_2 + ((uint)-((int)local_28 + param_2) / 0xc) * 0xc + 0xc;
    }
    else {
      uVar9 = uVar2 / 0xc;
      iVar10 = uVar2 % 0xc + 1;
    }
    iVar11 = local_28._4_4_ + uVar9;
    local_28 = CONCAT44(iVar11,iVar10);
    if (iVar11 - 1U < 9999) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = System_DateTime__DaysInMonth(iVar11,iVar10);
      iVar1 = local_34;
      if (iVar3 <= local_34) {
        iVar1 = iVar3;
      }
      local_34 = iVar1;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = System_DateTime__DateToTicks(iVar11,iVar10,iVar1);
      return (*param_1 & 0x3fffffffffffffff) % 864000000000 + lVar4 | *param_1 & 0xc000000000000000;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921f8f0);
    puVar7 = &DAT_0920f0c0;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921f8f0);
    puVar7 = &DAT_09208140;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar8,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c78f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

