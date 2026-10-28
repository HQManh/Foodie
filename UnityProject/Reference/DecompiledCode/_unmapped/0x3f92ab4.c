// rea decompile_all
// name: FUN_03f92ab4
// address: 0x3f92ab4
// body: available
// range: 0x3f92ab4-0x3f92c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f92c04 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f92ab4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  long local_48;
  void *pvStack_40;
  void *local_38;
  long local_30;
  long *plStack_28;
  
  plStack_28 = param_1 + 2;
  pvVar6 = (void *)param_1[1];
  if ((ulong)((*plStack_28 - (long)pvVar6 >> 3) * -0x5555555555555555) < param_2) {
    lVar3 = (long)pvVar6 - *param_1 >> 3;
    uVar1 = lVar3 * -0x5555555555555555 + param_2;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    lVar2 = *plStack_28 - *param_1 >> 3;
    local_30 = 0;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar4 == 0) {
      auVar7 = ZEXT816(0);
    }
    else {
      auVar7 = FUN_03f7bc88();
    }
    local_48 = auVar7._0_8_;
    pvVar6 = (void *)(local_48 + lVar3 * 8);
    local_30 = local_48 + auVar7._8_8_ * 0x18;
    pvStack_40 = pvVar6;
    if ((param_2 * 3 & 0x1fffffffffffffff) != 0) {
      sVar5 = (param_2 - 1 & 0x1fffffffffffffff) * 0x18 + 0x18;
      local_38 = pvVar6;
      memset(pvVar6,0,sVar5);
      pvVar6 = (void *)((long)pvVar6 + sVar5);
    }
    local_38 = pvVar6;
    FUN_03f92c1c(param_1,&local_48);
    FUN_03f8ce7c(&local_48);
  }
  else {
    if ((param_2 * 3 & 0x1fffffffffffffff) != 0) {
      sVar5 = (param_2 - 1 & 0x1fffffffffffffff) * 0x18 + 0x18;
      memset(pvVar6,0,sVar5);
      pvVar6 = (void *)((long)pvVar6 + sVar5);
    }
    param_1[1] = (long)pvVar6;
  }
  return;
}

