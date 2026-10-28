// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviorTimeLimitedPurchaseOfferAbstract$$get_DateEnd
// address: 0x7361350
// body: available
// range: 0x7361350-0x736146b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7361468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract__get_DateEnd(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_0952085e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09225d80);
    DAT_0952085e = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x60);
  uVar4 = *puVar3;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_DateTime__op_Equality
                    (uVar4,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18),0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
LAB_07361468:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20),0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_07361468;
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      System_DateTime__TryParseExact(uVar4,DAT_09225d80,uVar2,7,puVar3,0);
    }
  }
  return *puVar3;
}

