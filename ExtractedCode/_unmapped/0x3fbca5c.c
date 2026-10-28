// rea decompile_all
// name: FUN_03fbca5c
// address: 0x3fbca5c
// body: available
// range: 0x3fbca5c-0x3fbcb2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbcb28 to 0x3f5d0a4 FUN_03f5d0a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbca5c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_58;
  undefined8 uStack_50;
  byte local_48 [8];
  ulong local_40;
  void *local_38;
  void *local_30;
  ulong uStack_28;
  
  uVar3 = DAT_09535790;
  uVar1 = (ulong)(DAT_09535780 >> 1);
  if ((DAT_09535780 & 1) != 0) {
    uVar1 = DAT_09535788;
  }
  if (uVar1 == 0) {
    FUN_03f8fb50(local_48);
    local_58 = &DAT_01a5130a;
    uStack_50 = 3;
    uStack_28 = (ulong)(local_48[0] >> 1);
    local_30 = (void *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      uStack_28 = local_40;
      local_30 = local_38;
    }
    FUN_03f67944(param_1,&local_30,&local_58);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  }
  else {
    if ((DAT_09535780 & 1) != 0) {
      FUN_03f5d0a4(param_1,DAT_09535790);
      return;
    }
    uVar2 = CONCAT71(uRam0000000009535781,DAT_09535780);
    param_1[1] = DAT_09535788;
    *param_1 = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

