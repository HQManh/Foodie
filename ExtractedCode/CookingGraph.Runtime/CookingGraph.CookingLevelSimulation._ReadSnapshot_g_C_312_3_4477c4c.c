// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$<ReadSnapshot>g__C|312_3
// address: 0x4477c4c
// body: available
// range: 0x4477c4c-0x4477e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4477e3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__<ReadSnapshot>g__C_312_3(long param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_095180a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182d30);
    FUN_03f5c2a4(&DAT_091ca800);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_09179348);
    FUN_03f5c2a4(&DAT_091e7880);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_095180a0 = 1;
  }
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_1,0);
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    if ((param_2 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar12 = *(undefined8 *)(param_1 + 0x48);
    }
    cVar2 = *(char *)(param_1 + 0x18);
    cVar3 = *(char *)(param_1 + 0x19);
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar8 = puVar5[0xb7];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar9 = *puVar5;
      lVar8 = thunk_FUN_03f9944c(DAT_09179348);
      FUN_053239c8(lVar8,uVar9,DAT_091e7880,0);
      lVar6 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar6 + 0x5b8) = lVar8;
      thunk_FUN_03f5d7b8(lVar6 + 0x5b8,lVar8);
    }
    uVar7 = FUN_04af6d6c(uVar7,lVar8,DAT_091ca800);
    uVar7 = FUN_04b0462c(uVar7,DAT_091cae30);
    uVar9 = thunk_FUN_03f9944c(DAT_09182d30);
    CookingGraph_CookingCustomerSnapshot___ctor
              (uVar11,uVar10,uVar13,uVar12,uVar9,uVar1,uVar4,cVar2 != '\0',cVar3 != '\0',uVar7,0);
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

